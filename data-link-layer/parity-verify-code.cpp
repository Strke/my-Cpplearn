#include <string>
bool verify(bool flag, string code){
	//flag , code
	int num_sum = 0, code_len = code.size();
	for(int i = 0; i < code_len; i ++){
		num_sum += code[i] - '0';
	}
	if(num_sum % 2 == flag)
		return true;
	else
		return false;
}
