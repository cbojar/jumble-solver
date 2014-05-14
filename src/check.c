int check2( char* str, int slen )
{
	int i;
	for( i = 0; i < slen - 1; i++ )
	{
		if( str[i] == 'q' )
		{
			if( str[i + 1] == 'u' ) continue;
			if( str[i + 1] == 'a' ) continue;
			if( str[i + 1] == 'b' ) continue;
			if( str[i + 1] == 'i' ) continue;
			if( str[i + 1] == 'o' ) continue;
			return 0;
		}
		else if( str[i] == 'b' )
		{
			if( str[i + 1] == 'q' ) return 0;
			if( str[i + 1] == 'x' ) return 0;
			if( str[i + 1] == 'z' ) return 0;
		}
		else if( str[i] == 'c' )
		{
			if( str[i + 1] == 'j' ) return 0;
			if( str[i + 1] == 'w' ) return 0;
			if( str[i + 1] == 'x' ) return 0;
		}
		else if( str[i] == 'd' )
		{
			if( str[i + 1] == 'x' ) return 0;
		}
		else if( str[i] == 'f' )
		{
			if( str[i + 1] == 'q' ) return 0;
			if( str[i + 1] == 'v' ) return 0;
			if( str[i + 1] == 'x' ) return 0;
			if( str[i + 1] == 'z' ) return 0;
		}
		else if( str[i] == 'g' )
		{
			if( str[i + 1] == 'v' ) return 0;
			if( str[i + 1] == 'x' ) return 0;
		}
		else if( str[i] == 'h' )
		{
			if( str[i + 1] == 'x' ) return 0;
		}
		else if( str[i] == 'j' )
		{
			if( str[i + 1] == 'a' ) continue;
			if( str[i + 1] == 'e' ) continue;
			if( str[i + 1] == 'f' ) continue;
			if( str[i + 1] == 'i' ) continue;
			if( str[i + 1] == 'k' ) continue;
			if( str[i + 1] == 'o' ) continue;
			if( str[i + 1] == 'r' ) continue;
			if( str[i + 1] == 's' ) continue;
			if( str[i + 1] == 'u' ) continue;
			return 0;
		}
		else if( str[i] == 'k' )
		{
			if( str[i + 1] == 'q' ) return 0;
			if( str[i + 1] == 'v' ) return 0;
			if( str[i + 1] == 'x' ) return 0;
			if( str[i + 1] == 'z' ) return 0;
		}
		else if( str[i] == 'l' )
		{
			if( str[i + 1] == 'x' ) return 0;
		}
		else if( str[i] == 'm' )
		{
			if( str[i + 1] == 'j' ) return 0;
			if( str[i + 1] == 'x' ) return 0;
			if( str[i + 1] == 'z' ) return 0;
		}
		else if( str[i] == 'p' )
		{
			if( str[i + 1] == 'q' ) return 0;
			if( str[i + 1] == 'v' ) return 0;
			if( str[i + 1] == 'x' ) return 0;
		}
		else if( str[i] == 'f' )
		{
			if( str[i + 1] == 'q' ) return 0;
			if( str[i + 1] == 'v' ) return 0;
			if( str[i + 1] == 'x' ) return 0;
			if( str[i + 1] == 'z' ) return 0;
		}
		else if( str[i] == 's' )
		{
			if( str[i + 1] == 'x' ) return 0;
		}
		else if( str[i] == 't' )
		{
			if( str[i + 1] == 'q' ) return 0;
			if( str[i + 1] == 'x' ) return 0;
		}
		else if( str[i] == 'v' )
		{
			if( str[i + 1] == 'b' ) return 0;
			if( str[i + 1] == 'c' ) return 0;
			if( str[i + 1] == 'f' ) return 0;
			if( str[i + 1] == 'h' ) return 0;
			if( str[i + 1] == 'j' ) return 0;
			if( str[i + 1] == 'k' ) return 0;
			if( str[i + 1] == 'm' ) return 0;
			if( str[i + 1] == 'p' ) return 0;
			if( str[i + 1] == 'q' ) return 0;
		}
		else if( str[i] == 'w' )
		{
			if( str[i + 1] == 'j' ) return 0;
			if( str[i + 1] == 'q' ) return 0;
			if( str[i + 1] == 'v' ) return 0;
			if( str[i + 1] == 'x' ) return 0;
		}
		else if( str[i] == 'x' )
		{
			if( str[i + 1] == 'd' ) return 0;
			if( str[i + 1] == 'j' ) return 0;
			if( str[i + 1] == 'k' ) return 0;
			if( str[i + 1] == 'r' ) return 0;
		}
		else if( str[i] == 'z' )
		{
			if( str[i + 1] == 'f' ) return 0;
			if( str[i + 1] == 'j' ) return 0;
			if( str[i + 1] == 'x' ) return 0;
		}
	}
	return 1;
}

