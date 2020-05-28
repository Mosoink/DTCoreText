//
//  DTHTMLElementLI.h
//  DTCoreText
//
//  Created by Oliver Drobnik on 27.12.12.
//  Copyright (c) 2012 Drobnik.com. All rights reserved.
//

#import "DTHTMLElement.h"

typedef NSString* DTHTMLElementAttributeName;

FOUNDATION_EXPORT DTHTMLElementAttributeName DTListItemPrefixFontAttributeName;
FOUNDATION_EXPORT DTHTMLElementAttributeName DTListItemPrefixColorAttributeName;

/**
 Specialized subclass of <DTHTMLElement> that deals with list items.
 */
@interface DTListItemHTMLElement : DTHTMLElement

@property (nonatomic, copy) NSDictionary *addonAtts;

@end
