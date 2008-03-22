//
//  NSMutableDictionary+CouchObjC.h
//  CouchObjC
//
//  Created by Stig Brautaset on 21/03/2008.
//  Copyright 2008 Stig Brautaset. All rights reserved.
//

#import <Cocoa/Cocoa.h>

/// Convenience category on NSDictionary.
@interface NSDictionary (NSDictionary_CouchObjC)

/// Returns the document's name.
- (NSString*)name;

/// Returns the document's revision.
- (NSString*)rev;

/// Returns the document's attachments.
- (NSDictionary*)attachments;

@end

/// Convenience category on NSMutableDictionary.
@interface NSMutableDictionary (NSMutableDictionary_CouchObjC)

/// Set the id of the document.
- (void)setName:(NSString*)name;

/// Set the revision of the document.
- (void)setRev:(NSString*)rev;

/// Add an attachment to the document.
- (void)addAttachmentNamed:(NSString*)name ofType:(NSString*)type data:(id)data;

@end
