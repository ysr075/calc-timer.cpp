#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h> 
using namespace std;

void delay(int number_of_seconds) {
	int milli_seconds = 1000 * number_of_seconds;
	clock_t start_time = clock(); 
	while (clock() < start_time + milli_seconds);
}

int main() {
	while (true) {
		int a, b, t;
		string c;
		string q;
		cout << "\n+, -, *, /: "; cin >> c;
		if (c == "+") {
			cout << "\na: "; cin >> a;
			cout << "b: "; cin >> b;
			if (a <= -1000 || a <= 1000 && b <= -1000 || b <= 1000 && b != 0) {
				t = a + b;
				cout << "\nresult is: "; cout << t;
				cout << "\n\ncontinue: "; cin >> q;
				if (q == "y" || q == "yes" || q == "1") {
					system("cls");
				} else {
					int i;
					cout << "\nprogram closing in 3sec...";
					for (i = 0; i < 2; i++) {
						delay(1);
						cout << "\n"; cout << i + 1;
						for (i = 1; i < 3; i++) {
							delay(1);
							cout << "\n"; cout << i + 1;
							for (i = 2; i < 4; i++) {
								delay(1);
								cout << "\n"; cout << i + 1;
								for (i = 3; i < 5; i++) {
									delay(1);
									cout << "\n"; cout << i + 1;
									exit(0);
								}
							}
						}
					}
				}
			} else {
				int i;
				cout << "\nprogram closing in 3sec...";
				for (i = 0; i < 2; i++) {
					delay(1);
					cout << "\n"; cout << i + 1;
					for (i = 1; i < 3; i++) {
						delay(1);
						cout << "\n"; cout << i + 1;
						for (i = 2; i < 4; i++) {
							delay(1);
							cout << "\n"; cout << i + 1;
							for (i = 3; i < 5; i++) {
								delay(1);
								cout << "\n"; cout << i + 1;
								exit(0);
							}
						}
					}
				}
			}
		} else if (c == "-") {
			cout << "\na: "; cin >> a;
			cout << "b: "; cin >> b;
			if (a <= -1000 || a <= 1000 && b <= -1000 || b <= 1000 && b != 0) {
				t = a - b;
				cout << "\nresult is: "; cout << t;
				cout << "\n\ncontinue: "; cin >> q;
				if (q == "y" || q == "yes" || q == "1") {
					system("cls");
				} else {
					int i;
					cout << "\nprogram closing in 3sec...";
					for (i = 0; i < 2; i++) {
						delay(1);
						cout << "\n"; cout << i + 1;
						for (i = 1; i < 3; i++) {
							delay(1);
							cout << "\n"; cout << i + 1;
							for (i = 2; i < 4; i++) {
								delay(1);
								cout << "\n"; cout << i + 1;
								for (i = 3; i < 5; i++) {
									delay(1);
									cout << "\n"; cout << i + 1;
									exit(0);
								}
							}
						}
					}
				}
			} else {
				int i;
				cout << "\nprogram closing in 3sec...";
				for (i = 0; i < 2; i++) {
					delay(1);
					cout << "\n"; cout << i + 1;
					for (i = 1; i < 3; i++) {
						delay(1);
						cout << "\n"; cout << i + 1;
						for (i = 2; i < 4; i++) {
							delay(1);
							cout << "\n"; cout << i + 1;
							for (i = 3; i < 5; i++) {
								delay(1);
								cout << "\n"; cout << i + 1;
								exit(0);
							}
						}
					}
				}
			}
		} else if (c == "*") {
			cout << "\na: "; cin >> a;
			cout << "b: "; cin >> b;
			if (a <= -1000 || a <= 1000 && b <= -1000 || b <= 1000 && b != 0) {
				t = a * b;
				cout << "result is: "; cout << t;
				cout << "\n\ncontinue: "; cin >> q;
				if (q == "y" || q == "yes" || q == "1") {
					system("cls");
				} else {
					int i;
					cout << "\nprogram closing in 3sec...";
					for (i = 0; i < 2; i++) {
						delay(1);
						cout << "\n"; cout << i + 1;
						for (i = 1; i < 3; i++) {
							delay(1);
							cout << "\n"; cout << i + 1;
							for (i = 2; i < 4; i++) {
								delay(1);
								cout << "\n"; cout << i + 1;
								for (i = 3; i < 5; i++) {
									delay(1);
									cout << "\n"; cout << i + 1;
									exit(0);
								}
							}
						}
					}
				}
			} else {
				int i;
				cout << "\nprogram closing in 3sec...";
				for (i = 0; i < 2; i++) {
					delay(1);
					cout << "\n"; cout << i + 1;
					for (i = 1; i < 3; i++) {
						delay(1);
						cout << "\n"; cout << i + 1;
						for (i = 2; i < 4; i++) {
							delay(1);
							cout << "\n"; cout << i + 1;
							for (i = 3; i < 5; i++) {
								delay(1);
								cout << "\n"; cout << i + 1;
								exit(0);
							}
						}
					}
				}
			}
		} else if (c == "/") {
			cout << "\na: "; cin >> a;
			cout << "b: "; cin >> b;
			if (a <= -1000 || a <= 1000 && b <= -1000 || b <= 1000 && b != 0) {
				t = a / b;
				cout << "result is: "; cout << t;
				cout << "\n\ncontinue: "; cin >> q;
				if (q == "y" || q == "yes" || q == "1") {
					system("cls");
				} else {
					int i;
					cout << "\nprogram closing in 3sec...";
					for (i = 0; i < 2; i++) {
						delay(1);
						cout << "\n"; cout << i + 1;
						for (i = 1; i < 3; i++) {
							delay(1);
							cout << "\n"; cout << i + 1;
							for (i = 2; i < 4; i++) {
								delay(1);
								cout << "\n"; cout << i + 1;
								for (i = 3; i < 5; i++) {
									delay(1);
									cout << "\n"; cout << i + 1;
									exit(0);
								}
							}
						}
					}
				}
			} else {
				int i;
				cout << "\nprogram closing in 3sec...";
				for (i = 0; i < 2; i++) {
					delay(1);
					cout << "\n"; cout << i + 1;
					for (i = 1; i < 3; i++) {
						delay(1);
						cout << "\n"; cout << i + 1;
						for (i = 2; i < 4; i++) {
							delay(1);
							cout << "\n"; cout << i + 1;
							for (i = 3; i < 5; i++) {
								delay(1);
								cout << "\n"; cout << i + 1;
								exit(0);
							}
						}
					}
				}
			}
		} else {
			exit(0);
		}
	}
	return 0;
}
