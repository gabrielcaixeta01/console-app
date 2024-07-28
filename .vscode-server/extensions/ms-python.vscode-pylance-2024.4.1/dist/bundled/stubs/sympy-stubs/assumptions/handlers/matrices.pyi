from typing import Literal
from sympy import MatrixBase
from sympy.matrices.expressions import BlockDiagMatrix, BlockMatrix, Determinant, DiagMatrix, DiagonalMatrix, HadamardProduct, Identity, Inverse, MatAdd, MatMul, MatPow, MatrixExpr, MatrixSlice, MatrixSymbol, OneMatrix, Trace, Transpose, ZeroMatrix
from sympy.matrices.expressions.factorizations import Factorization
from sympy.matrices.expressions.fourier import DFT
from sympy.assumptions.predicates.matrices import ComplexElementsPredicate, DiagonalPredicate, FullRankPredicate, IntegerElementsPredicate, InvertiblePredicate, LowerTriangularPredicate, OrthogonalPredicate, PositiveDefinitePredicate, RealElementsPredicate, SquarePredicate, SymmetricPredicate, UnitaryPredicate, UpperTriangularPredicate

@SquarePredicate.register(MatrixExpr)
def _(expr, assumptions):
    ...

@SymmetricPredicate.register(MatMul)
def _(expr, assumptions) -> bool | None:
    ...

@SymmetricPredicate.register(MatPow)
def _(expr, assumptions) -> bool | None:
    ...

@SymmetricPredicate.register(MatAdd)
def _(expr, assumptions) -> bool:
    ...

@SymmetricPredicate.register(MatrixSymbol)
def _(expr, assumptions) -> bool | None:
    ...

@SymmetricPredicate.register_many(OneMatrix, ZeroMatrix)
def _(expr, assumptions) -> bool | None:
    ...

@SymmetricPredicate.register_many(Inverse, Transpose)
def _(expr, assumptions) -> bool | None:
    ...

@SymmetricPredicate.register(MatrixSlice)
def _(expr, assumptions) -> bool | None:
    ...

@SymmetricPredicate.register(Identity)
def _(expr, assumptions) -> Literal[True]:
    ...

@InvertiblePredicate.register(MatMul)
def _(expr, assumptions) -> bool | None:
    ...

@InvertiblePredicate.register(MatPow)
def _(expr, assumptions) -> bool | None:
    ...

@InvertiblePredicate.register(MatAdd)
def _(expr, assumptions) -> None:
    ...

@InvertiblePredicate.register(MatrixSymbol)
def _(expr, assumptions) -> bool | None:
    ...

@InvertiblePredicate.register_many(Identity, Inverse)
def _(expr, assumptions) -> Literal[True]:
    ...

@InvertiblePredicate.register(ZeroMatrix)
def _(expr, assumptions) -> Literal[False]:
    ...

@InvertiblePredicate.register(OneMatrix)
def _(expr, assumptions):
    ...

@InvertiblePredicate.register(Transpose)
def _(expr, assumptions) -> bool | None:
    ...

@InvertiblePredicate.register(MatrixSlice)
def _(expr, assumptions) -> bool | None:
    ...

@InvertiblePredicate.register(MatrixBase)
def _(expr, assumptions) -> Literal[False]:
    ...

@InvertiblePredicate.register(MatrixExpr)
def _(expr, assumptions) -> Literal[False] | None:
    ...

@InvertiblePredicate.register(BlockMatrix)
def _(expr, assumptions) -> bool | None:
    ...

@InvertiblePredicate.register(BlockDiagMatrix)
def _(expr, assumptions) -> bool | None:
    ...

@OrthogonalPredicate.register(MatMul)
def _(expr, assumptions) -> bool | None:
    ...

@OrthogonalPredicate.register(MatPow)
def _(expr, assumptions) -> bool | None:
    ...

@OrthogonalPredicate.register(MatAdd)
def _(expr, assumptions) -> Literal[True] | None:
    ...

@OrthogonalPredicate.register(MatrixSymbol)
def _(expr, assumptions) -> bool | None:
    ...

@OrthogonalPredicate.register(Identity)
def _(expr, assumptions) -> Literal[True]:
    ...

@OrthogonalPredicate.register(ZeroMatrix)
def _(expr, assumptions) -> Literal[False]:
    ...

@OrthogonalPredicate.register_many(Inverse, Transpose)
def _(expr, assumptions) -> bool | None:
    ...

