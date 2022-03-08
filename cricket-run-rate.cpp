#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float t_overs,c_overs,c_runrate;
	int c_score,t_balls,c_balls,p_run;
	cout<<fixed<<showpoint;
	cout<<setprecision(2);
	cout<<"Enter the total no.of overs:";
	cin>>t_overs;
	cout<<"Enter the current score of the team:";
	cin>>c_score;
	cout<<"Enter the number of overs in which the team had managed to score these runs:";
	cin>>c_overs;
	cout<<"Enter the extra balls(if any):";
	cin>>c_balls;
	t_balls=t_overs*6;
	c_balls+=c_overs*6;
	c_runrate=((float)c_score/c_balls)*6;
	cout<<"The current run-rate of the team:"<<" "<<c_runrate;
	p_run=(c_runrate*(t_balls-c_balls))/6;
	p_run+=c_score;
	cout<<"\nThe projected score at current run rate:"<<" "<<p_run;
	p_run=(t_balls-c_balls);
	p_run+=c_score;
	cout<<"\nThe projected score at 6 runs per over:"<<" "<<p_run;
	p_run=(8*(t_balls-c_balls))/6;
	p_run+=c_score;
	cout<<"\nThe projected score at 8 runs per over:"<<" "<<p_run;
	p_run=(10*(t_balls-c_balls))/6;
	p_run+=c_score;
	cout<<"\nThe projected score at 10 runs per over:"<<" "<<p_run;
	p_run=2*(t_balls-c_balls);
	p_run+=c_score;
	cout<<"\nThe projected score at 12 runs per over:"<<" "<<p_run;
	return 0;
}