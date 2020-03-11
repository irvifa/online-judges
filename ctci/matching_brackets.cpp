bool is_pair(char opening, char closing) {
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}

bool is_balanced(string exp) {
	stack<char> s;
	for(auto e: exp) {
		if(e == '(' || e == '{' || e == '[')
			s.push(exp[i]);
		else if(e == ')' || e == '}' || e == ']') {
			if(s.empty() || !is_pair(s.top(),e))
				return false;
			else s.pop();
		}
	}
	return s.empty() ? true : false;    
}

