#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"
#include <stack>
template <typename T>
void CP::stack<T>::pop() {
	// modify method here
	if(stack_a.empty()){
		std::stack<T> temp;
		int half = stack_b.size()/2;
		int rest = stack_b.size() - half;
		for(int i = 0; i < half; i++){
			temp.push(stack_b.top());
			stack_b.pop();
		}
		for(int i = 0; i < rest; i++){
			stack_a.push(stack_b.top());
			stack_b.pop();
		}
		while(!temp.empty()){
			stack_b.push(temp.top());
			temp.pop();
		}
	}
	stack_a.pop();
}

template <typename T>
const T& CP::stack<T>::top() {
	// modify method here
	if(stack_a.empty()){
		std::stack<T> temp;
		int half = stack_b.size()/2;
		int rest = stack_b.size() - half;
		for(int i = 0; i < half; i++){
			temp.push(stack_b.top());
			stack_b.pop();
		}
		for(int i = 0; i < rest; i++){
			stack_a.push(stack_b.top());
			stack_b.pop();
		}
		while(!temp.empty()){
			stack_b.push(temp.top());
			temp.pop();
		}
	}
	return stack_a.top();
	
}

template <typename T>
const T& CP::stack<T>::bottom() {
	if(stack_b.empty()){
		std::stack<T> temp;
		int half = stack_a.size()/2;
		int rest = stack_a.size() - half;
		for(int i = 0; i < half; i++){
			temp.push(stack_a.top());
			stack_a.pop();
		}
		for(int i = 0; i < rest; i++){
			stack_b.push(stack_a.top());
			stack_a.pop();
		}
		while(!temp.empty()){
			stack_a.push(temp.top());
			temp.pop();
		}
	}
	
	return stack_b.top();

}

template <typename T>
void CP::stack<T>::push_bottom(const T& element) {
	// write your code here
	stack_b.push(element);
}

template <typename T>
void CP::stack<T>::pop_bottom() {
	// write your code here
	if(stack_b.empty()){
		std::stack<T> temp;
		int half = stack_a.size()/2;
		int rest = stack_a.size() - half;
		for(int i = 0; i < half; i++){
			temp.push(stack_a.top());
			stack_a.pop();
		}
		for(int i = 0; i < rest; i++){
			stack_b.push(stack_a.top());
			stack_a.pop();
		}
		while(!temp.empty()){
			stack_a.push(temp.top());
			temp.pop();
		}
	}
	
	stack_b.pop();
	
}
#endif