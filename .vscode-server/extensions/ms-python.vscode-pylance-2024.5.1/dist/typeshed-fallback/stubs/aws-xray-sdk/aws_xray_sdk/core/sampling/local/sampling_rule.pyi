from aws_xray_sdk.core.utils.search_pattern import wildcard_match as wildcard_match

from ...exceptions.exceptions import InvalidSamplingManifestError as InvalidSamplingManifestError
from .reservoir import Reservoir as Reservoir

class SamplingRule:
    FIXED_TARGET: str
    RATE: str
    HOST: str
    METHOD: str
    PATH: str
    SERVICE_NAME: str
    def __init__(self, rule_dict, version: int = 2, default: bool = False) -> None: ...
    def applies(self, host, method, path): ...
    @property
    def fixed_target(self): ...
    @property
    def rate(self): ...
    @property
    def host(self): ...
    @property
    def method(self): ...
    @property
    def path(self): ...
    @property
    def reservoir(self): ...
    @property
    def version(self): ...
