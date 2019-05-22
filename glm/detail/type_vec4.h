#ifndef GLM_DETAIL_TYPE_VEC4_H
#define GLM_DETAIL_TYPE_VEC4_H

#include "qualifier.h"
#include "type_vec2.h"
#include "type_vec3.h"

#define GLM_TVEC4_DECL(T)\
vec(4, T) GLM_FUNC_QUALIFIER \
GLM_FUNC_NAME(create, vec(4, T), void)               (void), \
GLM_FUNC_NAME(create, vec(4, T), T)                  (const register T), \
GLM_FUNC_NAME(create, vec(4, T), vec(4, T))          (const register vec(4, T)), \
GLM_FUNC_NAME(create, vec(4, T), vec(3, T), T)       (const register vec(3, T), const register T), \
GLM_FUNC_NAME(create, vec(4, T), T, vec(3, T))       (const register T, const register vec(3, T)), \
GLM_FUNC_NAME(create, vec(4, T), T, vec(2, T), T, T) (const register vec(2, T), const register T, const register T), \
GLM_FUNC_NAME(create, vec(4, T), T, T, vec(2, T), T) (const register T, const register vec(2, T), const register T), \
GLM_FUNC_NAME(create, vec(4, T), T, T, T, vec(2, T)) (const register T, const register T, const register vec(2, T)), \
GLM_FUNC_NAME(create, vec(4, T), T, T, T, T)         (const register T, const register T, const register T, const register T);

GLM_VEC_DECL(4, float)
GLM_VEC_DECL(4, double)
GLM_VEC_DECL(4, int)
GLM_VEC_DECL(4, uint)
GLM_VEC_DECL(4, bool)

GLM_TVEC4_DECL(float)
GLM_TVEC4_DECL(double)
GLM_TVEC4_DECL(int)
GLM_TVEC4_DECL(uint)
GLM_TVEC4_DECL(bool)




#define GLM_TVEC4_DEF(T)\
vec(4, T) GLM_FUNC_QUALIFIER \
GLM_FUNC_NAME(create, vec(4, T), void) (void) \
{ \
	vec(4, T) dst; \
	return dst; \
} \
vec(4, T) GLM_FUNC_QUALIFIER \
GLM_FUNC_NAME(create, vec(4, T), T) (const register T s) \
{ \
	vec(4, T) dst; \
	dst.e[0] = s; \
	dst.e[1] = s; \
	dst.e[2] = s; \
	dst.e[3] = s; \
	return dst; \
} \
vec(4, T) GLM_FUNC_QUALIFIER \
GLM_FUNC_NAME(create, vec(4, T), vec(4, T)) (const register vec(4, T) v) \
{ \
	return v; \
} \
vec(4, T) GLM_FUNC_QUALIFIER \
GLM_FUNC_NAME(create, vec(4, T), vec(3, T), T) (const register vec(3, T) e012, const register T e3) \
{ \
	vec(4, T) dst; \
	dst.e[0] = e012.e[0]; \
	dst.e[1] = e012.e[1]; \
	dst.e[2] = e012.e[2]; \
	dst.e[3] = e3; \
	return dst; \
} \
vec(4, T) GLM_FUNC_QUALIFIER \
GLM_FUNC_NAME(create, vec(4, T), T, vec(3, T)) (const register T e0, const register vec(3, T) e123) \
{ \
	vec(4, T) dst; \
	dst.e[0] = e0; \
	dst.e[1] = e123.e[0]; \
	dst.e[2] = e123.e[1]; \
	dst.e[3] = e123.e[2]; \
	return dst; \
} \
vec(4, T) GLM_FUNC_QUALIFIER \
GLM_FUNC_NAME(create, vec(4, T), T, vec(2, T), T, T) (const register vec(2, T) e01, const register T e2, const register T e3) \
{ \
	vec(4, T) dst; \
	dst.e[0] = e01.e[0]; \
	dst.e[1] = e01.e[1]; \
	dst.e[2] = e2; \
	dst.e[3] = e3; \
	return dst; \
} \
vec(4, T) GLM_FUNC_QUALIFIER \
GLM_FUNC_NAME(create, vec(4, T), T, T, vec(2, T), T) (const register T e0, const register vec(2, T) e12, const register T e3) \
{ \
	vec(4, T) dst; \
	dst.e[0] = e0; \
	dst.e[1] = e12.e[0]; \
	dst.e[2] = e12.e[1]; \
	dst.e[3] = e3; \
	return dst; \
} \
vec(4, T) GLM_FUNC_QUALIFIER \
GLM_FUNC_NAME(create, vec(4, T), T, T, T, vec(2, T)) (const register T e0, const register T e1, const register vec(2, T) e23) \
{ \
	vec(4, T) dst; \
	dst.e[0] = e0; \
	dst.e[1] = e1; \
	dst.e[2] = e23.e[0]; \
	dst.e[3] = e23.e[1]; \
	return dst; \
} \
vec(4, T) GLM_FUNC_QUALIFIER \
GLM_FUNC_NAME(create, vec(4, T), T, T, T, T) (const register T e0, const register T e1, const register T e2, const register T e3) \
{ \
	vec(4, T) dst; \
	dst.e[0] = e0; \
	dst.e[1] = e1; \
	dst.e[2] = e2; \
	dst.e[3] = e3; \
	return dst; \
}





#define _create_tvec4_0(T, ...) GLM_FUNC_NAME(create, vec(4, T), void)()

#define _create_tvec4_1(T, a, ...)\
_Generic(a, \
float:  GLM_FUNC_NAME(create, vec(4, T), T), \
double: GLM_FUNC_NAME(create, vec(4, T), T), \
int:    GLM_FUNC_NAME(create, vec(4, T), T), \
uint:   GLM_FUNC_NAME(create, vec(4, T), T), \
bool:   GLM_FUNC_NAME(create, vec(4, T), T), \
GLM_CREATE_TVEC4_FUNC_SELECT1(4, T) \
)(_Generic(a, \
GLM_CONVERT_VEC_FUNC_SELECT(,T,), \
GLM_CONVERT_VEC_FUNC_SELECT(4, T, 4) \
)(a))

#define _create_tvec4_2(T, a1, a2, ...)

#define _create_tvec4_3(T, a1, a2, a3, ...)

#define _create_tvec4_4(T, x, y, z, w) GLM_FUNC_NAME(create, vec(4, T), T, T, T, T)(x, y, z, w)

#define _create_tvec4(T, a1, a2, a3, a4, N, ...) _create_tvec4_##N(T, a1, a2, a3, a4)




#define tvec4(T) vec(4, T)
#define _tvec4(T, ...) _create_tvec4(T, __VA_ARGS__, 4, 3, 2, 1, 0)

#include "type_vec4.inl"

#endif /* GLM_DETAIL_TYPE_VEC4_H */