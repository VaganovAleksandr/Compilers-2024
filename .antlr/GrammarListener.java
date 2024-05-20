// Generated from /Users/aleksandrvaganov/Desktop/Compilers/Grammar.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link GrammarParser}.
 */
public interface GrammarListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link GrammarParser#prog}.
	 * @param ctx the parse tree
	 */
	void enterProg(GrammarParser.ProgContext ctx);
	/**
	 * Exit a parse tree produced by {@link GrammarParser#prog}.
	 * @param ctx the parse tree
	 */
	void exitProg(GrammarParser.ProgContext ctx);
	/**
	 * Enter a parse tree produced by {@link GrammarParser#base_type}.
	 * @param ctx the parse tree
	 */
	void enterBase_type(GrammarParser.Base_typeContext ctx);
	/**
	 * Exit a parse tree produced by {@link GrammarParser#base_type}.
	 * @param ctx the parse tree
	 */
	void exitBase_type(GrammarParser.Base_typeContext ctx);
	/**
	 * Enter a parse tree produced by {@link GrammarParser#variable_declaration}.
	 * @param ctx the parse tree
	 */
	void enterVariable_declaration(GrammarParser.Variable_declarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link GrammarParser#variable_declaration}.
	 * @param ctx the parse tree
	 */
	void exitVariable_declaration(GrammarParser.Variable_declarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link GrammarParser#variable_definition}.
	 * @param ctx the parse tree
	 */
	void enterVariable_definition(GrammarParser.Variable_definitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link GrammarParser#variable_definition}.
	 * @param ctx the parse tree
	 */
	void exitVariable_definition(GrammarParser.Variable_definitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link GrammarParser#variable_declaration_definition}.
	 * @param ctx the parse tree
	 */
	void enterVariable_declaration_definition(GrammarParser.Variable_declaration_definitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link GrammarParser#variable_declaration_definition}.
	 * @param ctx the parse tree
	 */
	void exitVariable_declaration_definition(GrammarParser.Variable_declaration_definitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link GrammarParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatement(GrammarParser.StatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link GrammarParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatement(GrammarParser.StatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link GrammarParser#binary_operator}.
	 * @param ctx the parse tree
	 */
	void enterBinary_operator(GrammarParser.Binary_operatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link GrammarParser#binary_operator}.
	 * @param ctx the parse tree
	 */
	void exitBinary_operator(GrammarParser.Binary_operatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link GrammarParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterExpression(GrammarParser.ExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link GrammarParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitExpression(GrammarParser.ExpressionContext ctx);
}