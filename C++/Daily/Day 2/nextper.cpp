// #include <bits/stdc++.h>

// using namespace std;
// void fastIO(){
//      ios_base::sync_with_stdio(false);
//      cin.tie(NULL);
// }
// void simple(){
//     //finding index1
//         auto first=nums.begin();
//         auto last=nums.end();
//         auto rfirst=reverse_iterator<std::vector<int>::iterator>(last);
//         auto rlast=reverse_iterator<std::vector<int>::iterator>(first);

//         auto pivot=next(rfirst);

//         while(pivot!=rlast && *pivot>=*prev(pivot)) ++pivot;

//         if(pivot==rlast){
//             reverse(rfirst,rlast);
//         }else{
//             auto change=find_if(rfirst,pivot,bind1st(less<int>(),*pivot));

//         swap(*change,*pivot);
//         reverse(rfirst,pivot);
//         }
//     for (int i = 0; i < nums.size(); i++) {
//         cout << nums[i] << " ";
//     }

// }
// int main()
// {
//     fastIO();
//     simple();
//     return 0;
// }