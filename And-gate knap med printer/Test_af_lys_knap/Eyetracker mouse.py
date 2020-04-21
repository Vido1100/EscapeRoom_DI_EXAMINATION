from ctypes import *
user32 = windll.user32

def update():
	
	global enabled
	
	looking = tobiiEyeX.userPresence == "Present" and enabled
	if (looking and enabled):
		posx = tobiiEyeX.gazePointInPixelsX
		posy = tobiiEyeX.gazePointInPixelsY
		user32.SetCursorPos(int(posx),int(posy))
		
		
	diagnostics.watch(enabled)
	diagnostics.watch(posx)
	diagnostics.watch(posy)
	
		
if starting:
	enabled = True
	tobiiEyeX.update += update
	
toggle = keyboard.getPressed(Key.F10)

if toggle:
	enabled = not enabled