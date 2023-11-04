zeta=0;
Wn=2;

Num=[0 0 Wn^2];
Dem=[1 2*zeta*Wn Wn^2];
G=tf(Num,Dem);
step(G);
xlim([0 10]);
ylim([0 2]);
