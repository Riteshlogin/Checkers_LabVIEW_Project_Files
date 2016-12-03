int32 testx;

int32 testy;


int32 piece = input[coordinates[0]][coordinates[1]];

if(piece == 1){

    if(coordinates[1] == 0 && coordinates[0] < 7 && input[coordinates[0]+1][coordinates[1]+1] == 0)
	{
		moves[0][0] = coordinates[0] + 1;
		moves[0][1] = coordinates[1] + 1;		
    }
	
	if(coordinates[1] == 0 && coordinates[0] < 7 && input[coordinates[0]+1][coordinates[1]+1] == 1)
	{
		moves[0][0] = -1;
		moves[0][1] = -1;
				
    }
	
	else if(coordinates[1] == 7 && coordinates[0] < 7 && input[coordinates[0]+1][coordinates[1]-1] == 0)
	{      //row,col
		moves[0][0] = coordinates[0] + 1;
		moves[0][1] = coordinates[1] - 1;
		
	}
	
	else if(coordinates[1] == 7 && coordinates[0] < 7 && input[coordinates[0]+1][coordinates[1]-1] == 1)
	{      //row,col
		moves[0][0] = -1;
		moves[0][1] = -1;
		
	}
	
}
	
	
	
	
	
	
	


}