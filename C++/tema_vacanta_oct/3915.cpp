#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 12;
int n;
char s[N];
int sol[N];
bool folosit[N];
char cuv[N];
bool vocala(char c) {

   if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')

       return 1;

   return 0;

}

void afis() {

   for(int i = 0; i < n; i++)

       cout << s[sol[i]];

   cout << '\n';

}

void bkt(int p) {

   if(p == n) {

       afis();

       return;

   }

   if(vocala(s[p])) {

       sol[p] = p;

       bkt(p + 1);

       return;

   }

   for(int i = 0; i < n; i++) {

       if(!folosit[i]) {

           sol[p] = i;

           folosit[i] = true;

           bkt(p + 1);

           folosit[i] = false;

       }

   }

}

int main() {

   cin >> s;

   strcpy(cuv, s);

   n = strlen(s);

   for(int i = 0; i < n - 1; i++)

       for(int j = i + 1; j < n; j++)

           if(!vocala(s[i]) && !vocala(s[j]) && s[i] > s[j]) {

               char aux = s[i];

               s[i] = s[j];

               s[j] = aux;

           }

   for(int i = 0; i < n; i++) {

       if(vocala(s[i])) {

           folosit[i] = true;

       }

   }

   bkt(0);

   return 0;

}