#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
 
struct time{
    int hour, minute, second;
};
void differenceBetweenTimePeriod(struct time start, struct time stop, struct time *diff)
{
if(stop.second > start.second){
--start.minute;
start.second += 60;
}
diff->second = start.second - stop.second;
if(stop.minute > start.minute){
--start.hour;
start.minute += 60;
}
diff->minute = start.minute - stop.minute;
diff->hour = start.hour - stop.hour;
}


int main(){
   struct time t[50];
   int n;
   scanf("%d", &n);
   for (int i = 0; i < n; i++)
   {
       scanf("%d:%d:%d", &t[i].hour, &t[i].minute, &t[i].second);

    }
    int l = 0;
    for(int i=0;i<n;i++)
    {
        for (int j = i+1; j < n;j++){

            if(t[i].hour > t[j].hour){
                 differenceBetweenTimePeriod(t[i], t[j], &t[n+l]);
            }
            else{
                 differenceBetweenTimePeriod(t[j], t[i], &t[n+l]);

            }
            printf(" %d --- %d,%d is %d:%d:%d\n",(n + l),i,j, t[n + l].hour, t[n + l].minute, t[n + l].second);
            l=l+1;
        }
    }
    //  printf("l= %d",(l));
    //  printf("l---> %d",(n+l));
    t[n + l ].hour =  t[n].hour;
    t[n + l ].minute =  t[n].minute;
    t[n + l ].second = t[n].second;
    for(int i=(n+1);i<=n+l;i++)
    {
        if(t[i].hour <= t[n + l].hour){
            t[n + l ].hour = t[i].hour;
            t[n + l ].minute = t[i].minute;
            t[n + l ].second = t[i].second;
        }
    }
    printf("%d:%d:%d\n", t[n + l].hour, t[n + l].minute, t[n + l].second);
}