@OrthogonalPredicate.register(MatrixSlice)
def _(expr, assumptions) -> bool | None:
    ...

@OrthogonalPredicate.register(Factorization)
def _(expr, assumptions) -> Literal[True] | None:
    ...

@UnitaryPredicate.register(MatMul)
def _(expr, assumptions) -> bool | None:
    ...

@UnitaryPredicate.register(MatPow)
def _(expr, assumptions) -> bool | None:
    ...

@UnitaryPredicate.register(MatrixSymbol)
def _(expr, assumptions) -> bool | None:
    ...

@UnitaryPredicate.register_many(Inverse, Transpose)
def _(expr, assumptions) -> bool | None:
    ...

@UnitaryPredicate.register(MatrixSlice)
def _(expr, assumptions) -> bool | None:
    ...

@UnitaryPredicate.register_many(DFT, Identity)
def _(expr, assumptions) -> Literal[True]:
    ...

@UnitaryPredicate.register(ZeroMatrix)
def _(expr, assumptions) -> Literal[False]:
    ...

@UnitaryPredicate.register(Factorization)
def _(expr, assumptions) -> Literal[True] | None:
    ...

@FullRankPredicate.register(MatMul)
def _(expr, assumptions) -> Literal[True] | None:
    ...

@FullRankPredicate.register(MatPow)
def _(expr, assumptions) -> bool | None:
    ...

@FullRankPredicate.register(Identity)
def _(expr, assumptions) -> Literal[True]:
    ...

@FullRankPredicate.register(ZeroMatrix)
def _(expr, assumptions) -> Literal[False]:
    ...

@FullRankPredicate.register(OneMatrix)
def _(expr, assumptions):
    ...

@FullRankPredicate.register_many(Inverse, Transpose)
def _(expr, assumptions) -> bool | None:
    ...

@FullRankPredicate.register(MatrixSlice)
def _(expr, assumptions) -> Literal[True] | None:
    ...

@PositiveDefinitePredicate.register(MatMul)
def _(expr, assumptions) -> bool | None:
    ...

@PositiveDefinitePredicate.register(MatPow)
def _(expr, assumptions) -> Literal[True] | None:
    ...

@PositiveDefinitePredicate.register(MatAdd)
def _(expr, assumptions) -> Literal[True] | None:
    ...

@PositiveDefinitePredicate.register(MatrixSymbol)
def _(expr, assumptions) -> bool | None:
    ...

@PositiveDefinitePredicate.register(Identity)
def _(expr, assumptions) -> Literal[True]:
    ...

@PositiveDefinitePredicate.register(ZeroMatrix)
def _(expr, assumptions) -> Literal[False]:
    ...

@PositiveDefinitePredicate.register(OneMatrix)
def _(expr, assumptions):
    ...

@PositiveDefinitePredicate.register_many(Inverse, Transpose)
def _(expr, assumptions) -> bool | None:
    ...

@PositiveDefinitePredicate.register(MatrixSlice)
def _(expr, assumptions) -> bool | None:
    ...

@UpperTriangularPredicate.register(MatMul)
def _(expr, assumptions) -> Literal[True] | None:
    ...

@UpperTriangularPredicate.register(MatAdd)
def _(expr, assumptions) -> Literal[True] | None:
    ...

@UpperTriangularPredicate.register(MatPow)
def _(expr, assumptions) -> bool | None:
    ...

@UpperTriangularPredicate.register(MatrixSymbol)
def _(expr, assumptions) -> Literal[True] | None:
    ...

@UpperTriangularPredicate.register_many(Identity, ZeroMatrix)
def _(expr, assumptions) -> Literal[True]:
    ...

@UpperTriangularPredicate.register(OneMatrix)
def _(expr, assumptions):
    ...

@UpperTriangularPredicate.register(Transpose)
def _(expr, assumptions) -> bool | None:
    ...

@UpperTriangularPredicate.register(Inverse)
def _(expr, assumptions) -> bool | None:
    ...

@UpperTriangularPredicate.register(MatrixSlice)
def _(expr, assumptions) -> bool | None:
    ...

@UpperTriangularPredicate.register(Factorization)
def _(expr, assumptions) -> Literal[True] | None:
    ...

@LowerTriangularPredicate.register(MatMul)
def _(expr, assumptions) -> Literal[True] | None:
    ...

@LowerTriangularPredicate.register(MatAdd)
def _(expr, assumptions) -> Literal[True] | None:
    ...

