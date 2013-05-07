//
//  XcodeMisc.h
//  KSImageNamed
//
//  Created by Kent Sutherland on 1/19/13.
//
//

#import <Cocoa/Cocoa.h>

@interface NSObject ()
- (id)filesContaining:(id)arg1 anchorStart:(BOOL)arg2 anchorEnd:(BOOL)arg3 subsequence:(BOOL)arg4 ignoreCase:(BOOL)arg5 cancelWhen:(id)arg6;
- (id)fileDataTypePresumed;
- (BOOL)conformsToAnyIdentifierInSet:(id)arg1;
- (id)databaseQueryProvider;
- (id)codeCompletionsAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 completionContext:(id *)arg3 sortedUsingBlock:(id)arg4;
- (NSRange)characterRange; //DVTTextDocumentLocation
- (NSRange)lineRange; //DVTTextDocumentLocation

- (id)workspace;
- (id)index;
- (NSString *)workspaceName;

- (id)symbolNameAtCharacterIndex:(unsigned long long)arg1 nameRanges:(id *)arg2; //DVTSourceTextStorage
- (id)sourceModelItemAtCharacterIndex:(unsigned long long)arg1; //DVTSourceTextStorage
- (id)sourceModel; //DVTSourceTextStorage

- (id)stringConstantAtLocation:(unsigned long long)arg1; //DVTSourceModel

- (id)previousItem; //DVTSourceModelItem

- (id)_listWindowController; //DVTTextCompletionSession
@end

@interface DVTCompletingTextView : NSTextView
- (BOOL)shouldAutoCompleteAtLocation:(unsigned long long)arg1;
- (NSRange)realSelectedRange;
- (void)_replaceCellWithCellText:(id)arg1;
@end

@interface DVTSourceTextView : DVTCompletingTextView
@end


@interface DVTTextCompletionSession : NSObject
@property(nonatomic) long long selectedCompletionIndex;
@property(retain) NSArray *filteredCompletionsAlpha;
@property(retain) NSArray *allCompletions;

- (BOOL)shouldAutoSuggestForTextChange;
@end

@interface DVTTextCompletionController : NSObject
@property(retain) DVTTextCompletionSession *currentSession;
@property(readonly) DVTCompletingTextView *textView;
@property(getter=isAutoCompletionEnabled) BOOL autoCompletionEnabled;

- (void)textViewDidInsertText;
- (BOOL)acceptCurrentCompletion;
- (BOOL)_showCompletionsAtCursorLocationExplicitly:(BOOL)arg1;
- (BOOL)textViewShouldChangeTextInRange:(NSRange)arg1 replacementString:(id)replacementString;
@end

@interface DVTTextCompletionListWindowController : NSWindowController
- (id)_selectedCompletionItem;
@end

@interface IDEIndexCompletionStrategy : NSObject
- (id)completionItemsForDocumentLocation:(id)arg1 context:(id)arg2 areDefinitive:(char *)arg3;
@end
