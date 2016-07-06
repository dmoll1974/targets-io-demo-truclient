//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("Start");
	truclient_step("1", "Navigate to '54.154.227.103:3001'", "snapshot=Action_1.inf");
	lr_end_transaction("Start",0);
	lr_start_transaction("Sign in Link");
	truclient_step("2", "Click on Sign In link", "snapshot=Action_2.inf");
	lr_end_transaction("Sign in Link",0);
	truclient_step("3", "Sign in", "snapshot=Action_3.inf");
	{
		truclient_step("3.1", "Click on Username textbox", "snapshot=Action_3.1.inf");
		truclient_step("3.2", "Type demo1 in Username textbox", "snapshot=Action_3.2.inf");
		truclient_step("3.3", "Type ************** in Password passwordbox", "snapshot=Action_3.3.inf");
		lr_start_transaction("Sign in");
		truclient_step("3.4", "Click on Sign in button", "snapshot=Action_3.4.inf");
		lr_end_transaction("Sign in",0);
	}
	truclient_step("4", "Click on Articles button", "snapshot=Action_4.inf");
	lr_start_transaction("Create article Link");
	truclient_step("5", "Click on Create Article link", "snapshot=Action_5.inf");
	lr_end_transaction("Create article Link",0);
	truclient_step("6", "Click on Title textbox", "snapshot=Action_6.inf");
	truclient_step("7", "Type TruClientarticle in Title textbox", "snapshot=Action_7.inf");
	truclient_step("8", "Type Bladieblabla in Content textbox", "snapshot=Action_8.inf");
	lr_start_transaction("Create Article");
	truclient_step("9", "Click on Create button", "snapshot=Action_9.inf");
	lr_end_transaction("Create Article",0);
	truclient_step("10", "Click on Articles button", "snapshot=Action_10.inf");
	lr_start_transaction("List Articles");
	truclient_step("11", "Click on List Articles link", "snapshot=Action_11.inf");
	lr_end_transaction("List Articles",0);
	lr_start_transaction("Open Article");
	truclient_step("12", "Click on TruClientarticle link", "snapshot=Action_12.inf");
	lr_end_transaction("Open Article",0);
	truclient_step("13", "Click on focusable (1)", "snapshot=Action_13.inf");
	lr_start_transaction("Delete Article");
	truclient_step("14", "Press OK in confirmation dialog", "snapshot=Action_14.inf");
	lr_end_transaction("Delete Article",0);
	truclient_step("15", "Click on demo1 demo1 button", "snapshot=Action_15.inf");
	lr_start_transaction("Sign out");
	truclient_step("16", "Click on Signout link", "snapshot=Action_16.inf");
	lr_end_transaction("Sign out",0);

	return 0;
}
