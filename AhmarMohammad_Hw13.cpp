#include <iostream>
using namespace std;

bool ok(int q[], int c) {

static int mp[3][3] = { {0,2,1},  // Man#0's preferences
                        {0,2,1},  // Man#1's preferences
                        {1,2,0}}; // Man#2's preferences

static int wp[3][3] = { {2,1,0},  // Woman#0's preferences
                        {0,1,2},  // Woman#1's preferences
                        {2,0,1}}; // Woman#2's preferences
                    
for (int i = 0; i < c; i++)
	if(q[i] == q[c] || mp[i][q[c]] < mp[i][q[i]] && wp[q[c]][i] < wp[q[c]][c] || mp[c][q[i]] < mp[c][q[c]] && wp[q[i]][c] < wp[q[i]][i])
	{
		return false;
	}
	return true;
}

void print(int q[]) {
   static int solution = 0;
   cout << "Solution #" << ++solution << ":\nMan\tWoman\n";
   for (int i = 0; i < 3; ++i)
      cout << i << "\t" << q[i] << "\n";
   cout << "\n";
}

int main () {
	int q[3] = {};
	int c = 0;
	while (c >= 0) {
		if (c == 2) {
			print(q);
			c--;
		}
		else 
		q[++c] = -1;
		while (c >= 0) {
			q[c]++;
			if (q[c] == 3)
			c--;
			else if
			(ok(q,c))
			break;
		}
	}
			
			return 0;	
		}
	

