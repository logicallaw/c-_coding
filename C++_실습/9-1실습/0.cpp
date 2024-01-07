/*
개념 완성하기
1.함수의 매개변수로 배열이 오면, 배열의 type과 관계없이
무조건 &참조 배열은 사용할 수 없다.
배열이면 무조건 data-type name[]으로 인수로 와야한다.
모든 배열은 type과 무관하게 pass-by-reference이다!!!

2.범위기반 for문의 array와 vector의 형태
built-in-array:
for(int& num : nums)
for(int num : nums) 둘다 가능
array:
for(int& num : nums) 둘다 가능
vector:
for(int& num : nums) 둘다 가능

NO(array<>&)
*/

/*
실수 포인트
1.함수 매개변수: 2차원 배열 name[][]하면 오류남!
무조건 name[3][7] 또는 name[][7]로 해야한다.

*/