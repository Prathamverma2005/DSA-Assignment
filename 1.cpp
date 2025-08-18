#include <iostream>
using namespace std;

int arr[50];
int Size_of_array;

void Create() {
	cout << "Enter number of elements in array : ";
	cin >> Size_of_array;

	if(Size_of_array > 50) {
		cout << "Maximum element reached\n";
		Size_of_array = 50;
		return;
	}
	else {

		cout << "Enter elements: \n";
		for(int i = 0; i < Size_of_array; i++) {
			cin >> arr[i];
		}
	}
}

void Search() {
	int searchvalue;
	cout << "Enter value to search: ";
	cin >> searchvalue;
	for (int i = 0; i < Size_of_array; i++) {
		if (arr[i] == searchvalue) {
			cout << "Value found at position: " << i << endl;
			return;
		}
	}
	cout << "Value not found in the array.\n";
}

void Insert() {
	if (Size_of_array >= 50) {
		cout << "Array is full\n";
		return;
	}
	int elementposition, valueinsert;
	cout << "Insert at position from 0 to " << Size_of_array << endl;
	cin >> elementposition;
	if (elementposition < 0) {
		cout << "position not valid\n";
		return;
	}
	else if(elementposition >= Size_of_array) {
		cout << "position not valid.\n";
		elementposition = Size_of_array;
		return;
	}

	cout << "Enter value to insert: ";
	cin >> valueinsert;
	for (int i = Size_of_array; i >elementposition; i--) {
		arr[i] = arr[i - 1];
	}
	arr[elementposition] = valueinsert;
	Size_of_array=Size_of_array+1;

}

void Display() {
	cout << "Elements in the array: ";
	for(int i = 0; i < Size_of_array; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void Delete() {
	int elementposition;
	cout << "Delete at position from 0 to " << Size_of_array - 1 << endl;
	cin >> elementposition;
	if (elementposition < 0 || elementposition >= Size_of_array) {
		cout << "Position not valid\n";
		return;
	}

	for (int i = elementposition; i < Size_of_array - 1; i++) {
		arr[i] = arr[i + 1];
	}
	Size_of_array=Size_of_array-1;
}


int main() {
	cout << "---MENU---\n";
	int choice;
	do {
		cout << "\n....MENU....\n";
		cout << "1. CREATE\n";
		cout << "2. DISPLAY\n";
		cout << "3. INSERT\n";
		cout << "4. DELETE\n";
		cout << "5. LINEAR SEARCH\n";
		cout << "6. EXIT\n";
		cout << "Enter your choice in no. : ";
		cin >> choice;

		switch (choice) {
		case 1:
			Create();
			break;
		case 2:
			Display();
			break;
		case 3:
			Insert();
			break;
		case 4:
			Delete();
			break;
		case 5:
			Search();
			break;
		case 6:
			cout << "Exiting program.\n";
			break;
		default:
			cout << "OOPS! wrong choice\n";
		}
	}
	while (choice != 6);
	return 0;
}