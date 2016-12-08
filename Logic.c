int32 testx;

int32 testy;


int32 piece = input[coordinates[0]][coordinates[1]];
int secondMove=0;
if(piece == 1){
	
	//For moving left
	if(coordinates[1] != 0)
	{
		if(input[coordinates[0]+1][coordinates[1]-1] != 1)
		{
			if(input[coordinates[0]+1][coordinates[1]-1] == 0)
			{	//Nothing in the way 
				moves[secondMove][0] = coordinates[0] + 1;
				moves[secondMove][1] = coordinates[1] - 1;
				
				secondMove = 1;
			}
			
			if(coordinates[1] > 1)
			{
				if(input[coordinates[0]+1][coordinates[1]-1] == 2 && input[coordinates[0]+2][coordinates[1]-2] == 0)
				{
					moves[secondMove][0] = coordinates[0] + 2;
					moves[secondMove][1] = coordinates[1] - 2;
					secondMove = 1;					
				}
			
			}
	
		}
		
	}
	//For moving right
	if(coordinates[1] != 6)
	{
		if(input[coordinates[0]+1][coordinates[1]+1] != 1)
		{
			if(input[coordinates[0]+1][coordinates[1]+1] == 0)
			{	//Nothing in the way 
				moves[secondMove][0] = coordinates[0] + 1;
				moves[secondMove][1] = coordinates[1] + 1;
			}
			
			if(coordinates[1] < 6)
			{
				if(input[coordinates[0]+1][coordinates[1]+1] == 2 && input[coordinates[0]+2][coordinates[1]+2] == 0)
				{
					moves[secondMove][0] = coordinates[0] + 2;
					moves[secondMove][1] = coordinates[1] + 2;	
				}
				
			}
	
		}
		
	}
	
}

if(piece == 2)
{
	
	if(coordinates[1] != 0)
	{
		if(input[coordinates[0]-1][coordinates[1]-1] != 2)
		{
			if(input[coordinates[0]-1][coordinates[1]-1] == 0)
			{	//Nothing in the way 
				moves[secondMove][0] = coordinates[0] - 1;
				moves[secondMove][1] = coordinates[1] - 1;
				
				secondMove = 1;
			}
			
			if(coordinates[1] > 1)
			{
				if(input[coordinates[0]-1][coordinates[1]-1] == 1 && input[coordinates[0]-2][coordinates[1]-2] == 0)
				{
					moves[secondMove][0] = coordinates[0] - 2;
					moves[secondMove][1] = coordinates[1] - 2;
					secondMove = 1;					
				}
			
			}
	
		}
		
	}
	//For moving right
	if(coordinates[1] != 6)
	{
		if(input[coordinates[0]-1][coordinates[1]+1] != 1)
		{
			if(input[coordinates[0]-1][coordinates[1]+1] == 0)
			{	//Nothing in the way 
				moves[secondMove][0] = coordinates[0] + 1;
				moves[secondMove][1] = coordinates[1] + 1;
			}
			
			if(coordinates[1] < 6)
			{
				if(input[coordinates[0]-1][coordinates[1]+1] == 1 && input[coordinates[0]-2][coordinates[1]+2] == 0)
				{
					moves[secondMove][0] = coordinates[0] - 2;
					moves[secondMove][1] = coordinates[1] + 2;	
				}
				
			}
	
		}
		
	}
	
	
	
	
	
}
	
	
	
	
	
	
	

