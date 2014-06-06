/*
 * CPRMT.cpp
 *
 *  Created on: Feb 9, 2013
 *      Author: apsdehal
 */
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;
const int MAX=1010;
char a[MAX],b[MAX];



int cnt[26];



void solve(){int i;

	memset(cnt,0,sizeof(cnt));
	for(i=0;a[i]!=0;i++)  {
		cnt[a[i]-'a']++;
	}
	sort(b,b+strlen(b));
	for(i=0;b[i]!=0;i++){
		if(cnt[b[i]-'a']){printf("%c",b[i]); cnt[b[i]-'a']--;
	}}
	printf("\n");
	}

int main(){
	while(scanf("%s %s",a,b)!=EOF)
		solve();
	return 0;
}

