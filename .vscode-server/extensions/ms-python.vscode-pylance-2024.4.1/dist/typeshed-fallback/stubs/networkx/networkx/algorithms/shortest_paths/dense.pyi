from _typeshed import Incomplete

from networkx.utils.backends import _dispatch

@_dispatch
def floyd_warshall_numpy(G, nodelist: Incomplete | None = None, weight: str = "weight"): ...
@_dispatch
def floyd_warshall_predecessor_and_distance(G, weight: str = "weight"): ...
@_dispatch
def reconstruct_path(source, target, predecessors): ...
@_dispatch
def floyd_warshall(G, weight: str = "weight"): ...
