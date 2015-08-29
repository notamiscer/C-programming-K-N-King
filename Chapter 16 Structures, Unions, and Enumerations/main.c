#include <windows.h>
#include <string.h>

// Make global definitions

UINT Timer_ID;
HWND hWnd;

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

#define ID_BUTTON   102

static int   iXpos;
static int   iYpos;
       char  szMessage[100];

static char gszClassName[]  = "My Program";
static HINSTANCE ghInstance = NULL;

/*****************************************************************************/
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

        WNDCLASSEX WndClass;
        MSG Msg;

        ghInstance = hInstance;

        WndClass.cbSize        = sizeof(WNDCLASSEX);
        WndClass.style         = NULL;
        WndClass.lpfnWndProc   = WndProc;
        WndClass.cbClsExtra    = 0;
        WndClass.cbWndExtra    = 0;
        WndClass.hInstance     = ghInstance;
        WndClass.hIcon         = LoadIcon(NULL, IDI_APPLICATION);
        WndClass.hCursor       = LoadCursor(NULL, IDC_ARROW);
        WndClass.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
        WndClass.lpszMenuName  = NULL;
        WndClass.lpszClassName = gszClassName;
        WndClass.hIconSm       = LoadIcon(NULL, IDI_APPLICATION);

        if(!RegisterClassEx(&WndClass)) {
                MessageBox(0, "Window Registration Failed!", "Error!", MB_ICONSTOP | MB_OK);
                return 0;
        }

        hWnd = CreateWindowEx(
                WS_EX_STATICEDGE,
                gszClassName,
                " My Program",
                WS_OVERLAPPEDWINDOW,
                CW_USEDEFAULT, CW_USEDEFAULT,
                320, 240,
                NULL, NULL,
                ghInstance,
                NULL);


        if(hWnd == NULL) {
                MessageBox(0, "Window Creation Failed!", "Error!", MB_ICONSTOP | MB_OK);
                return 0;
        }

        strcpy(szMessage, "Welcome to My Window");
        iXpos = 70;
        iYpos = 10;
        ShowWindow(hWnd, nCmdShow);
        UpdateWindow(hWnd);

        while(GetMessage(&Msg, NULL, 0, 0)) {
                TranslateMessage(&Msg);
                DispatchMessage(&Msg);
        }
        return Msg.wParam;
}
/*****************************************************************************/
class WriteText
{
public:

    HDC hdc;
    PAINTSTRUCT ppaint;

    WriteText(int _Xpos, int _Ypos, char *_szMessage)
    {
        hdc = BeginPaint(hWnd, &ppaint);
        // Here you can set the color of the string
        //SetTextColor(hdc, RGB(0,0,0));
        TextOut(hdc, _Xpos, _Ypos, _szMessage, strlen(_szMessage));
        EndPaint(hWnd, &ppaint);
    }
};

/*****************************************************************************/
    LRESULT CALLBACK WndProc(HWND hWnd, UINT Message, WPARAM wParam, LPARAM lParam) {

        HWND hWndButton;
        switch(Message) {
                case WM_PAINT:
                        WriteText(iXpos, iYpos, szMessage);
                        break;

        		case WM_TIMER:
                        break;

                case WM_CLOSE:
                        DestroyWindow(hWnd);
                        break;

                case WM_DESTROY:
                        PostQuitMessage(0);
                        break;

                case WM_CREATE:{
                        hWndButton = CreateWindowEx(0,          /* more or ''extended'' styles */
                        TEXT("BUTTON"),                         /* GUI ''class'' to create */
                        TEXT("Run "),                           /* GUI caption */
                        WS_CHILD|WS_VISIBLE|BS_DEFPUSHBUTTON,   /* control styles separated by | */
                        260,                                    /* LEFT POSITION (Position from left) */
                        185,                                    /* TOP POSITION  (Position from Top) */
                        47,                                     /* WIDTH OF CONTROL */
                        25,                                     /* HEIGHT OF CONTROL */
                        hWnd,                                   /* Parent window handle */
                        (HMENU)ID_BUTTON,                       /* control''s ID for WM_COMMAND */
                        ghInstance,                             /* application instance */
                        NULL);
                        break;
                }

                case WM_COMMAND:{
                        if(((HWND)lParam) && (HIWORD(wParam) == BN_CLICKED)){
                            int iMID;
                            iMID = LOWORD(wParam);
                            switch(iMID){
                               // Button clicked
                                case ID_BUTTON:{
                                    // Notice this is a "C" call in string .h
                                    strcpy(szMessage, "*** This is my program ***");
                                    //wsprintf(szMessage."*** This is my program ***");
                                    iXpos = 10;
                                    iYpos = 40;
                                    // Write string in window by sending message WM_PAINT
                                    InvalidateRect(hWnd, NULL, NULL);
                                    break;
                                }
                                default:
                                break;
                            }
                        }
                        break;
                }
                default:
                return DefWindowProc(hWnd, Message, wParam, lParam);
        }
        return 0;
}
