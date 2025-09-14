////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////1///REMOTE CONSOLE
////////////////////////////////////////////////////////////////////////////////
//[b607] chrissstrahl - new
resource
Button
{
	title "$$Advanced$$"
	name "coop_comAdv"
	rect 2 36 252 24
	
	borderstyle "INDENT_BORDER"
	font serpentinemedium-12
	verticaljustify top
	clicksound sound/environment/computer/holo_yes.wav
	fgcolor 1 1 1 1
	bgcolor 0.22 0.25 0.35 0.9
	//hoverbgcolor 1 1 1 0.4
	hoverbgcolor 0.0 0.6 0.6 0.9
	hoverfgcolor 1 1 1 1
	cvarvisibility "coop_comL" "4"
	stuffcommand "seta coop_comL 5"
}
resource
SwitchBox
{
	linkcvar "mp_gameType"//[b607] chrissstrahl - used to be temp_mp_gameType
	name "coop_comMpgametype"
	rect 2 62 252 24
	borderstyle "INDENT_BORDER"
	
	option	"$$Holomatch$$"		"exec co-op/cfg/communicator/holomatch.cfg" 0
	option	"$$TeamHolomatch$$"	"exec co-op/cfg/communicator/teamholomatch.cfg" 1
	option	"$$CaptureTheFlag$$""exec co-op/cfg/communicator/capturetheflag.cfg" 2
	option	"$$BombDiffusion$$""exec co-op/cfg/communicator/bombdiffusion.cfg" 3 //[b607] chrissstrahl - new
    clicksound sound/environment/computer/holo_yes.wav
	
	font serpentinemedium-12
	verticaljustify top
	fgcolor 0.99 0.80 0.20 1.00
	bgcolor 0.22 0.25 0.35 0.9
	hoverbgcolor 1 1 1 0.4
	hoverfgcolor 1 1 1 1
	cvarvisibility "coop_comL" "4"
}
resource
SwitchBox
{
	linkcvar "mp_modifier_InstantKill" //[b607] chrissstrahl - used to be temp_mp_modifier_InstantKill
	name "coop_comSniper"
	rect 2 114 252 24
	borderstyle "INDENT_BORDER"
	font serpentinemedium-12
	verticaljustify top
	clicksound sound/environment/computer/holo_yes.wav
	fgcolor 0.99 0.80 0.20 1.00
	bgcolor 0.22 0.25 0.35 0.9
	hoverbgcolor 1 1 1 0.4
	hoverfgcolor 1 1 1 1
	cvarvisibility "coop_comL" "4"
	
	option		"$$InstantKill$$"	"exec co-op/cfg/communicator/instantkill_r.cfg" 0
	option		"$$InstantKill$$"	"exec co-op/cfg/communicator/instantkill.cfg" 1
}
resource
SwitchBox
{
	linkcvar "mp_modifier_actionhero"
	name "coop_comActionhero"
	rect 2 140 252 24
	borderstyle "INDENT_BORDER"
	
	option	"$$ActionHero$$"	"exec co-op/cfg/communicator/actionhero_r.cfg" 0
	option	"$$ActionHero$$"	"exec co-op/cfg/communicator/actionhero.cfg" 1
    clicksound sound/environment/computer/holo_yes.wav
	
	font serpentinemedium-12
	verticaljustify top
	fgcolor 0.99 0.80 0.20 1.00
	bgcolor 0.22 0.25 0.35 0.9
	hoverbgcolor 1 1 1 0.4
	hoverfgcolor 1 1 1 1
	cvarvisibility "coop_comL" "4"
}
resource
SwitchBox
{
	linkcvar "mp_modifier_PointsPerWeapon"
	name "coop_comWeaponscore"
	rect 2 166 252 24
	borderstyle "INDENT_BORDER"
	
	option	"$$WeaponScore$$" 		"exec co-op/cfg/communicator/pointsperweapon_r.cfg" 0
	option	"$$WeaponScore$$"	"exec co-op/cfg/communicator/pointsperweapon.cfg" 1
    clicksound sound/environment/computer/holo_yes.wav
	
	font serpentinemedium-12
	verticaljustify top
	fgcolor 0.99 0.80 0.20 1.00
	bgcolor 0.22 0.25 0.35 0.9
	hoverbgcolor 1 1 1 0.4
	hoverfgcolor 1 1 1 1
	cvarvisibility "coop_comL" "4"
}
resource
SwitchBox
{
	linkcvar "mp_modifier_elemination"
	name "coop_comElemination"
	rect 2 192 252 24
	borderstyle "INDENT_BORDER"
	
	option	"$$Elimination$$" 	"exec co-op/cfg/communicator/elimination_r.cfg" 0
	option	"$$Elimination$$"	"exec co-op/cfg/communicator/elimination.cfg" 1
    clicksound sound/environment/computer/holo_yes.wav
	
	font serpentinemedium-12
	verticaljustify top
	fgcolor 0.99 0.80 0.20 1.00
	bgcolor 0.22 0.25 0.35 0.9
	hoverbgcolor 1 1 1 0.4
	hoverfgcolor 1 1 1 1
	cvarvisibility "coop_comL" "4"
}
resource
SwitchBox
{
	linkcvar "mp_modifier_autohandicap"
	name "coop_comAutohandicap"
	rect 2 218 252 24
	borderstyle "INDENT_BORDER"
	
	option	"$$AutoHandicap$$" 	"exec co-op/cfg/communicator/autohandicap_r.cfg" 0
	option	"$$AutoHandicap$$"	"exec co-op/cfg/communicator/autohandicap.cfg" 1
    clicksound sound/environment/computer/holo_yes.wav
	
	font serpentinemedium-12
	verticaljustify top
	fgcolor 0.99 0.80 0.20 1.00
	bgcolor 0.22 0.25 0.35 0.9
	hoverbgcolor 1 1 1 0.4
	hoverfgcolor 1 1 1 1
	cvarvisibility "coop_comL" "4"
}
resource
SwitchBox
{
	linkcvar "mp_modifier_controlpoints"
	name "coop_comControlpoints"
	rect 2 244 252 24
	borderstyle "INDENT_BORDER"
	
	option	"$$ControlPoints$$" "exec co-op/cfg/communicator/controlpoints_r.cfg" 0
	option	"$$ControlPoints$$"	"exec co-op/cfg/communicator/controlpoints.cfg" 1
    clicksound sound/environment/computer/holo_yes.wav
	
	font serpentinemedium-12
	verticaljustify top
	fgcolor 0.99 0.80 0.20 1.00
	bgcolor 0.22 0.25 0.35 0.9
	hoverbgcolor 1 1 1 0.4
	hoverfgcolor 1 1 1 1
	cvarvisibility "coop_comL" "4"
}
resource
SwitchBox
{
	linkcvar "mp_modifier_oneflag"
	name "coop_comOneflag"
	rect 2 270 252 24
	borderstyle "INDENT_BORDER"
	
	option	"$$OneFlag$$" "exec co-op/cfg/communicator/oneflag_r.cfg" 0
	option	"$$OneFlag$$" "exec co-op/cfg/communicator/oneflag.cfg" 1
    clicksound sound/environment/computer/holo_yes.wav
	
	font serpentinemedium-12
	verticaljustify top
	fgcolor 0.99 0.80 0.20 1.00
	bgcolor 0.22 0.25 0.35 0.9
	hoverbgcolor 1 1 1 0.4
	hoverfgcolor 1 1 1 1
	cvarvisibility "coop_comL" "4"
}
resource
SwitchBox
{
	linkcvar "mp_modifier_destruction"
	name "coop_comDestruction"
	rect 2 296 252 24
	borderstyle "INDENT_BORDER"
	
	option	"$$PowerStruggle$$"	"exec co-op/cfg/communicator/destruction_r.cfg" 0
	option	"$$PowerStruggle$$"	"exec co-op/cfg/communicator/destruction.cfg" 1
    clicksound sound/environment/computer/holo_yes.wav
	
	font serpentinemedium-12
	verticaljustify top
	fgcolor 0.99 0.80 0.20 1.00
	bgcolor 0.22 0.25 0.35 0.9
	hoverbgcolor 1 1 1 0.4
	hoverfgcolor 1 1 1 1
	cvarvisibility "coop_comL" "4"
}
resource
SwitchBox
{
	linkcvar "mp_modifier_specialties"
	name "coop_comSpecialties"
	rect 2 322 252 24
	borderstyle "INDENT_BORDER"
	
	option	"$$Specialties$$"	"exec co-op/cfg/communicator/specialties_r.cfg" 0
	option	"$$Specialties$$"	"exec co-op/cfg/communicator/specialties.cfg" 1
    clicksound sound/environment/computer/holo_yes.wav
	
	font serpentinemedium-12
	verticaljustify top
	fgcolor 0.99 0.80 0.20 1.00
	bgcolor 0.22 0.25 0.35 0.9
	hoverbgcolor 1 1 1 0.4
	hoverfgcolor 1 1 1 1
	cvarvisibility "coop_comL" "4"
}


