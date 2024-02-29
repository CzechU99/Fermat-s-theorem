#include <iostream>

using namespace std;

int main()
{

	int l, u;

	while (true) {

		cin >> l >> u;

		int licznik;
		int licznik_x = 0;
		int licznik_y = 0;

		if (l == -1 && u == -1) {
			break;
		}
		else if (l < 0 && u < 0) {
		}
		else {
			if (u >= 0) {
				for (int i = l; i <= u; i++) {
					licznik = 0;
					for (int x = 1; x <= i; x++) {
						if (i % x == 0) {
							licznik++;
						}
					}
					if (licznik == 2) {
						licznik_x++;
						if ((i - 1) % 4 == 0) {
							licznik_y++;
						}
					}
				}
			}
		}

		cout << l << "  " << u << "  " << licznik_x << "  " << licznik_y << '\n';

	}

}