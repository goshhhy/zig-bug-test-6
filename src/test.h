typedef float vec_t;
typedef vec_t vec3_t[3]; 

extern vec3_t global_vector;

void setGlobalVec( float x, float y, float z);
void printVec( vec3_t vec );
void testFromC( void );