import java.util.Stack;


public class DSQueue<T> {

	private Stack<T> s1; 
	private Stack<T> s2;
	
	public DSQueue(){
		s1 = new Stack<>();
		s2 = new Stack<>();
	}
	public boolean empty() {
		if(s1.empty() && s2.empty())
			return true;
		else
			return false;
	}
	public void enQueue(T e){
		s1.add(e);
	}
	public T deQueue() {
		if(s2.empty()){
			while(!s1.empty()){
				T e = s1.pop();
				s2.add(e);
			}
		}
		return s2.pop();
	}
} 