@LowerTriangularPredicate.register(MatPow)
def _(expr, assumptions) -> bool | None:
    ...

@LowerTriangularPredicate.register(MatrixSymbol)
def _(expr, assumptions) -> Literal[True] | None:
    ...

@LowerTriangularPredicate.register_many(Identity, ZeroMatrix)
def _(expr, assumptions) -> Literal[True]:
    ...

@LowerTriangularPredicate.register(OneMatrix)
def _(expr, assumptions):
    ...

@LowerTriangularPredicate.register(Transpose)
def _(expr, assumptions) -> bool | None:
    ...

@LowerTriangularPredicate.register(Inverse)
def _(expr, assumptions) -> bool | None:
    ...

@LowerTriangularPredicate.register(MatrixSlice)
def _(expr, assumptions) -> bool | None:
    ...

@LowerTriangularPredicate.register(Factorization)
def _(expr, assumptions) -> Literal[True] | None:
    ...

@DiagonalPredicate.register(MatMul)
def _(expr, assumptions) -> Literal[True] | None:
    ...

@DiagonalPredicate.register(MatPow)
def _(expr, assumptions) -> bool | None:
    ...

@DiagonalPredicate.register(MatAdd)
def _(expr, assumptions) -> Literal[True] | None:
    ...

@DiagonalPredicate.register(MatrixSymbol)
def _(expr, assumptions) -> Literal[True] | None:
    ...

@DiagonalPredicate.register(OneMatrix)
def _(expr, assumptions):
    ...

@DiagonalPredicate.register_many(Inverse, Transpose)
def _(expr, assumptions) -> bool | None:
    ...

@DiagonalPredicate.register(MatrixSlice)
def _(expr, assumptions) -> bool | None:
    ...

@DiagonalPredicate.register_many(DiagonalMatrix, DiagMatrix, Identity, ZeroMatrix)
def _(expr, assumptions) -> Literal[True]:
    ...

@DiagonalPredicate.register(Factorization)
def _(expr, assumptions) -> Literal[True] | None:
    ...

def BM_elements(predicate, expr, assumptions) -> bool:
    ...

def MS_elements(predicate, expr, assumptions) -> bool | None:
    ...

def MatMul_elements(matrix_predicate, scalar_predicate, expr, assumptions) -> bool | None:
    ...

@IntegerElementsPredicate.register_many(Determinant, HadamardProduct, MatAdd, Trace, Transpose)
def _(expr, assumptions) -> bool | None:
    ...

@IntegerElementsPredicate.register(MatPow)
def _(expr, assumptions) -> bool | None:
    ...

@IntegerElementsPredicate.register_many(Identity, OneMatrix, ZeroMatrix)
def _(expr, assumptions) -> Literal[True]:
    ...

@IntegerElementsPredicate.register(MatMul)
def _(expr, assumptions) -> bool | None:
    ...

@IntegerElementsPredicate.register(MatrixSlice)
def _(expr, assumptions) -> bool | None:
    ...

@IntegerElementsPredicate.register(BlockMatrix)
def _(expr, assumptions) -> bool:
    ...

@RealElementsPredicate.register_many(Determinant, Factorization, HadamardProduct, MatAdd, Trace, Transpose)
def _(expr, assumptions) -> bool | None:
    ...

@RealElementsPredicate.register(MatPow)
def _(expr, assumptions) -> bool | None:
    ...

@RealElementsPredicate.register(MatMul)
def _(expr, assumptions) -> bool | None:
    ...

@RealElementsPredicate.register(MatrixSlice)
def _(expr, assumptions) -> bool | None:
    ...

@RealElementsPredicate.register(BlockMatrix)
def _(expr, assumptions) -> bool:
    ...

@ComplexElementsPredicate.register_many(Determinant, Factorization, HadamardProduct, Inverse, MatAdd, Trace, Transpose)
def _(expr, assumptions) -> bool | None:
    ...

@ComplexElementsPredicate.register(MatPow)
def _(expr, assumptions) -> bool | None:
    ...

@ComplexElementsPredicate.register(MatMul)
def _(expr, assumptions) -> bool | None:
    ...

@ComplexElementsPredicate.register(MatrixSlice)
def _(expr, assumptions) -> bool | None:
    ...

@ComplexElementsPredicate.register(BlockMatrix)
def _(expr, assumptions) -> bool:
    ...

@ComplexElementsPredicate.register(DFT)
def _(expr, assumptions) -> Literal[True]:
    ...

