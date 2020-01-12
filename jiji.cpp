#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main() {
	
	bool a, u, e, o;
	
	while (!(GetKeyState(VK_ESCAPE) & 0x8000)){
		if((GetKeyState('A') & 0x8000) && !a) {
			keybd_event(VK_BACK, 0x08, 0, 0);
			keybd_event(VK_BACK, 0x08, KEYEVENTF_KEYUP, 0);
			keybd_event(VkKeyScan('I'), 0x97, 0, 0);
			keybd_event(VkKeyScan('I'), 0x97, KEYEVENTF_KEYUP, 0);
			a = 1;
		}
		if((GetKeyState('U') & 0x8000) && !u) {
			keybd_event(VK_BACK, 0x08, 0, 0);
			keybd_event(VK_BACK, 0x08, KEYEVENTF_KEYUP, 0);
			keybd_event(VkKeyScan('I'), 0x97, 0, 0);
			keybd_event(VkKeyScan('I'), 0x97, KEYEVENTF_KEYUP, 0);
			u = 1;
		}
		if((GetKeyState('E') & 0x8000) && !e) {
			keybd_event(VK_BACK, 0x08, 0, 0);
			keybd_event(VK_BACK, 0x08, KEYEVENTF_KEYUP, 0);
			keybd_event(VkKeyScan('I'), 0x97, 0, 0);
			keybd_event(VkKeyScan('I'), 0x97, KEYEVENTF_KEYUP, 0);
			e = 1;
		}
		if((GetKeyState('O') & 0x8000) && !o) {
			keybd_event(VK_BACK, 0x08, 0, 0);
			keybd_event(VK_BACK, 0x08, KEYEVENTF_KEYUP, 0);
			keybd_event(VkKeyScan('I'), 0x97, 0, 0);
			keybd_event(VkKeyScan('I'), 0x97, KEYEVENTF_KEYUP, 0);
			o = 1;
		}
		if(!(GetKeyState('A') & 0x8000)) {
			a = 0;
	    }
	    if(!(GetKeyState('U') & 0x8000)) {
			u = 0;
	    }
	    if(!(GetKeyState('E') & 0x8000)) {
			e = 0;
	    }
	    if(!(GetKeyState('O') & 0x8000)) {
			o = 0;
	    }
	}
	
	return 0;
}