int check3( char* str, int slen )
{
	int i;
	for( i = 0; i < slen - 2; i++ )
	{
		if( str[i] == 'a' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'b' )
			{
				if( str[i + 2] == 'c' ) return 0;
				if( str[i + 2] == 'f' ) return 0;
				if( str[i + 2] == 'g' ) return 0;
				if( str[i + 2] == 'k' ) return 0;
				if( str[i + 2] == 'm' ) return 0;
				if( str[i + 2] == 'p' ) return 0;
				if( str[i + 2] == 'q' ) return 0;
				if( str[i + 2] == 't' ) return 0;
				if( str[i + 2] == 'v' ) return 0;
				if( str[i + 2] == 'x' ) return 0;
				if( str[i + 2] == 'z' ) return 0;
			}
			else if( str[i + 1] == 'c' )
			{
				if( str[i + 2] == 'f' ) return 0;
				if( str[i + 2] == 'g' ) return 0;
				if( str[i + 2] == 'j' ) return 0;
				if( str[i + 2] == 'p' ) return 0;
				if( str[i + 2] == 'v' ) return 0;
				if( str[i + 2] == 'w' ) return 0;
				if( str[i + 2] == 'x' ) return 0;
				if( str[i + 2] == 'z' ) return 0;
			}
			else if( str[i + 1] == 'd' )
			{
				if( str[i + 2] == 'x' ) return 0;
			}
			else if( str[i + 1] == 'e' )
			{
				if( str[i + 2] == 'b' ) return 0;
				if( str[i + 2] == 'e' ) return 0;
				if( str[i + 2] == 'f' ) return 0;
				if( str[i + 2] == 'h' ) return 0;
				if( str[i + 2] == 'i' ) return 0;
				if( str[i + 2] == 'k' ) return 0;
				if( str[i + 2] == 'p' ) return 0;
				if( str[i + 2] == 'q' ) return 0;
				if( str[i + 2] == 'w' ) return 0;
				if( str[i + 2] == 'x' ) return 0;
				if( str[i + 2] == 'y' ) return 0;
			}
			else if( str[i + 1] == 'f' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'g' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'h' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'j' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'k' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'l' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'm' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'n' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'p' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'q' )
			{
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'r' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 's' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 't' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'v' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'w' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'x' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'y' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'z' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
		}
		else if( str[i] == 'b' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'b' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'c' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'd' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'e' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'f' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'g' )
			{
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'h' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'j' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'k' )
			{
				if( str[i + 2] == 'i' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'l' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'm' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'w' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'n' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'p' )
			{
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'r' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 's' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 't' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'v' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'w' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'y' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
		}
		else if( str[i] == 'c' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'b' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'r' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'c' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'd' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'e' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'f' )
			{
				if( str[i + 2] == 'a' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'g' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'h' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'k' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'l' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'm' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'n' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'p' )
			{
				if( str[i + 2] == 'h' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'q' )
			{
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'r' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 's' )
			{
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 't' ) continue;
				return 0;
			}
			else if( str[i + 1] == 't' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
				{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'v' )
			{
				if( str[i + 2] == 'e' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'y' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'x' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'z' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				return 0;
			}
		}
		if( str[i] == 'd' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'b' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'c' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'd' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'e' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'f' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'g' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'h' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'j' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'k' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'l' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'm' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'n' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'p' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'q' )
			{
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'r' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 's' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 't' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'v' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'w' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'y' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'w' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'z' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
		}
		if( str[i] == 'e' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'b' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'c' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'd' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'e' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'f' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'g' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'h' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'j' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'k' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'l' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'm' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'n' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'p' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'q' )
			{
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'r' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 's' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 't' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
			{
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'v' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'w' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'x' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'y' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'w' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'z' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
		}
		if( str[i] == 'f' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'b' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'c' )
			{
				if( str[i + 2] == 'a' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'd' )
			{
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'e' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'f' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'g' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'h' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'h' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'j' )
			{
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'k' )
			{
				if( str[i + 2] == 'a' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'l' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'm' )
			{
				if( str[i + 2] == 'a' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'n' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'm' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'p' )
			{
				if( str[i + 2] == 'e' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'r' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 's' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 't' ) continue;
				return 0;
			}
			else if( str[i + 1] == 't' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
			{
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'w' )
			{
				if( str[i + 2] == 'a' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'y' )
			{
				if( str[i + 2] == 'i' ) continue;
				return 0;
			}
		}
		if( str[i] == 'g' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'b' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'c' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'h' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'd' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'e' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'f' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'g' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'h' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'j' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'k' )
			{
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'l' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'm' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'n' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'p' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'q' )
			{
				if( str[i + 2] == 'i' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'r' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 's' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 't' ) continue;
				return 0;
			}
			else if( str[i + 1] == 't' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'w' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'y' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'z' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				return 0;
			}
		}
		if( str[i] == 'h' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'b' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'c' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'd' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'e' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'f' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'g' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'h' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'j' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'k' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'l' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'm' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'n' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'p' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'q' )
			{
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'r' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 's' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 't' ) continue;
				return 0;
			}
			else if( str[i + 1] == 't' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'v' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'i' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'w' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'y' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'x' ) continue;
				return 0;
			}
		}
		if( str[i] == 'i' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'b' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'c' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'd' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'e' )
			{
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'f' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'g' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'h' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 's' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'j' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'k' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'l' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'm' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'n' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'p' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'q' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'r' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 's' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 't' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
			{
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'v' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'w' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'x' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'y' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'z' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
		}
		if( str[i] == 'j' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'e' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'f' )
			{
				if( str[i + 2] == 'k' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'k' )
			{
				if( str[i + 2] == 's' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'r' )
			{
				if( str[i + 2] == 'a' ) continue;
				return 0;
			}
			else if( str[i + 1] == 's' )
			{
				if( str[i + 2] == 's' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				return 0;
			}
		}
		if( str[i] == 'k' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'b' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'c' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'd' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'e' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'f' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'g' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'h' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'j' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'k' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'l' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'm' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'n' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'p' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'r' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 's' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 't' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'w' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'y' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				return 0;
			}
		}
		if( str[i] == 'l' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'b' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'c' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'd' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'e' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'f' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'g' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'h' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'j' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'k' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'l' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'm' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'n' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'p' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'q' )
			{
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'r' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 's' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 't' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'v' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'w' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'y' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'z' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'n' ) continue;
				return 0;
			}
		}
		if( str[i] == 'm' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'b' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'c' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'v' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'd' )
			{
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'e' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'f' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'g' )
			{
				if( str[i + 2] == 'm' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'h' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'k' )
			{
				if( str[i + 2] == 'i' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'l' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'm' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'n' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'p' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'q' )
			{
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'r' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 's' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 't' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'r' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'v' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'w' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'y' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				return 0;
			}
		}
		if( str[i] == 'n' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'b' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'c' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'd' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'e' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'f' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'g' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'h' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'j' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'k' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'l' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'm' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'n' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'p' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'q' )
			{
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'r' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 's' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 't' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'v' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'w' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'x' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'y' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'z' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
		}
		if( str[i] == 'o' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'x' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'b' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'c' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'd' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'e' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'f' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'g' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'h' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'x' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'j' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'k' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'l' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'm' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'n' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'p' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'q' )
			{
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'r' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 's' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 't' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'v' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'w' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'x' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'y' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'z' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
		}
		if( str[i] == 'p' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'b' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'c' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'd' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'e' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'f' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'g' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'h' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'j' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'k' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'w' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'l' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'm' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'n' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'p' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'r' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 's' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 't' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
			{
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'w' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'y' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'z' )
			{
				if( str[i + 2] == 'i' ) continue;
				return 0;
			}
		}
		if( str[i] == 'q' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 't' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'b' )
			{
				if( str[i + 2] == 'a' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 's' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'm' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
		}
		if( str[i] == 'r' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'b' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'c' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'd' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'e' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'f' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'g' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'h' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'j' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'k' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'l' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'm' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'n' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'p' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'q' )
			{
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'r' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 's' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 't' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'v' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'w' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'x' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'y' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'z' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
		}
		if( str[i] == 's' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'b' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'c' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'd' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'e' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'f' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'g' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'h' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'j' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'k' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'l' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'm' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'n' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'p' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'q' )
			{
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'r' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 's' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 't' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'v' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'w' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'y' )
			{
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'w' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'z' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
		}
		if( str[i] == 't' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'b' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'c' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'd' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'e' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'f' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'g' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'h' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'j' )
			{
				if( str[i + 2] == 'a' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'k' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'n' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'l' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'm' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'n' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'p' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'r' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 's' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 't' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'v' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'w' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'y' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'x' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'z' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
		}
		if( str[i] == 'u' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'b' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'c' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'd' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'e' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'f' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'g' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'h' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'j' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'k' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'l' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'm' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'n' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'p' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'q' )
			{
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'r' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 's' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 't' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
			{
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 's' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'v' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'w' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'x' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'y' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'z' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
		}
		if( str[i] == 'v' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'd' )
			{
				if( str[i + 2] == 'a' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'e' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'g' )
			{
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'l' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'n' )
			{
				if( str[i + 2] == 'i' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'r' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 's' )
			{
				if( str[i + 2] == 'k' ) continue;
				return 0;
			}
			else if( str[i + 1] == 't' )
			{
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'v' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'y' )
			{
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'w' ) continue;
				return 0;
			}
		}
		if( str[i] == 'w' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'b' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'c' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'd' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'e' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'f' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'g' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'h' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'k' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'l' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'm' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'n' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'p' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'r' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 's' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 't' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 's' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
			{
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'w' )
			{
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'y' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'z' )
			{
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
		}
		if( str[i] == 'x' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'v' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'b' )
			{
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'c' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'e' )
			{
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'f' )
			{
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'g' )
			{
				if( str[i + 2] == 'l' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'h' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'v' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'l' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'm' )
			{
				if( str[i + 2] == 'a' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'n' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 't' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'p' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'q' )
			{
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 's' )
			{
				if( str[i + 2] == 'w' ) continue;
				return 0;
			}
			else if( str[i + 1] == 't' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'v' )
			{
				if( str[i + 2] == 'i' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'w' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'x' )
			{
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'y' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 's' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'z' )
			{
				if( str[i + 2] == 'e' ) continue;
				return 0;
			}
		}
		if( str[i] == 'y' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'q' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'w' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'b' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'c' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'd' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'e' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'f' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'g' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'h' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 's' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'j' )
			{
				if( str[i + 2] == 'a' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'k' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'j' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'l' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'm' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'n' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'x' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'w' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'p' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'q' )
			{
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'r' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 's' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 't' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 't' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'v' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'w' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'r' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'x' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'y' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'z' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 's' ) continue;
				return 0;
			}
		}
		if( str[i] == 'z' )
		{
			if( str[i + 1] == 'a' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'v' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'b' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'c' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'd' )
			{
				if( str[i + 2] == 'a' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'e' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'f' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'z' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'g' )
			{
				if( str[i + 2] == 'e' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'h' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'i' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'k' )
			{
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'l' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'm' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'n' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'o' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'd' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'h' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				if( str[i + 2] == 't' ) continue;
				if( str[i + 2] == 'u' ) continue;
				if( str[i + 2] == 'v' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'p' )
			{
				if( str[i + 2] == 'a' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'q' )
			{
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'r' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 's' )
			{
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'p' ) continue;
				if( str[i + 2] == 't' ) continue;
				return 0;
			}
			else if( str[i + 1] == 't' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'r' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'u' )
			{
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'c' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'k' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'n' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 's' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'v' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'w' )
			{
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'o' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'y' )
			{
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'g' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'm' ) continue;
				if( str[i + 2] == 'r' ) continue;
				if( str[i + 2] == 'u' ) continue;
				return 0;
			}
			else if( str[i + 1] == 'z' )
			{
				if( str[i + 2] == 'a' ) continue;
				if( str[i + 2] == 'b' ) continue;
				if( str[i + 2] == 'e' ) continue;
				if( str[i + 2] == 'i' ) continue;
				if( str[i + 2] == 'l' ) continue;
				if( str[i + 2] == 'o' ) continue;
				if( str[i + 2] == 'w' ) continue;
				if( str[i + 2] == 'y' ) continue;
				return 0;
			}
		}
	}

	return 1;
}
