resource 
Label
{
	cvarvisibility coop_ui_vt 100 ==
	
	title "$$c#037$$"
	name "default"
	rect		274 89 330 24
	fgcolor 1.000 0.000 0.000 0.800
	bgcolor 0.12 0.15 0.25 1.00
	
	borderstyle "3D_BORDER"
	
	horizontaljustify left
	verticaljustify top
	font 	serpentinemedium-10
	
	hovercommand "globalwidgetcommand tooltip_coop_startserver title \"\""
    hoverexitcommand "globalwidgetcommand tooltip_coop_startserver title \"\""
}

// resource
// Button
// {
	// title "Next"
	// name 	""
	// rect	543 90 60 22
	// font serpentinemedium-10
	// fgcolor			0.937 0.643 0.129 1.000
	// bgcolor			0.125 0.157 0.251 1.000
	// hoverbgcolor	0.278 0.365 0.510 1.000
	// hoverfgcolor	1.000 1.000 1.000 1.000
	// borderstyle "3D_BORDER"
	// hovershader menu/generic/button-hover
	// pressedshader menu/generic/button-press
    // clicksound sound/misc/menu/click.wav
	// stuffcommand "seta coop_ui_vt 101\n"
    // verticaljustify top
	// hovercommand "globalwidgetcommand coop_settings_tooltip title \"Show more Custom Maps\""
	// hoverexitcommand "globalwidgetcommand coop_settings_tooltip title \"\""
	
	// cvarvisibility coop_ui_vt 100 ==
// }

// resource
// Button
// {
	// title "Next"
	// name 	""
	// rect	543 90 60 22
	// font serpentinemedium-10
	// fgcolor			0.937 0.643 0.129 1.000
	// bgcolor			0.125 0.157 0.251 1.000
	// hoverbgcolor	0.278 0.365 0.510 1.000
	// hoverfgcolor	1.000 1.000 1.000 1.000
	// borderstyle "3D_BORDER"
	// hovershader menu/generic/button-hover
	// pressedshader menu/generic/button-press
    // clicksound sound/misc/menu/click.wav
	// stuffcommand "seta coop_ui_vt 100\n"
    // verticaljustify top
	// hovercommand "globalwidgetcommand coop_settings_tooltip title \"Show more Custom Maps\""
	// hoverexitcommand "globalwidgetcommand coop_settings_tooltip title \"\""
	
	// cvarvisibility coop_ui_vt 101 ==
// }

//[b608] chrissstrahl - this map is still unfinished and should not be in here
//resource
//Button
//{
//	cvarvisibility coop_ui_vt 100 ==
//	title "Coop Alien"
//	name 	"communitymap_coop_alien"
//	rect	275 114 328 20
//	font serpentinemedium-10
//	fgcolor 		1.000 1.000 1.000 0.800
//	bgcolor 		0.12 0.15 0.25 0.7
//	hoverbgcolor 	0.22 0.25 0.35 1.0
//	
//	horizontaljustify left
//	verticaljustify top
//
//	clicksound sound/misc/menu/click.wav
// 
//	stuffcommand "set ui_startmap coop_alien\n"
//	hovercommand "globalwidgetcommand coop_startserverShot shader sysimg/mapshots/coop_alien.tga;globalwidgetcommand coop_startserverName title Chrissstrahl"
 //   hoverexitcommand "globalwidgetcommand coop_startserverShot shader sysimg/2d/default-map-screen.tga;globalwidgetcommand coop_startserverName title \"\""
//}

resource
Button
{
	cvarvisibility coop_ui_vt 100 ==
	title "Coop Enterprise E"
	name 	"communitymap_coop_ente"
	rect	275 114 328 20
	font serpentinemedium-10
	fgcolor 		1.000 1.000 1.000 0.800
	bgcolor 		0.12 0.15 0.25 0.7
	hoverbgcolor 	0.22 0.25 0.35 1.0
	
	horizontaljustify left
	verticaljustify top
	
	clicksound sound/misc/menu/click.wav
 
	stuffcommand "set ui_startmap coop_ente\n"
	hovercommand "globalwidgetcommand coop_startserverShot shader sysimg/mapshots/coop_ente.tga;globalwidgetcommand coop_startserverName title \"Gsio01, Ritual, Chrissstrahl\""
	hoverexitcommand "globalwidgetcommand coop_startserverShot shader sysimg/2d/default-map-screen.tga;globalwidgetcommand coop_startserverName title \"\""
}

