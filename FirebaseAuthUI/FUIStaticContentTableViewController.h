//
//  Copyright (c) 2017 Google Inc.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <UIKit/UIKit.h>

#import "FUIStaticContentTableViewManager.h"

NS_ASSUME_NONNULL_BEGIN

/** @class FUIStaticContentTableViewController
    @brief The view controller which presents contents of @c FUIStaticContentTableViewContent.
        controller has footer and header views.
 */
@interface FUIStaticContentTableViewController : UIViewController

/** @fn initWithContents:nextTitle:nextAction
    @brief Convenience initializer. View controller doesn't have header and footer sections.
    @param contents The contents of the table view presented in the controller.
    @param actionTitle Text displayed on the navigation bar title.
    @param nextAction Action triggered on the right bar item of @C UINavigationController
 */
- (nullable instancetype)initWithContents:(FUIStaticContentTableViewContent *)contents
                                nextTitle:(nullable NSString *)nextTitle
                               nextAction:(nullable FUIStaticContentTableViewCellAction)nextAction;


/** @fn initWithContents:nextTitle:nextAction:headerText:
    @brief Convenience initializer. View controller doesn't have footer section.
    @param contents The contents of the table view presented in the controller.
    @param actionTitle Text displayed on the navigation bar title.
    @param nextAction Action triggered on the right bar item of @C UINavigationController
    @param headerText Text displayed at the header view controller.
 */
- (nullable instancetype)initWithContents:(FUIStaticContentTableViewContent *)contents
                                nextTitle:(nullable NSString *)nextTitle
                               nextAction:(nullable FUIStaticContentTableViewCellAction)nextAction
                               headerText:(nullable NSString *)headerText;

/** @fn initWithContents:nextTitle:nextAction:headerText:footerText:footerAction:
    @brief Designated initializer.
    @param contents The contents of the table view presented in the controller.
    @param actionTitle Text displayed on the navigation bar title.
    @param nextAction Action triggered on the right bar item of @C UINavigationController
    @param headerText Text displayed at the header view controller.
    @param footerText Text displayed at the footer of view controller.
    @param footerAction Action triggered when user taps on the footer.
 */
- (nullable instancetype)initWithContents:(FUIStaticContentTableViewContent *)contents
                                nextTitle:(nullable NSString *)actionTitle
                               nextAction:(nullable FUIStaticContentTableViewCellAction)nextAction
                               headerText:(nullable NSString *)headerText
                               footerText:(nullable NSString *)footerText
                             footerAction:(nullable FUIStaticContentTableViewCellAction)footerAction
    NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
