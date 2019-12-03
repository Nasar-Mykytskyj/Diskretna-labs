#include<locale>
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 30
using namespace std;
int main()
{
	setlocale(LC_ALL, "Ukrainian");
	int arr[SIZE][SIZE]; 
	int dov[SIZE]; // min vid
	int v[SIZE]; // ver
	int temp, index, min;
	int begin_index = 0;
	
	
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++) {
			arr[i][j] = 0;
		}
	}
	arr[0][1] =1;
	arr[0][6] =4 ;
	arr[1][0] =1 ;
	arr[1][2] =1 ;
	arr[1][7] =8 ;
	arr[2][1] =1;
	arr[2][8] =3 ; 
	arr[2][3] =6 ;
	arr[3][2] =6 ;
	arr[3][4] =3;
	arr[3][9] =1 ;
	arr[4][3] =3 ; 
	arr[4][5] =3 ;
	arr[4][10] =5 ;
	arr[5][4] =3;
	arr[5][11] =7 ;
	arr[6][0] =4;
	arr[6][7] =2; 
	arr[6][12] =1;
	arr[7][1] =8 ;
	arr[7][6] =2;
	arr[7][8] =1;
	arr[7][13] =7 ;
	arr[8][7] =1 ;
	arr[8][2] =3;
	arr[8][14] =1;
	arr[8][9] =4;
	arr[9][8] =4;
	arr[9][3] =1 ;
	arr[9][15] =4;
	arr[9][10] =2 ;
	arr[10][9] =2;
	arr[10][4] =5; 
	arr[10][16] =3;
	arr[10][11] =4 ;
	arr[11][10] =4 ;
	arr[11][5] =7 ;
	arr[11][17] =7 ;
	arr[12][6] =1;
	arr[12][13] =1 ;
	arr[12][18] =5 ;
	arr[13][12] =1;
	arr[13][7] =7;
	arr[13][19]=4;
	arr[13][14] =3;
	arr[14][13] =3;
	arr[14][8] =1;
	arr[14][20] =7;
	arr[14][15] =2;
	arr[15][14] =2;
	arr[15][9] = 4;
	arr[15][21] =8;
	arr[15][16] =5;
	arr[16][15] = 5;
	arr[16][10] =3 ;
	arr[16][22] = 2;
	arr[16][17] =7;
	arr[17][16] =7;
	arr[17][11] =7;
	arr[17][23] =5 ;
	arr[18][12] =5 ;
	arr[18][19] =7 ;
	arr[18][24] =3 ;
	arr[19][18] =7;
	arr[19][13] =4;
	arr[19][25] =2;
	arr[19][20] =3 ;
	arr[20][19] =3 ;
	arr[20][14] =7 ;
	arr[20][26] =1;
	arr[20][21] =1;
	arr[21][20] =1;
	arr[21][15] =8;
	arr[21][27] =8;
	arr[21][22] =1 ;
	arr[22][21] =1;
	arr[22][16] =2;
	arr[22][28] =8;
	arr[22][23] =8;
	arr[23][22] =8;
	arr[23][17] =5;
	arr[23][29] =7;
	arr[24][18] =3;
	arr[24][25] =4;
	arr[25][24] =4;
	arr[25][19] =2;
	arr[25][26] = 7;
	arr[26][25] = 7;
	arr[26][20] =1;
	arr[26][27] =3;
	arr[27][26] =3;
	arr[27][21] =8;
	arr[27][28] =3;
	arr[28][27] =3;
	arr[28][22] =8;
	arr[28][29] =6;
	arr[29][28] =6;
	arr[29][23] =7;

	
	// занул
	for (int i = 0; i < SIZE; i++)
	{
		dov[i] = 10000;
		v[i] = 1;
	}
	dov[begin_index] = 0;
	
	do {
		index = 10000;
		min = 10000;
		for (int i = 0; i < SIZE; i++)
		{ 
			if ((v[i] == 1) && (dov[i] < min))
			{ 
				min = dov[i];
				index = i;
			}
		}
		
		if (index != 10000)
		{
			for (int i = 0; i < SIZE; i++)
			{
				if (arr[index][i] > 0)
				{
					temp = min + arr[index][i];
					if (temp < dov[i])
					{
						dov[i] = temp;
					}
				}
			}
			v[index] = 0;
		}
	} while (index < 10000);

	//cout << "найкортший шлях до вершин" << endl;
	//for (int i = 0; i < SIZE; i++)
		//cout<<d[i]<<" ";

	// шлях назад
	int ver[SIZE]; // відвід верш
	int end = 29; 
	ver[0] = end ; 
	int k = 1; 
	int weight = dov[end]; // 

	while (end != begin_index) 
	{
		for (int i = 0; i < SIZE; i++) 
			if (arr[end][i] != 0)   // чи є звязок
			{
				int temp = weight - arr[end][i]; // вага з поперед
				if (temp == dov[i]) // якщ співпав
				{                 
					weight = temp; 
					end = i;       
					ver[k] = i  ; 
					k++;
				}
			}
	}
	cout << endl;
	cout << "шлях" << endl;
	for (int i = k - 1; i >= 0; i--) {
		cout << ver[i] << " ";
	}
	cout << endl;
	cout <<"вага:"<< dov[29];
	return 0;
}