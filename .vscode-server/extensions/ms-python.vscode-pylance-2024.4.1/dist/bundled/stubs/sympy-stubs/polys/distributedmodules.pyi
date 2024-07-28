from typing import Any

def sdm_monomial_mul(M, X) -> tuple[Any, *tuple[Any, ...]]:
    ...

def sdm_monomial_deg(M) -> int:
    ...

def sdm_monomial_lcm(A, B) -> tuple[Any, *tuple[Any, ...]]:
    ...

def sdm_monomial_divides(A, B) -> bool:
    ...

def sdm_LC(f, K):
    ...

def sdm_to_dict(f) -> dict[Any, Any]:
    ...

def sdm_from_dict(d, O) -> list[tuple[Any, Any]]:
    ...

def sdm_sort(f, O) -> list[Any]:
    ...

def sdm_strip(f) -> list[tuple[Any, Any]]:
    ...

def sdm_add(f, g, O, K) -> list[tuple[Any, Any]]:
    ...

def sdm_LM(f):
    ...

def sdm_LT(f):
    ...

def sdm_mul_term(f, term, O, K) -> list[Any] | list[tuple[tuple[Any, *tuple[Any, ...]], Any]]:
    ...

def sdm_zero() -> list[Any]:
    ...

def sdm_deg(f) -> int:
    ...

def sdm_from_vector(vec, O, K, **opts) -> list[tuple[Any, Any]]:
    ...

def sdm_to_vector(f, gens, K, n=...) -> list[Any]:
    ...

def sdm_spoly(f, g, O, K, phantom=...) -> list[Any] | list[tuple[Any, Any]] | tuple[list[tuple[Any, Any]], list[tuple[Any, Any]]]:
    ...

def sdm_ecart(f) -> int:
    ...

def sdm_nf_mora(f, G, O, K, phantom=...) -> tuple[Any | tuple[Any, Any] | list[tuple[Any, Any]] | list[Any] | tuple[list[tuple[Any, Any]], list[tuple[Any, Any]]], Any | tuple[Any, Any] | list[tuple[Any, Any]]] | tuple[Any, Any] | list[tuple[Any, Any]] | list[Any] | tuple[list[tuple[Any, Any]], list[tuple[Any, Any]]]:
    ...

def sdm_nf_buchberger(f, G, O, K, phantom=...) -> tuple[Any | tuple[Any, Any] | list[tuple[Any, Any]] | list[Any] | tuple[list[tuple[Any, Any]], list[tuple[Any, Any]]], Any | tuple[Any, Any] | list[tuple[Any, Any]]] | tuple[Any, Any] | list[tuple[Any, Any]] | list[Any] | tuple[list[tuple[Any, Any]], list[tuple[Any, Any]]]:
    ...

def sdm_nf_buchberger_reduced(f, G, O, K) -> list[Any] | list[tuple[Any, Any]]:
    ...

def sdm_groebner(G, NF, O, K, extended=...) -> tuple[list[Any], list[Any]] | list[Any] | tuple[list[list[Any]], list[Any]] | list[list[Any]]:
    ...

