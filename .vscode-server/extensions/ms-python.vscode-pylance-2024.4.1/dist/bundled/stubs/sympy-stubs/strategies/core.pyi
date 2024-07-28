from collections.abc import Callable, Mapping
from typing import Any, TypeVar

_S = TypeVar('_S')
_T = TypeVar('_T')
def identity(x: _T) -> _T:
    ...

def exhaust(rule: Callable[[_T], _T]) -> Callable[[_T], _T]:
    ...

def memoize(rule: Callable[[_S], _T]) -> Callable[[_S], _T]:
    ...

def condition(cond: Callable[[_T], bool], rule: Callable[[_T], _T]) -> Callable[[_T], _T]:
    ...

def chain(*rules: Callable[[_T], _T]) -> Callable[[_T], _T]:
    ...

def debug(rule, file=...) -> Callable[..., Any]:
    ...

def null_safe(rule: Callable[[_T], _T | None]) -> Callable[[_T], _T]:
    ...

def tryit(rule: Callable[[_T], _T], exception) -> Callable[[_T], _T]:
    ...

def do_one(*rules: Callable[[_T], _T]) -> Callable[[_T], _T]:
    ...

def switch(key: Callable[[_S], _T], ruledict: Mapping[_T, Callable[[_S], _S]]) -> Callable[[_S], _S]:
    ...

def minimize(*rules: Callable[[_S], _T], objective=...) -> Callable[[_S], _T]:
    ...

