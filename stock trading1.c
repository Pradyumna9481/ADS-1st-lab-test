#include<assert.h>
#include "stock trading.h"
#include<stdint.h>

struct_stock_(int size){
if(size->5){
return comapny_share;
}
else{
return null;
}
}
struct_enqueue_{
struct->Trading Q;
Trading Q->x;
if(x->lookup){
return yes;
}
else{
return no;
}
}
struct_dequeue_{
if(size->5){
if(size->size+1){
dequeue--;
size++;
}
}
}
struct_size{
int maxprofit(int price[], int start, int end)
{
if(end<=start)
return 0;
int profit = 0;
for(int i=start;i<end;i++){
for(int j= i+1; j<=end;j++){
if(price[j]>price[i]){
int curr_profit = price[j]-price[i]+maxprofit(price, start, i-1)+maxprofit(price, j+1, end);
profit = max(profit, curr_profit);
assert(maxprofit);
assert->price(p, 0 n-1);
}
}
}
return profit;
}
}
int main()
{
struct_enqueue_();
struct_dequeue_();
struct_size();
return 0;
}


