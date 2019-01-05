modded class MissionServer
{

	void MissionServer()
	{

	}
	
	override void OnUpdate(float timeslice)
	{
		super.OnUpdate(timeslice);
		Print("OnUpdate");
	}

};