//[b607] chrissstrahl - new
////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////INSTANT CHANGE COMMANDS
////////////////////////////////////////////////////////////////////////////////
resource
Button
{
	title "$$Back$$"
	name "coop_comAdvback"
	rect 2 36 252 24
	borderstyle "INDENT_BORDER"
	font serpentinemedium-12
	verticaljustify top
	clicksound sound/environment/computer/holo_yes.wav
	fgcolor 1 1 1 1.00
	bgcolor 0.22 0.25 0.35 0.9
	//hoverbgcolor 1 1 1 0.4
	hoverbgcolor 0.0 0.6 0.6 0.9
	hoverfgcolor 1 1 1 1
	cvarvisibility "coop_comL" "5"
	stuffcommand "seta coop_comL 4"
}
resource
Button
{
	title "$$c#050$$"
	name "coop_comKickbots"
	rect 2 62 252 24
	borderstyle "INDENT_BORDER"
	font serpentinemedium-12
	verticaljustify top
	clicksound sound/environment/computer/holo_yes.wav
	fgcolor 0.99 0.80 0.20 1.00
	bgcolor 0.22 0.25 0.35 0.9
	hoverbgcolor 1 1 1 0.4
	hoverfgcolor 1 1 1 1
	cvarvisibility "coop_comL" "5"
	stuffcommand "exec co-op/cfg/communicator/kickbots.cfg"
}
resource
SwitchBox
{
	linkcvar "sv_gravity"
	name "coop_comLowgrav"
	rect 2 88 252 24
	
	borderstyle "INDENT_BORDER"
	font serpentinemedium-12
	verticaljustify top
	clicksound sound/environment/computer/holo_yes.wav
	fgcolor 0.99 0.80 0.20 1.00
	bgcolor 0.22 0.25 0.35 0.9
	hoverbgcolor 1 1 1 0.4
	hoverfgcolor 1 1 1 1
	cvarvisibility "coop_comL" "5"
	option		"$$c#011$$"	"exec co-op/cfg/communicator/lowgravity_r.cfg" 200
	option		"$$c#011$$"	"exec co-op/cfg/communicator/lowgravity.cfg" 800
}
resource
SwitchBox
{
	linkcvar "sv_maxspeed"
	name "coop_comMaxspeed"
	rect 2 114 252 24
	
	borderstyle "INDENT_BORDER"
	font serpentinemedium-12
	verticaljustify top
	clicksound sound/environment/computer/holo_yes.wav
	fgcolor 0.99 0.80 0.20 1.00
	bgcolor 0.22 0.25 0.35 0.9
	hoverbgcolor 1 1 1 0.4
	hoverfgcolor 1 1 1 1
	cvarvisibility "coop_comL" "5"
	option		"0"	"exec co-op/cfg/communicator/maxspeed0.cfg" 0
	option		"250"	"exec co-op/cfg/communicator/maxspeed250.cfg" 250
	option		"300"	"exec co-op/cfg/communicator/maxspeed300.cfg" 300
	option		"350"	"exec co-op/cfg/communicator/maxspeed350.cfg" 350
	option		"400"	"exec co-op/cfg/communicator/maxspeed400.cfg" 400
	option		"450"	"exec co-op/cfg/communicator/maxspeed450.cfg" 450
	option		"500"	"exec co-op/cfg/communicator/maxspeed500.cfg" 500
	option		"550"	"exec co-op/cfg/communicator/maxspeed550.cfg" 550
}
end.