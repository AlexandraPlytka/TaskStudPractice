#include "Menu.h"
#include <iostream>
using namespace std;

void Menu::Show()
{
	cout << "Logistical company" << endl;
	ShowMainTab();
	do
	{
		
		cin >> userInput;
		if (userInput == '1') {
			ShowTab();
		}
		else if (userInput == '2') {
			AddTab();
		}
		else if (userInput == '3') {
			PrintTab();
		}
		else if (userInput == '0')
			break;
		else {
			break;
		}
	} while (true);
}

void Menu::ShowMainTab()
{
	cout << "1. Show lists" << endl;
	cout << "2. Add " << endl;
	cout << "3. Print" << endl;
	cout << "0. Exit" << endl;
	
}

void Menu::ShowTab()
{
	cout << "Choose an option" << endl;
	cout << "1. Show Drivers list" << endl;
	cout << "2. Show Vehicle list" << endl;
	cout << "3. Show Transportation report" << endl;
	cout << "4. Show destination list" << endl;
	cout << "0 to go back" << endl;
	cin >> userInput;
		if (userInput == '1') {
			
			dlist.WriteToConsole();
			cout << endl;
			ShowTab();
		}
		else if (userInput == '2') {
			vlist.WriteToConsole();
			cout << endl;
			ShowTab();
		}
		else if (userInput == '3') {
			ShowTransportationReport();
		}
		else if (userInput == '4') {
			deslist.WriteToConsole();
			cout << endl;
			ShowTab();
		}
		else if (userInput == '0') {
			
			cout << endl;
			ShowMainTab();
		}
		else {
		}
}

void Menu::ShowTransportationReport()
{
	cout << "1. Show short transportation report" << endl;
	cout << "2. Show full transportation report" << endl;
	cout << "0. go back" << endl;
	cin >> userInput;
	if (userInput == '1') {
		cout << endl;
		tlist.WriteToConsoleSimplify();
		cout << endl;
		ShowTab();
	}
	else if (userInput == '2') {
		cout << endl;
		tlist.WriteToConsoleALLINFO();
		cout << endl;
		ShowTab();
	}
	else if (userInput == '0') {
		cout << endl;
		ShowMainTab();
	}
	else {
		cout << endl;
		ShowMainTab();
	}
}

void Menu::AddTab()
{
	cout << "Choose an option" << endl;
	cout << "1. Add driver" << endl;
	cout << "2. Add vehicle" << endl;
	cout << "3. Add route" << endl;
	cout << "4. Add transportation" << endl;
	cout << "0. to go back" << endl;
	cin >> userInput;
	if (userInput == '1') {
		try
		{
			Driver newdr;
			cin >> newdr;
			dlist.AddDriver(newdr);
			cout << "Info about added driver: " << endl;
			newdr.writeToConsole();
		}
		catch (const char* err)
		{
			cout << err << endl;
		}
		cout << endl;
		AddTab();
	}
	else if (userInput == '2') {
		try
		{
			Vehicle newVehicle;
			cin >> newVehicle;
			if (vlist.isExist(newVehicle)) {
				cout << "Vehicle with such name already exist" << endl;
			}
			else {
				vlist.AddVehicle(newVehicle);
				cout << "Added vehicle info" << endl;
				newVehicle.writeToConsole();
				cout << endl;
			}
		}
		catch (const char* err)
		{
			cout << err << endl;
		}
		cout << endl;
		AddTab();
	}
	else if (userInput == '3') {
		cout << endl;
		try
		{
			Destination newdes;
			cin >> newdes;
			if (deslist.isExist(newdes)) {
				cout << "Alredy exist" << endl;
			}
			else {
				deslist.AddDestination(newdes);
				cout << "Added desination:" << endl;
				cout << newdes;
				cout << endl;
			}
		}
		catch (const char* err)
		{
			cout << err << endl;
		}
		cout << endl;
		AddTab();
	}
	else if (userInput == '4') {
		cout << endl;
		try
		{
			Transportation newtr;
			cin >> newtr;
			tlist.AddTransportation(newtr);
			cout << "Info about added transportation:" << endl;
			newtr.WriteSimplifyToConsole();
			cout << endl;
		}
		catch (const char* err)
		{
			cout << err << endl;
		}
		cout << endl;
		AddTab();
	}
	else if (userInput == '0') {
		cout << endl;
		ShowMainTab();
	}
	else {
	cout << endl;
		ShowMainTab();
	}

}

void Menu::PrintTab()
{
	cout << "Choose an option " << endl;
	cout << "1. Print lates transportation" << endl;
	cout << "2. Print the oldest vehicle " << endl;
	cout << "3. Print vehicle with the biggest capacity" << endl;
	cout << "4. Print most experienced diver" << endl;
	cout << "5. Print driver by its code" << endl;
	cout << "6. Print vehicle by its name" << endl;
	cout << "0. to go back" << endl;
	cin >> userInput;
	if (userInput == '1') {
		cout << endl;
		tlist.WriteLatesTransportation();
		cout << endl;
		PrintTab();
	}

	else if (userInput == '2') {
		cout << endl;
		vlist.WriteToConsoleTheOldest();
		cout << endl;
		PrintTab();
	}
	else if (userInput == '3') {
		cout << endl;
		vlist.WriteToConsoleTheBiggestCapacity();
		cout << endl;
		PrintTab();
	}
	else if (userInput == '4') {
		cout << endl;
		dlist.WriteDriverWithMostExperience();
		cout << endl;
		PrintTab();
	}
	else if (userInput == '5') {
		cout << endl;
		cout << "enter driver's code " << endl;
		string code;
		cin >> code;
		try
		{
			dlist.WriteToConsoleDriverByDriverCode(code);
		}
		catch (const char* error)
		{
			cout << error << endl;
		}
		
		cout << endl;
		PrintTab();
	}
	else if (userInput == '6') {
		cout << endl;
		cout << "enter vehicle name" << endl;
		string name;
		cin >> name;
		try
		{
			vlist.WriteInfoAboutVehicleByITSName(name);
		}
		catch (const char* error)
		{
			cout << error << endl;
		}
		
		cout << endl;
		PrintTab();
	}
	else if (userInput == '0') {
		ShowMainTab();
	}
	else {
		cout << endl;
		ShowMainTab();
	}
}
