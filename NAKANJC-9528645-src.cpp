#include <cstdio>
#include <queue>

using namespace std;

struct P {
  char x, y;
  short c;
};

short bfs( P s, P t ) {
  queue< P > q;

  q.push( s );
  while ( !q.empty() ) {
    s = q.front();
    q.pop();
    if ( s.x < 0 || s.x > 7 || s.y < 0 || s.y > 7 ) {
      continue;
    }
    if ( s.x == t.x && s.y == t.y ) {
      return s.c;
    }

    q.push( ( P ) { s.x + 1, s.y + 2, s.c + 1 } );
    q.push( ( P ) { s.x + 2, s.y + 1, s.c + 1 } );
    q.push( ( P ) { s.x + 2, s.y - 1, s.c + 1 } );
    q.push( ( P ) { s.x + 1, s.y - 2, s.c + 1 } );
    q.push( ( P ) { s.x - 1, s.y - 2, s.c + 1 } );
    q.push( ( P ) { s.x - 2, s.y - 1, s.c + 1 } );
    q.push( ( P ) { s.x - 2, s.y + 1, s.c + 1 } );
    q.push( ( P ) { s.x - 1, s.y + 2, s.c + 1 } );
  }
}

int main() {
  char s[ 3 ], t[ 3 ];
  short n;

  scanf( "%hd", &n );
  while ( n-- ) {
    scanf( "%s %s", s, t );

    printf( "%hd\n", bfs(
      ( P ) { s[ 0 ] - 'a', s[ 1 ] - '1' },
      ( P ) { t[ 0 ] - 'a', t[ 1 ] - '1' }
    ) );
  }

  return 0;
}