resource
Button
{
	cvarvisibility coop_ui_vt 100 ==
	title "Coop Bat'leth Arena"
	name 	"communitymap_coop_blArena"
	rect	275 135 328 20
	font serpentinemedium-10
	fgcolor 		1.000 1.000 1.000 0.800
	bgcolor 		0.12 0.15 0.25 0.7
	hoverbgcolor 	0.22 0.25 0.35 1.0
	
	horizontaljustify left
	verticaljustify top
	
	clicksound sound/misc/menu/click.wav
 
	stuffcommand "set ui_startmap coop_blArena\n"
	hovercommand "globalwidgetcommand coop_startserverShot shader sysimg/mapshots/coop_blArena.tga;globalwidgetcommand coop_startserverName title \"Antiker1804, Chrissstrahl\""
	hoverexitcommand "globalwidgetcommand coop_startserverShot shader sysimg/2d/default-map-screen.tga;globalwidgetcommand coop_startserverName title \"\""
}
resource
Button
{
	cvarvisibility coop_ui_vt 100 ==
	title "Coop Bugs"
	name 	"communitymap_coop_bugs"
	rect	275 156 328 20
	font serpentinemedium-10
	fgcolor 		1.000 1.000 1.000 0.800
	bgcolor 		0.12 0.15 0.25 0.7
	hoverbgcolor 	0.22 0.25 0.35 1.0
	
	horizontaljustify left
	verticaljustify top
	
	clicksound sound/misc/menu/click.wav
 
	stuffcommand "set ui_startmap coop_bugs\n"
	hovercommand "globalwidgetcommand coop_startserverShot shader sysimg/mapshots/coop_bugs.tga;globalwidgetcommand coop_startserverName title \"Chrissstrahl\""
	hoverexitcommand "globalwidgetcommand coop_startserverShot shader sysimg/2d/default-map-screen.tga;globalwidgetcommand coop_startserverName title \"\""
}
resource
Button
{
	cvarvisibility coop_ui_vt 100 ==
	title "Coop H'atoria Outpost"
	name 	"communitymap_coop_hatoriaOutpost"
	rect	275 177 328 20
	font serpentinemedium-10
	fgcolor 		1.000 1.000 1.000 0.800
	bgcolor 		0.12 0.15 0.25 0.7
	hoverbgcolor 	0.22 0.25 0.35 1.0
	
	horizontaljustify left
	verticaljustify top
	
	clicksound sound/misc/menu/click.wav
 
	stuffcommand "set ui_startmap coop_hatoriaOutpost\n"
	hovercommand "globalwidgetcommand coop_startserverShot shader sysimg/mapshots/coop_hatoriaOutpost.tga;globalwidgetcommand coop_startserverName title \"Chrissstrahl\""
	hoverexitcommand "globalwidgetcommand coop_startserverShot shader sysimg/2d/default-map-screen.tga;globalwidgetcommand coop_startserverName title \"\""
}
resource
Button
{
	cvarvisibility coop_ui_vt 100 ==
	title "Coop Ice Station"
	name 	"communitymap_coop_iceStation"
	rect	275 198 328 20
	font serpentinemedium-10
	fgcolor 		1.000 1.000 1.000 0.800
	bgcolor 		0.12 0.15 0.25 0.7
	hoverbgcolor 	0.22 0.25 0.35 1.0
	
	horizontaljustify left
	verticaljustify top
	
	clicksound sound/misc/menu/click.wav
 
	stuffcommand "set ui_startmap coop_iceStation\n"
	hovercommand "globalwidgetcommand coop_startserverShot shader sysimg/mapshots/coop_iceStation.tga;globalwidgetcommand coop_startserverName title \"Chrissstrahl\""
	hoverexitcommand "globalwidgetcommand coop_startserverShot shader sysimg/2d/default-map-screen.tga;globalwidgetcommand coop_startserverName title \"\""
}
resource
Button
{
	cvarvisibility coop_ui_vt 100 ==
	title "Coop Rescue Chell"
	name 	"communitymap_coop_rescueChell"
	rect	275 219 328 20
	font serpentinemedium-10
	fgcolor 		1.000 1.000 1.000 0.800
	bgcolor 		0.12 0.15 0.25 0.7
	hoverbgcolor 	0.22 0.25 0.35 1.0
	
	horizontaljustify left
	verticaljustify top
	
	clicksound sound/misc/menu/click.wav
 
	stuffcommand "set ui_startmap coop_rescueChell\n"
	hovercommand "globalwidgetcommand coop_startserverShot shader sysimg/mapshots/coop_rescueChell.tga;globalwidgetcommand coop_startserverName title \"Daedalus, Chrissstrahl\""
	hoverexitcommand "globalwidgetcommand coop_startserverShot shader sysimg/2d/default-map-screen.tga;globalwidgetcommand coop_startserverName title \"\""
}
resource
Button
{
	cvarvisibility coop_ui_vt 100 ==
	title "1. Coop Paradise Island"
	name 	"communitymap_coop_paradiseIsland"
	rect	275 240 328 20
	font serpentinemedium-10
	fgcolor 		1.000 1.000 1.000 0.800
	bgcolor 		0.12 0.15 0.25 0.7
	hoverbgcolor 	0.22 0.25 0.35 1.0
	
	horizontaljustify left
	verticaljustify top
	
	clicksound sound/misc/menu/click.wav
 
	stuffcommand "set ui_startmap coop_paradiseIsland\n"
	hovercommand "globalwidgetcommand coop_startserverShot shader sysimg/mapshots/coop_paradiseIsland.tga;globalwidgetcommand coop_startserverName title \"Avenger, Daedalus\""
	hoverexitcommand "globalwidgetcommand coop_startserverShot shader sysimg/2d/default-map-screen.tga;globalwidgetcommand coop_startserverName title \"\""
}
resource
Button
{
	cvarvisibility coop_ui_vt 100 ==
	title "2. Coop Paradise Island 2"
	name 	"communitymap_coop_paradiseIsland2"
	rect	275 261 328 20
	font serpentinemedium-10
	fgcolor 		1.000 1.000 1.000 0.800
	bgcolor 		0.12 0.15 0.25 0.7
	hoverbgcolor 	0.22 0.25 0.35 1.0
	
	horizontaljustify left
	verticaljustify top
	
	clicksound sound/misc/menu/click.wav
 
	stuffcommand "set ui_startmap coop_paradiseIsland2\n"
	hovercommand "globalwidgetcommand coop_startserverShot shader sysimg/mapshots/coop_paradiseIsland2.tga;globalwidgetcommand coop_startserverName title \"Avenger, Chrissstrahl\""
	hoverexitcommand "globalwidgetcommand coop_startserverShot shader sysimg/2d/default-map-screen.tga;globalwidgetcommand coop_startserverName title \"\""
}
resource
Button
{
	cvarvisibility coop_ui_vt 100 ==
	title "Coop Equinox"
	name 	"communitymap_coop_equinox"
	rect	275 282 328 20
	font serpentinemedium-10
	fgcolor 		1.000 1.000 1.000 0.800
	bgcolor 		0.12 0.15 0.25 0.7
	hoverbgcolor 	0.22 0.25 0.35 1.0
	
	horizontaljustify left
	verticaljustify top
	
	clicksound sound/misc/menu/click.wav
 
	stuffcommand "set ui_startmap coop_equinox\n"
	hovercommand "globalwidgetcommand coop_startserverShot shader sysimg/mapshots/coop_equinox.tga;globalwidgetcommand coop_startserverName title \"-\""
	hoverexitcommand "globalwidgetcommand coop_startserverShot shader sysimg/2d/default-map-screen.tga;globalwidgetcommand coop_startserverName title \"\""
}
//[b609] chrissstrahl - added new map
resource
Button
{
	cvarvisibility coop_ui_vt 100 ==
	title "Coop Core Attack"
	name 	"communitymap_coop_coreattack"
	rect	275 303 328 20
	font serpentinemedium-10
	fgcolor 		1.000 1.000 1.000 0.800
	bgcolor 		0.12 0.15 0.25 0.7
	hoverbgcolor 	0.22 0.25 0.35 1.0
	
	horizontaljustify left
	verticaljustify top
	
	clicksound sound/misc/menu/click.wav
 
	stuffcommand "set ui_startmap coop_coreattack\n"
	hovercommand "globalwidgetcommand coop_startserverShot shader sysimg/mapshots/coop_coreattack.tga;globalwidgetcommand coop_startserverName title \"-\""
	hoverexitcommand "globalwidgetcommand coop_startserverShot shader sysimg/2d/default-map-screen.tga;globalwidgetcommand coop_startserverName title \"\""
}
//[b611] chrissstrahl - added new map
resource
Button
{
	cvarvisibility coop_ui_vt 100 ==
	title "Coop Section 31"
	name 	"communitymap_coop_section31l1"
	rect	275 324 328 20
	font serpentinemedium-10
	fgcolor 		1.000 1.000 1.000 0.800
	bgcolor 		0.12 0.15 0.25 0.7
	hoverbgcolor 	0.22 0.25 0.35 1.0
	
	horizontaljustify left
	verticaljustify top
	
	clicksound sound/misc/menu/click.wav
 
	stuffcommand "set ui_startmap coop_section31l1\n"
	hovercommand "globalwidgetcommand coop_startserverShot shader sysimg/mapshots/coop_section31l1.tga;globalwidgetcommand coop_startserverName title \"Nicholas Groom, Chrissstrahl\""
	hoverexitcommand "globalwidgetcommand coop_startserverShot shader sysimg/2d/default-map-screen.tga;globalwidgetcommand coop_startserverName title \"\""
}
//[b60012] chrissstrahl - added new map
resource
Button
{
	cvarvisibility coop_ui_vt 100 ==
	title "Coop Great Deku Tree"
	name 	"communitymap_coop_greatDekuTree"
	rect	275 345 328 20
	font serpentinemedium-10
	fgcolor 		1.000 1.000 1.000 0.800
	bgcolor 		0.12 0.15 0.25 0.7
	hoverbgcolor 	0.22 0.25 0.35 1.0
	
	horizontaljustify left
	verticaljustify top
	
	clicksound sound/misc/menu/click.wav
 
	stuffcommand "set ui_startmap coop_greatDekuTree\n"
	hovercommand "globalwidgetcommand coop_startserverShot shader sysimg/mapshots/coop_greatDekuTree.tga;globalwidgetcommand coop_startserverName title \"[RRE]Fvillha\""
	hoverexitcommand "globalwidgetcommand coop_startserverShot shader sysimg/2d/default-map-screen.tga;globalwidgetcommand coop_startserverName title \"\""
}
//[b60025] chrissstrahl - added new map
resource
Button
{
	cvarvisibility coop_ui_vt 100 ==
	title "Coop Episode 1 - Starbase"
	name 	"communitymap_coop_ep1-platform1"
	rect	275 366 328 20
	font serpentinemedium-10
	fgcolor 		1.000 1.000 1.000 0.800
	bgcolor 		0.12 0.15 0.25 0.7
	hoverbgcolor 	0.22 0.25 0.35 1.0
	
	horizontaljustify left
	verticaljustify top
	
	clicksound sound/misc/menu/click.wav
 
	stuffcommand "set ui_startmap coop_ep1-platform1\n"
	hovercommand "globalwidgetcommand coop_startserverShot shader sysimg/mapshots/coop_ep1-platform1.tga;globalwidgetcommand coop_startserverName title \"Daedalus, Chrissstrahl\""
	hoverexitcommand "globalwidgetcommand coop_startserverShot shader sysimg/2d/default-map-screen.tga;globalwidgetcommand coop_startserverName title \"\""
}
end.

