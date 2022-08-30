move(1, A, B,_) :-  
    write('move top disk from'),  
    write(A),  
    write(' to '),  
    write(B),  
    nl.  
move(N, A, B, C) :-  
    N>1,  
    M is N-1,  
    move(M, A, B, C),  
    move(1, A, B,_),  
    move(M, C, B, A). 
