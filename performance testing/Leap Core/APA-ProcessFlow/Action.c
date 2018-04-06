//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("APA_ProcessFlow_010_Homepage");
	truclient_step("1", "Navigate to 'qa.dxc-apa.net'", "snapshot=Action_1.inf");
	truclient_step("2", "Wait for Email Address textbox", "snapshot=Action_2.inf");
	lr_end_transaction("APA_ProcessFlow_010_Homepage",0);
	truclient_step("3", "Wait thinktime seconds", "snapshot=Action_3.inf");
	truclient_step("4", "Login", "snapshot=Action_4.inf");
	{
		truclient_step("4.1", "Click on Email Address textbox", "snapshot=Action_4.1.inf");
		truclient_step("4.2", "Type admin1@hpe.com in Email Address textbox", "snapshot=Action_4.2.inf");
		truclient_step("4.3", "Type ******** in Password passwordbox", "snapshot=Action_4.3.inf");
		lr_start_transaction("APA_ProcessFlow_011_Login");
		truclient_step("4.4", "Click on Login button", "snapshot=Action_4.4.inf");
		truclient_step("4.5", "Wait for Good day, JavaScript link", "snapshot=Action_4.5.inf");
		lr_end_transaction("APA_ProcessFlow_011_Login",0);
	}
	truclient_step("5", "Wait thinktime seconds", "snapshot=Action_5.inf");
	lr_start_transaction("APA_ProcessFlow_020_ClickOnProcessFlow");
	truclient_step("6", "Click on Process Discovery", "snapshot=Action_6.inf");
	truclient_step("7", "Wait for processList_genericCompany", "snapshot=Action_7.inf");
	lr_end_transaction("APA_ProcessFlow_020_ClickOnProcessFlow",0);
	truclient_step("8", "Wait thinktime seconds", "snapshot=Action_8.inf");
	lr_start_transaction("APA_ProcessFlow_021_ClickOnProcessList");
	truclient_step("9", "Click on processList_genericCompany", "snapshot=Action_9.inf");
	truclient_step("10", "Evaluate JavaScript code var processName = LR.get...('processName');", "snapshot=Action_10.inf");
	truclient_step("11", "Wait for processName combobox", "snapshot=Action_11.inf");
	lr_end_transaction("APA_ProcessFlow_021_ClickOnProcessList",0);
	truclient_step("12", "Wait thinktime seconds", "snapshot=Action_12.inf");
	lr_start_transaction("APA_ProcessFlow_022_SelectProcess");
	truclient_step("13", "Click on processName combobox", "snapshot=Action_13.inf");
	truclient_step("14", "Wait for Selected", "snapshot=Action_14.inf");
	lr_end_transaction("APA_ProcessFlow_022_SelectProcess",0);
	truclient_step("15", "Wait thinktime seconds", "snapshot=Action_15.inf");
	truclient_step("16", "Evaluate JavaScript code LR.startTransaction('APA...ocessName + ']')", "snapshot=Action_16.inf");
	truclient_step("17", "Click on Go button", "snapshot=Action_17.inf");
	truclient_step("18", "Wait for Start Process", "snapshot=Action_18.inf");
	truclient_step("19", "Wait for End Process", "snapshot=Action_19.inf");
	truclient_step("21", "Evaluate JavaScript code LR.endTransaction('APA_P...e + ']', 'Auto')", "snapshot=Action_21.inf");
	truclient_step("23", "Wait thinktime seconds", "snapshot=Action_23.inf");
	truclient_step("24", "Evaluate JavaScript code LR.startTransaction('APA...ocessName + ']')", "snapshot=Action_24.inf");
	truclient_step("25", "Click on Process Comparison", "snapshot=Action_25.inf");
	truclient_step("26", "Evaluate JavaScript code LR.endTransaction('APA_P...e + ']', 'Auto')", "snapshot=Action_26.inf");
	truclient_step("27", "Wait thinktime seconds", "snapshot=Action_27.inf");
	truclient_step("28", "Evaluate JavaScript code LR.startTransaction('APA...ocessName + ']')", "snapshot=Action_28.inf");
	truclient_step("29", "Click on Recipe", "snapshot=Action_29.inf");
	truclient_step("30", "Evaluate JavaScript code LR.endTransaction('APA_P...e + ']', 'Auto')", "snapshot=Action_30.inf");
	truclient_step("31", "Wait thinktime seconds", "snapshot=Action_31.inf");
	truclient_step("33", "Evaluate JavaScript code LR.startTransaction('APA...ocessName + ']')", "snapshot=Action_33.inf");
	truclient_step("34", "Click on Compare to this process button", "snapshot=Action_34.inf");
	truclient_step("35", "Evaluate JavaScript code LR.endTransaction('APA_P...e + ']', 'Auto')", "snapshot=Action_35.inf");
	truclient_step("36", "Wait thinktime seconds", "snapshot=Action_36.inf");
	truclient_step("37", "Evaluate JavaScript code LR.startTransaction('APA...ocessName + ']')", "snapshot=Action_37.inf");
	truclient_step("39", "Click on javascript_link (1) JavaScript link", "snapshot=Action_39.inf");
	truclient_step("40", "Evaluate JavaScript code LR.endTransaction('APA_P...e + ']', 'Auto')", "snapshot=Action_40.inf");
	truclient_step("41", "Wait thinktime seconds", "snapshot=Action_41.inf");
	truclient_step("43", "Evaluate JavaScript code LR.startTransaction('APA...e + ']', 'Auto')", "snapshot=Action_43.inf");
	truclient_step("44", "Click on Analysis", "snapshot=Action_44.inf");
	truclient_step("46", "Evaluate JavaScript code LR.endTransaction('APA_P...e + ']', 'Auto')", "snapshot=Action_46.inf");

	return 0;
}
