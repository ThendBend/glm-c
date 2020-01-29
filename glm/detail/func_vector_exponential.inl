#define pow         GLM_CALL_FUNC(vec(L, T, Q), pow)
#define exp         GLM_CALL_FUNC(vec(L, T, Q), exp)
#define log         GLM_CALL_FUNC(vec(L, T, Q), log)
#define exp2        GLM_CALL_FUNC(vec(L, T, Q), exp2)
#define log2        GLM_CALL_FUNC(vec(L, T, Q), log2)
#define sqrt        GLM_CALL_FUNC(vec(L, T, Q), sqrt)
#define inversesqrt GLM_CALL_FUNC(vec(L, T, Q), inversesqrt)

GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec(L, T, Q)
pow(vec(L, T, Q) const x, vec(L, T, Q) const y)
{
	vec(L, T, Q) Result;

	for (length_t i = 0; i < L; ++i)
		Result.elem[i] = _pow(x.elem[i], y.elem[i]);

	return Result;
}

GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec(L, T, Q)
exp(vec(L, T, Q) const x)
{
	vec(L, T, Q) Result;

	for (length_t i = 0; i < L; ++i)
		Result.elem[i] = _exp(x.elem[i]);

	return Result;
}

GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec(L, T, Q)
log(vec(L, T, Q) const x)
{
	vec(L, T, Q) Result;

	for (length_t i = 0; i < L; ++i)
		Result.elem[i] = _log(x.elem[i]);

	return Result;
}

GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec(L, T, Q)
exp2(vec(L, T, Q) const x)
{
	vec(L, T, Q) Result;

	for (length_t i = 0; i < L; ++i)
		Result.elem[i] = _exp2(x.elem[i]);

	return Result;
}

GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec(L, T, Q)
log2(vec(L, T, Q) const x)
{
	vec(L, T, Q) Result;

	for (length_t i = 0; i < L; ++i)
		Result.elem[i] = _log2(x.elem[i]);

	return Result;
}

GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec(L, T, Q)
sqrt(vec(L, T, Q) const x)
{
	vec(L, T, Q) Result;

	for (length_t i = 0; i < L; ++i)
		Result.elem[i] = _sqrt(x.elem[i]);

	return Result;
}

GLM_FUNC_QUALIFIER GLM_CONSTEXPR vec(L, T, Q)
inversesqrt(vec(L, T, Q) const x)
{
	vec(L, T, Q) Result;

	for (length_t i = 0; i < L; ++i)
		Result.elem[i] = _rsqrt(x.elem[i]);

	return Result;
}

#undef pow
#undef exp
#undef log
#undef exp2
#undef log2
#undef sqrt
#undef inversesqrt