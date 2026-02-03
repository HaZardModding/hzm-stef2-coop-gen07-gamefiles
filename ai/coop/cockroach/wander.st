//
// SolanSpydantYoung.st -- AI file for the cockroach
//
$define ATTACK_RANGE 32


////////////////////////////////////////////////////////////////////////////////////
//
// Idle-Type States
//
///////////////////////////////////////////////////////////////////////////////////
state IDLE
   {
   states
     {
     AI_OFF : !IN_AI_MODE 
     WANDER : default
     }
   }

state REAL_IDLE
   {
   legs
      {
      idle : default
      }

   states
      {
      WANDER : HAVE_ENEMY
      IDLE_RESET : ANIM_DONE
	  
	  DROWN : IN_WATER
	  DIE : ANY_ENEMY_IN_RANGE ( 38 ) 
      }

   }

state IDLE_RESET
   {
   states
      {
      REAL_IDLE : default
      }
   }

state WANDER
   {
   Behavior MoveRandomDirection ( "walk" , 500 , 96 )
   
   states
      {
		AI_OFF : !IN_AI_MODE
      WAIT : BEHAVIOR_SUCCESS
	  WAIT : BEHAVIOR_FAILED
	  
	  DROWN : IN_WATER
	  DIE : ANY_ENEMY_IN_RANGE ( 38 ) 
      }

   }

//---------------------------------------------------------
state WAIT
//---------------------------------------------------------
{
	legs
		{
		idle : default
		}

	time ( 1 , 2 )

	states
		{
		AI_OFF : !IN_AI_MODE
		WANDER : TIME_DONE
		DIE : ANY_ENEMY_IN_RANGE ( 38 ) 
		}
}

//---------------------------------------------------------
state AI_OFF
//---------------------------------------------------------
{	
	legs
		{
		idle : default
		}

	states
		{
		WANDER : IN_AI_MODE
		DIE : ANY_ENEMY_IN_RANGE ( 38 ) 
		}
}

//---------------------------------------------------------
state DROWN
//---------------------------------------------------------
{
	legs
	{
		walk : default
	}
	
	//give time to walk further into water
	time ( 0.25 )
	
	states
	{
		DIE : TIME_DONE
	}
}

//---------------------------------------------------------
state DIE
//---------------------------------------------------------
{
	entrycommands
	{
		suicide
	}
	
	legs
	{
		idle : default
	}
}

