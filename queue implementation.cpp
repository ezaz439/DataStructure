#include<iostream>
#include<windows.h>
using namespace std;
struct dlist {
	dlist * prev;
	int data;
	dlist * next;
};
dlist *first, *current, *previos, *tamp;
int dlinklist_counter = 0;
void dlinklist_insert();
void dlinklist_call();
void dlinklist_dequeu();
void dlinklist_show();
void dlinklist_front();

int main()
{
	system("cls");

    dlinklist_call();
   return 0;
}

void dlinklist_call()
{
dlinklist_start:
	system("cls");
	cout << "\t\t\t\t Welcome in Double linklist Queue";
	int dinput;
	cout << "\n 1- Enqueu \n 2- Dequeu \n 3- show list \n 4- Front\n 5- Exit\n";
	cin >> dinput;
	switch (dinput)
	{
	case 1:
		dlinklist_insert();
		cout << " Number entered \n";
		system("pause");
		goto dlinklist_start;
	case 2:
		dlinklist_dequeu();
		cout << "Number deleted \n ";
		system("pause");
		goto dlinklist_start;
	case 3:
		dlinklist_show();
		goto dlinklist_start;
	case 4:
		dlinklist_front();
		goto dlinklist_start;
	case 5:
		break;
	default:
		cout << " You enter invalid number ";
		system("pause");
		goto dlinklist_start;
	}
}
void dlinklist_insert()
{
	current = new dlist;
	if (dlinklist_counter == 0)
	{
		previos = current;
		first = current;
		current->prev = NULL;
		cout << " Enter Data ";
		cin >> current->data;
	}
	else
	{
		previos->next = current;
		current->prev = previos;
		previos = current;
		cout << " Enter Data ";
		cin >> current->data;
	}
	current->next = NULL;
	dlinklist_counter++;
}
void dlinklist_dequeu()
{
	if (dlinklist_counter == 0)
	{
		cout << " Queue is empty";
		system("pause");
	}
	else
	{
		first = first->next;
		dlinklist_counter--;
	}
}
void dlinklist_show()
{
	if (dlinklist_counter == 0)
	{
		cout << " Queue is empty";
	}
	else
	{
		tamp = first;
		while (tamp->next != NULL)
		{
			cout << " " << tamp->data;
			tamp = tamp->next;
		}
		cout << " " << tamp->data;
	}
	system("pause");
}
void dlinklist_front()
{
	if (dlinklist_counter == 0)
	{
		cout << " Queue is empty";
	}
	else
	{
		cout << " " << first->data;
	}
	system("pause");
}
