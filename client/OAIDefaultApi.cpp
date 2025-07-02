/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIDefaultApi.h"
#include "OAIServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace tele_rest {

OAIDefaultApi::OAIDefaultApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      _isResponseCompressionEnabled(false),
      _isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

OAIDefaultApi::~OAIDefaultApi() {
}

void OAIDefaultApi::initializeServerConfigs() {
    //Default server
    QList<OAIServerConfiguration> defaultConf = QList<OAIServerConfiguration>();
    //varying endpoint server
    defaultConf.append(OAIServerConfiguration(
    QUrl("https://api.telegram.org/bot{token}"),
    "No description provided",
    QMap<QString, OAIServerVariable>{ 
    {"token", OAIServerVariable("Each bot is given a unique authentication token when it is created.","123456:ABC-DEF1234ghIkl-zyx57W2v1u123ew11",
    QSet<QString>{ {"123456:ABC-DEF1234ghIkl-zyx57W2v1u123ew11"} })}, }));
    
    _serverConfigs.insert("postAddStickerToSet", defaultConf);
    _serverIndices.insert("postAddStickerToSet", 0);
    _serverConfigs.insert("postAnswerCallbackQuery", defaultConf);
    _serverIndices.insert("postAnswerCallbackQuery", 0);
    _serverConfigs.insert("postAnswerInlineQuery", defaultConf);
    _serverIndices.insert("postAnswerInlineQuery", 0);
    _serverConfigs.insert("postAnswerPreCheckoutQuery", defaultConf);
    _serverIndices.insert("postAnswerPreCheckoutQuery", 0);
    _serverConfigs.insert("postAnswerShippingQuery", defaultConf);
    _serverIndices.insert("postAnswerShippingQuery", 0);
    _serverConfigs.insert("postAnswerWebAppQuery", defaultConf);
    _serverIndices.insert("postAnswerWebAppQuery", 0);
    _serverConfigs.insert("postApproveChatJoinRequest", defaultConf);
    _serverIndices.insert("postApproveChatJoinRequest", 0);
    _serverConfigs.insert("postBanChatMember", defaultConf);
    _serverIndices.insert("postBanChatMember", 0);
    _serverConfigs.insert("postBanChatSenderChat", defaultConf);
    _serverIndices.insert("postBanChatSenderChat", 0);
    _serverConfigs.insert("postClose", defaultConf);
    _serverIndices.insert("postClose", 0);
    _serverConfigs.insert("postCloseForumTopic", defaultConf);
    _serverIndices.insert("postCloseForumTopic", 0);
    _serverConfigs.insert("postCloseGeneralForumTopic", defaultConf);
    _serverIndices.insert("postCloseGeneralForumTopic", 0);
    _serverConfigs.insert("postConvertGiftToStars", defaultConf);
    _serverIndices.insert("postConvertGiftToStars", 0);
    _serverConfigs.insert("postCopyMessage", defaultConf);
    _serverIndices.insert("postCopyMessage", 0);
    _serverConfigs.insert("postCopyMessages", defaultConf);
    _serverIndices.insert("postCopyMessages", 0);
    _serverConfigs.insert("postCreateChatInviteLink", defaultConf);
    _serverIndices.insert("postCreateChatInviteLink", 0);
    _serverConfigs.insert("postCreateChatSubscriptionInviteLink", defaultConf);
    _serverIndices.insert("postCreateChatSubscriptionInviteLink", 0);
    _serverConfigs.insert("postCreateForumTopic", defaultConf);
    _serverIndices.insert("postCreateForumTopic", 0);
    _serverConfigs.insert("postCreateInvoiceLink", defaultConf);
    _serverIndices.insert("postCreateInvoiceLink", 0);
    _serverConfigs.insert("postCreateNewStickerSet", defaultConf);
    _serverIndices.insert("postCreateNewStickerSet", 0);
    _serverConfigs.insert("postDeclineChatJoinRequest", defaultConf);
    _serverIndices.insert("postDeclineChatJoinRequest", 0);
    _serverConfigs.insert("postDeleteBusinessMessages", defaultConf);
    _serverIndices.insert("postDeleteBusinessMessages", 0);
    _serverConfigs.insert("postDeleteChatPhoto", defaultConf);
    _serverIndices.insert("postDeleteChatPhoto", 0);
    _serverConfigs.insert("postDeleteChatStickerSet", defaultConf);
    _serverIndices.insert("postDeleteChatStickerSet", 0);
    _serverConfigs.insert("postDeleteForumTopic", defaultConf);
    _serverIndices.insert("postDeleteForumTopic", 0);
    _serverConfigs.insert("postDeleteMessage", defaultConf);
    _serverIndices.insert("postDeleteMessage", 0);
    _serverConfigs.insert("postDeleteMessages", defaultConf);
    _serverIndices.insert("postDeleteMessages", 0);
    _serverConfigs.insert("postDeleteMyCommands", defaultConf);
    _serverIndices.insert("postDeleteMyCommands", 0);
    _serverConfigs.insert("postDeleteStickerFromSet", defaultConf);
    _serverIndices.insert("postDeleteStickerFromSet", 0);
    _serverConfigs.insert("postDeleteStickerSet", defaultConf);
    _serverIndices.insert("postDeleteStickerSet", 0);
    _serverConfigs.insert("postDeleteStory", defaultConf);
    _serverIndices.insert("postDeleteStory", 0);
    _serverConfigs.insert("postDeleteWebhook", defaultConf);
    _serverIndices.insert("postDeleteWebhook", 0);
    _serverConfigs.insert("postEditChatInviteLink", defaultConf);
    _serverIndices.insert("postEditChatInviteLink", 0);
    _serverConfigs.insert("postEditChatSubscriptionInviteLink", defaultConf);
    _serverIndices.insert("postEditChatSubscriptionInviteLink", 0);
    _serverConfigs.insert("postEditForumTopic", defaultConf);
    _serverIndices.insert("postEditForumTopic", 0);
    _serverConfigs.insert("postEditGeneralForumTopic", defaultConf);
    _serverIndices.insert("postEditGeneralForumTopic", 0);
    _serverConfigs.insert("postEditMessageCaption", defaultConf);
    _serverIndices.insert("postEditMessageCaption", 0);
    _serverConfigs.insert("postEditMessageLiveLocation", defaultConf);
    _serverIndices.insert("postEditMessageLiveLocation", 0);
    _serverConfigs.insert("postEditMessageMedia", defaultConf);
    _serverIndices.insert("postEditMessageMedia", 0);
    _serverConfigs.insert("postEditMessageReplyMarkup", defaultConf);
    _serverIndices.insert("postEditMessageReplyMarkup", 0);
    _serverConfigs.insert("postEditMessageText", defaultConf);
    _serverIndices.insert("postEditMessageText", 0);
    _serverConfigs.insert("postEditStory", defaultConf);
    _serverIndices.insert("postEditStory", 0);
    _serverConfigs.insert("postEditUserStarSubscription", defaultConf);
    _serverIndices.insert("postEditUserStarSubscription", 0);
    _serverConfigs.insert("postExportChatInviteLink", defaultConf);
    _serverIndices.insert("postExportChatInviteLink", 0);
    _serverConfigs.insert("postForwardMessage", defaultConf);
    _serverIndices.insert("postForwardMessage", 0);
    _serverConfigs.insert("postForwardMessages", defaultConf);
    _serverIndices.insert("postForwardMessages", 0);
    _serverConfigs.insert("postGetAvailableGifts", defaultConf);
    _serverIndices.insert("postGetAvailableGifts", 0);
    _serverConfigs.insert("postGetBusinessAccountGifts", defaultConf);
    _serverIndices.insert("postGetBusinessAccountGifts", 0);
    _serverConfigs.insert("postGetBusinessAccountStarBalance", defaultConf);
    _serverIndices.insert("postGetBusinessAccountStarBalance", 0);
    _serverConfigs.insert("postGetBusinessConnection", defaultConf);
    _serverIndices.insert("postGetBusinessConnection", 0);
    _serverConfigs.insert("postGetChat", defaultConf);
    _serverIndices.insert("postGetChat", 0);
    _serverConfigs.insert("postGetChatAdministrators", defaultConf);
    _serverIndices.insert("postGetChatAdministrators", 0);
    _serverConfigs.insert("postGetChatMember", defaultConf);
    _serverIndices.insert("postGetChatMember", 0);
    _serverConfigs.insert("postGetChatMemberCount", defaultConf);
    _serverIndices.insert("postGetChatMemberCount", 0);
    _serverConfigs.insert("postGetChatMenuButton", defaultConf);
    _serverIndices.insert("postGetChatMenuButton", 0);
    _serverConfigs.insert("postGetCustomEmojiStickers", defaultConf);
    _serverIndices.insert("postGetCustomEmojiStickers", 0);
    _serverConfigs.insert("postGetFile", defaultConf);
    _serverIndices.insert("postGetFile", 0);
    _serverConfigs.insert("postGetForumTopicIconStickers", defaultConf);
    _serverIndices.insert("postGetForumTopicIconStickers", 0);
    _serverConfigs.insert("postGetGameHighScores", defaultConf);
    _serverIndices.insert("postGetGameHighScores", 0);
    _serverConfigs.insert("postGetMe", defaultConf);
    _serverIndices.insert("postGetMe", 0);
    _serverConfigs.insert("postGetMyCommands", defaultConf);
    _serverIndices.insert("postGetMyCommands", 0);
    _serverConfigs.insert("postGetMyDefaultAdministratorRights", defaultConf);
    _serverIndices.insert("postGetMyDefaultAdministratorRights", 0);
    _serverConfigs.insert("postGetMyDescription", defaultConf);
    _serverIndices.insert("postGetMyDescription", 0);
    _serverConfigs.insert("postGetMyName", defaultConf);
    _serverIndices.insert("postGetMyName", 0);
    _serverConfigs.insert("postGetMyShortDescription", defaultConf);
    _serverIndices.insert("postGetMyShortDescription", 0);
    _serverConfigs.insert("postGetStarTransactions", defaultConf);
    _serverIndices.insert("postGetStarTransactions", 0);
    _serverConfigs.insert("postGetStickerSet", defaultConf);
    _serverIndices.insert("postGetStickerSet", 0);
    _serverConfigs.insert("postGetUpdates", defaultConf);
    _serverIndices.insert("postGetUpdates", 0);
    _serverConfigs.insert("postGetUserChatBoosts", defaultConf);
    _serverIndices.insert("postGetUserChatBoosts", 0);
    _serverConfigs.insert("postGetUserProfilePhotos", defaultConf);
    _serverIndices.insert("postGetUserProfilePhotos", 0);
    _serverConfigs.insert("postGetWebhookInfo", defaultConf);
    _serverIndices.insert("postGetWebhookInfo", 0);
    _serverConfigs.insert("postGiftPremiumSubscription", defaultConf);
    _serverIndices.insert("postGiftPremiumSubscription", 0);
    _serverConfigs.insert("postHideGeneralForumTopic", defaultConf);
    _serverIndices.insert("postHideGeneralForumTopic", 0);
    _serverConfigs.insert("postLeaveChat", defaultConf);
    _serverIndices.insert("postLeaveChat", 0);
    _serverConfigs.insert("postLogOut", defaultConf);
    _serverIndices.insert("postLogOut", 0);
    _serverConfigs.insert("postPinChatMessage", defaultConf);
    _serverIndices.insert("postPinChatMessage", 0);
    _serverConfigs.insert("postPostStory", defaultConf);
    _serverIndices.insert("postPostStory", 0);
    _serverConfigs.insert("postPromoteChatMember", defaultConf);
    _serverIndices.insert("postPromoteChatMember", 0);
    _serverConfigs.insert("postReadBusinessMessage", defaultConf);
    _serverIndices.insert("postReadBusinessMessage", 0);
    _serverConfigs.insert("postRefundStarPayment", defaultConf);
    _serverIndices.insert("postRefundStarPayment", 0);
    _serverConfigs.insert("postRemoveBusinessAccountProfilePhoto", defaultConf);
    _serverIndices.insert("postRemoveBusinessAccountProfilePhoto", 0);
    _serverConfigs.insert("postRemoveChatVerification", defaultConf);
    _serverIndices.insert("postRemoveChatVerification", 0);
    _serverConfigs.insert("postRemoveUserVerification", defaultConf);
    _serverIndices.insert("postRemoveUserVerification", 0);
    _serverConfigs.insert("postReopenForumTopic", defaultConf);
    _serverIndices.insert("postReopenForumTopic", 0);
    _serverConfigs.insert("postReopenGeneralForumTopic", defaultConf);
    _serverIndices.insert("postReopenGeneralForumTopic", 0);
    _serverConfigs.insert("postReplaceStickerInSet", defaultConf);
    _serverIndices.insert("postReplaceStickerInSet", 0);
    _serverConfigs.insert("postRestrictChatMember", defaultConf);
    _serverIndices.insert("postRestrictChatMember", 0);
    _serverConfigs.insert("postRevokeChatInviteLink", defaultConf);
    _serverIndices.insert("postRevokeChatInviteLink", 0);
    _serverConfigs.insert("postSavePreparedInlineMessage", defaultConf);
    _serverIndices.insert("postSavePreparedInlineMessage", 0);
    _serverConfigs.insert("postSendAnimation", defaultConf);
    _serverIndices.insert("postSendAnimation", 0);
    _serverConfigs.insert("postSendAudio", defaultConf);
    _serverIndices.insert("postSendAudio", 0);
    _serverConfigs.insert("postSendChatAction", defaultConf);
    _serverIndices.insert("postSendChatAction", 0);
    _serverConfigs.insert("postSendContact", defaultConf);
    _serverIndices.insert("postSendContact", 0);
    _serverConfigs.insert("postSendDice", defaultConf);
    _serverIndices.insert("postSendDice", 0);
    _serverConfigs.insert("postSendDocument", defaultConf);
    _serverIndices.insert("postSendDocument", 0);
    _serverConfigs.insert("postSendGame", defaultConf);
    _serverIndices.insert("postSendGame", 0);
    _serverConfigs.insert("postSendGift", defaultConf);
    _serverIndices.insert("postSendGift", 0);
    _serverConfigs.insert("postSendInvoice", defaultConf);
    _serverIndices.insert("postSendInvoice", 0);
    _serverConfigs.insert("postSendLocation", defaultConf);
    _serverIndices.insert("postSendLocation", 0);
    _serverConfigs.insert("postSendMediaGroup", defaultConf);
    _serverIndices.insert("postSendMediaGroup", 0);
    _serverConfigs.insert("postSendMessage", defaultConf);
    _serverIndices.insert("postSendMessage", 0);
    _serverConfigs.insert("postSendPaidMedia", defaultConf);
    _serverIndices.insert("postSendPaidMedia", 0);
    _serverConfigs.insert("postSendPhoto", defaultConf);
    _serverIndices.insert("postSendPhoto", 0);
    _serverConfigs.insert("postSendPoll", defaultConf);
    _serverIndices.insert("postSendPoll", 0);
    _serverConfigs.insert("postSendSticker", defaultConf);
    _serverIndices.insert("postSendSticker", 0);
    _serverConfigs.insert("postSendVenue", defaultConf);
    _serverIndices.insert("postSendVenue", 0);
    _serverConfigs.insert("postSendVideo", defaultConf);
    _serverIndices.insert("postSendVideo", 0);
    _serverConfigs.insert("postSendVideoNote", defaultConf);
    _serverIndices.insert("postSendVideoNote", 0);
    _serverConfigs.insert("postSendVoice", defaultConf);
    _serverIndices.insert("postSendVoice", 0);
    _serverConfigs.insert("postSetBusinessAccountBio", defaultConf);
    _serverIndices.insert("postSetBusinessAccountBio", 0);
    _serverConfigs.insert("postSetBusinessAccountGiftSettings", defaultConf);
    _serverIndices.insert("postSetBusinessAccountGiftSettings", 0);
    _serverConfigs.insert("postSetBusinessAccountName", defaultConf);
    _serverIndices.insert("postSetBusinessAccountName", 0);
    _serverConfigs.insert("postSetBusinessAccountProfilePhoto", defaultConf);
    _serverIndices.insert("postSetBusinessAccountProfilePhoto", 0);
    _serverConfigs.insert("postSetBusinessAccountUsername", defaultConf);
    _serverIndices.insert("postSetBusinessAccountUsername", 0);
    _serverConfigs.insert("postSetChatAdministratorCustomTitle", defaultConf);
    _serverIndices.insert("postSetChatAdministratorCustomTitle", 0);
    _serverConfigs.insert("postSetChatDescription", defaultConf);
    _serverIndices.insert("postSetChatDescription", 0);
    _serverConfigs.insert("postSetChatMenuButton", defaultConf);
    _serverIndices.insert("postSetChatMenuButton", 0);
    _serverConfigs.insert("postSetChatPermissions", defaultConf);
    _serverIndices.insert("postSetChatPermissions", 0);
    _serverConfigs.insert("postSetChatPhoto", defaultConf);
    _serverIndices.insert("postSetChatPhoto", 0);
    _serverConfigs.insert("postSetChatStickerSet", defaultConf);
    _serverIndices.insert("postSetChatStickerSet", 0);
    _serverConfigs.insert("postSetChatTitle", defaultConf);
    _serverIndices.insert("postSetChatTitle", 0);
    _serverConfigs.insert("postSetCustomEmojiStickerSetThumbnail", defaultConf);
    _serverIndices.insert("postSetCustomEmojiStickerSetThumbnail", 0);
    _serverConfigs.insert("postSetGameScore", defaultConf);
    _serverIndices.insert("postSetGameScore", 0);
    _serverConfigs.insert("postSetMessageReaction", defaultConf);
    _serverIndices.insert("postSetMessageReaction", 0);
    _serverConfigs.insert("postSetMyCommands", defaultConf);
    _serverIndices.insert("postSetMyCommands", 0);
    _serverConfigs.insert("postSetMyDefaultAdministratorRights", defaultConf);
    _serverIndices.insert("postSetMyDefaultAdministratorRights", 0);
    _serverConfigs.insert("postSetMyDescription", defaultConf);
    _serverIndices.insert("postSetMyDescription", 0);
    _serverConfigs.insert("postSetMyName", defaultConf);
    _serverIndices.insert("postSetMyName", 0);
    _serverConfigs.insert("postSetMyShortDescription", defaultConf);
    _serverIndices.insert("postSetMyShortDescription", 0);
    _serverConfigs.insert("postSetPassportDataErrors", defaultConf);
    _serverIndices.insert("postSetPassportDataErrors", 0);
    _serverConfigs.insert("postSetStickerEmojiList", defaultConf);
    _serverIndices.insert("postSetStickerEmojiList", 0);
    _serverConfigs.insert("postSetStickerKeywords", defaultConf);
    _serverIndices.insert("postSetStickerKeywords", 0);
    _serverConfigs.insert("postSetStickerMaskPosition", defaultConf);
    _serverIndices.insert("postSetStickerMaskPosition", 0);
    _serverConfigs.insert("postSetStickerPositionInSet", defaultConf);
    _serverIndices.insert("postSetStickerPositionInSet", 0);
    _serverConfigs.insert("postSetStickerSetThumbnail", defaultConf);
    _serverIndices.insert("postSetStickerSetThumbnail", 0);
    _serverConfigs.insert("postSetStickerSetTitle", defaultConf);
    _serverIndices.insert("postSetStickerSetTitle", 0);
    _serverConfigs.insert("postSetUserEmojiStatus", defaultConf);
    _serverIndices.insert("postSetUserEmojiStatus", 0);
    _serverConfigs.insert("postSetWebhook", defaultConf);
    _serverIndices.insert("postSetWebhook", 0);
    _serverConfigs.insert("postStopMessageLiveLocation", defaultConf);
    _serverIndices.insert("postStopMessageLiveLocation", 0);
    _serverConfigs.insert("postStopPoll", defaultConf);
    _serverIndices.insert("postStopPoll", 0);
    _serverConfigs.insert("postTransferBusinessAccountStars", defaultConf);
    _serverIndices.insert("postTransferBusinessAccountStars", 0);
    _serverConfigs.insert("postTransferGift", defaultConf);
    _serverIndices.insert("postTransferGift", 0);
    _serverConfigs.insert("postUnbanChatMember", defaultConf);
    _serverIndices.insert("postUnbanChatMember", 0);
    _serverConfigs.insert("postUnbanChatSenderChat", defaultConf);
    _serverIndices.insert("postUnbanChatSenderChat", 0);
    _serverConfigs.insert("postUnhideGeneralForumTopic", defaultConf);
    _serverIndices.insert("postUnhideGeneralForumTopic", 0);
    _serverConfigs.insert("postUnpinAllChatMessages", defaultConf);
    _serverIndices.insert("postUnpinAllChatMessages", 0);
    _serverConfigs.insert("postUnpinAllForumTopicMessages", defaultConf);
    _serverIndices.insert("postUnpinAllForumTopicMessages", 0);
    _serverConfigs.insert("postUnpinAllGeneralForumTopicMessages", defaultConf);
    _serverIndices.insert("postUnpinAllGeneralForumTopicMessages", 0);
    _serverConfigs.insert("postUnpinChatMessage", defaultConf);
    _serverIndices.insert("postUnpinChatMessage", 0);
    _serverConfigs.insert("postUpgradeGift", defaultConf);
    _serverIndices.insert("postUpgradeGift", 0);
    _serverConfigs.insert("postUploadStickerFile", defaultConf);
    _serverIndices.insert("postUploadStickerFile", 0);
    _serverConfigs.insert("postVerifyChat", defaultConf);
    _serverIndices.insert("postVerifyChat", 0);
    _serverConfigs.insert("postVerifyUser", defaultConf);
    _serverIndices.insert("postVerifyUser", 0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int OAIDefaultApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value) {
    auto it = _serverConfigs.find(operation);
    if (it != _serverConfigs.end() && serverIndex < it.value().size()) {
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void OAIDefaultApi::setServerIndex(const QString &operation, int serverIndex) {
    if (_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size()) {
        _serverIndices[operation] = serverIndex;
    }
}

void OAIDefaultApi::setApiKey(const QString &apiKeyName, const QString &apiKey) {
    _apiKeys.insert(apiKeyName, apiKey);
}

void OAIDefaultApi::setBearerToken(const QString &token) {
    _bearerToken = token;
}

void OAIDefaultApi::setUsername(const QString &username) {
    _username = username;
}

void OAIDefaultApi::setPassword(const QString &password) {
    _password = password;
}


void OAIDefaultApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAIDefaultApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAIDefaultApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
    _manager = manager;
}

/**
    * Appends a new ServerConfiguration to the config map for a specific operation.
    * @param operation The id to the target operation.
    * @param url A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    * returns the index of the new server config on success and -1 if the operation is not found
    */
int OAIDefaultApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
    if (_serverConfigs.contains(operation)) {
        _serverConfigs[operation].append(OAIServerConfiguration(
                    url,
                    description,
                    variables));
        return _serverConfigs[operation].size()-1;
    } else {
        return -1;
    }
}

/**
    * Appends a new ServerConfiguration to the config map for a all operations and sets the index to that server.
    * @param url A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    */
void OAIDefaultApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
    for (auto keyIt = _serverIndices.keyBegin(); keyIt != _serverIndices.keyEnd(); keyIt++) {
        setServerIndex(*keyIt, addServerConfiguration(*keyIt, url, description, variables));
    }
}

/**
    * Appends a new ServerConfiguration to the config map for an operations and sets the index to that server.
    * @param URL A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    */
void OAIDefaultApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void OAIDefaultApi::addHeaders(const QString &key, const QString &value) {
    _defaultHeaders.insert(key, value);
}

void OAIDefaultApi::enableRequestCompression() {
    _isRequestCompressionEnabled = true;
}

void OAIDefaultApi::enableResponseCompression() {
    _isResponseCompressionEnabled = true;
}

void OAIDefaultApi::abortRequests() {
    Q_EMIT abortRequestsSignal();
}

QString OAIDefaultApi::getParamStylePrefix(const QString &style) {
    if (style == "matrix") {
        return ";";
    } else if (style == "label") {
        return ".";
    } else if (style == "form") {
        return "&";
    } else if (style == "simple") {
        return "";
    } else if (style == "spaceDelimited") {
        return "&";
    } else if (style == "pipeDelimited") {
        return "&";
    } else {
        return "none";
    }
}

QString OAIDefaultApi::getParamStyleSuffix(const QString &style) {
    if (style == "matrix") {
        return "=";
    } else if (style == "label") {
        return "";
    } else if (style == "form") {
        return "=";
    } else if (style == "simple") {
        return "";
    } else if (style == "spaceDelimited") {
        return "=";
    } else if (style == "pipeDelimited") {
        return "=";
    } else {
        return "none";
    }
}

QString OAIDefaultApi::getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode) {

    if (style == "matrix") {
        return (isExplode) ? ";" + name + "=" : ",";

    } else if (style == "label") {
        return (isExplode) ? "." : ",";

    } else if (style == "form") {
        return (isExplode) ? "&" + name + "=" : ",";

    } else if (style == "simple") {
        return ",";
    } else if (style == "spaceDelimited") {
        return (isExplode) ? "&" + name + "=" : " ";

    } else if (style == "pipeDelimited") {
        return (isExplode) ? "&" + name + "=" : "|";

    } else if (style == "deepObject") {
        return (isExplode) ? "&" : "none";

    } else {
        return "none";
    }
}

void OAIDefaultApi::postAddStickerToSet(const qint32 &user_id, const QString &name, const OAIInputSticker &sticker) {
    QString fullPath = QString(_serverConfigs["postAddStickerToSet"][_serverIndices.value("postAddStickerToSet")].URL()+"/addStickerToSet");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id));
    }
    
    {
        input.add_var("name", ::tele_rest::toStringValue(name));
    }
    
    {
        input.add_var("sticker", ::tele_rest::toStringValue(sticker));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postAddStickerToSetCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postAddStickerToSetCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIAddStickerToSetResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postAddStickerToSetSignal(output);
        Q_EMIT postAddStickerToSetSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postAddStickerToSetSignalE(output, error_type, error_str);
        Q_EMIT postAddStickerToSetSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postAddStickerToSetSignalError(output, error_type, error_str);
        Q_EMIT postAddStickerToSetSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postAnswerCallbackQuery(const QString &callback_query_id, const ::tele_rest::OptionalParam<QString> &text, const ::tele_rest::OptionalParam<bool> &show_alert, const ::tele_rest::OptionalParam<QString> &url, const ::tele_rest::OptionalParam<qint32> &cache_time) {
    QString fullPath = QString(_serverConfigs["postAnswerCallbackQuery"][_serverIndices.value("postAnswerCallbackQuery")].URL()+"/answerCallbackQuery");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("callback_query_id", ::tele_rest::toStringValue(callback_query_id));
    }
    if (text.hasValue())
    {
        input.add_var("text", ::tele_rest::toStringValue(text.value()));
    }
    if (show_alert.hasValue())
    {
        input.add_var("show_alert", ::tele_rest::toStringValue(show_alert.value()));
    }
    if (url.hasValue())
    {
        input.add_var("url", ::tele_rest::toStringValue(url.value()));
    }
    if (cache_time.hasValue())
    {
        input.add_var("cache_time", ::tele_rest::toStringValue(cache_time.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postAnswerCallbackQueryCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postAnswerCallbackQueryCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIAnswerCallbackQueryResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postAnswerCallbackQuerySignal(output);
        Q_EMIT postAnswerCallbackQuerySignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postAnswerCallbackQuerySignalE(output, error_type, error_str);
        Q_EMIT postAnswerCallbackQuerySignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postAnswerCallbackQuerySignalError(output, error_type, error_str);
        Q_EMIT postAnswerCallbackQuerySignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postAnswerInlineQuery(const QString &inline_query_id, const QList<OAIInlineQueryResult> &results, const ::tele_rest::OptionalParam<qint32> &cache_time, const ::tele_rest::OptionalParam<bool> &is_personal, const ::tele_rest::OptionalParam<QString> &next_offset, const ::tele_rest::OptionalParam<OAIInlineQueryResultsButton> &button) {
    QString fullPath = QString(_serverConfigs["postAnswerInlineQuery"][_serverIndices.value("postAnswerInlineQuery")].URL()+"/answerInlineQuery");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("inline_query_id", ::tele_rest::toStringValue(inline_query_id));
    }
    
    {
        input.add_var("results", ::tele_rest::toStringValue(results));
    }
    if (cache_time.hasValue())
    {
        input.add_var("cache_time", ::tele_rest::toStringValue(cache_time.value()));
    }
    if (is_personal.hasValue())
    {
        input.add_var("is_personal", ::tele_rest::toStringValue(is_personal.value()));
    }
    if (next_offset.hasValue())
    {
        input.add_var("next_offset", ::tele_rest::toStringValue(next_offset.value()));
    }
    if (button.hasValue())
    {
        input.add_var("button", ::tele_rest::toStringValue(button.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postAnswerInlineQueryCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postAnswerInlineQueryCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIAnswerInlineQueryResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postAnswerInlineQuerySignal(output);
        Q_EMIT postAnswerInlineQuerySignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postAnswerInlineQuerySignalE(output, error_type, error_str);
        Q_EMIT postAnswerInlineQuerySignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postAnswerInlineQuerySignalError(output, error_type, error_str);
        Q_EMIT postAnswerInlineQuerySignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postAnswerPreCheckoutQuery(const QString &pre_checkout_query_id, const bool &ok, const ::tele_rest::OptionalParam<QString> &error_message) {
    QString fullPath = QString(_serverConfigs["postAnswerPreCheckoutQuery"][_serverIndices.value("postAnswerPreCheckoutQuery")].URL()+"/answerPreCheckoutQuery");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("pre_checkout_query_id", ::tele_rest::toStringValue(pre_checkout_query_id));
    }
    
    {
        input.add_var("ok", ::tele_rest::toStringValue(ok));
    }
    if (error_message.hasValue())
    {
        input.add_var("error_message", ::tele_rest::toStringValue(error_message.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postAnswerPreCheckoutQueryCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postAnswerPreCheckoutQueryCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIAnswerPreCheckoutQueryResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postAnswerPreCheckoutQuerySignal(output);
        Q_EMIT postAnswerPreCheckoutQuerySignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postAnswerPreCheckoutQuerySignalE(output, error_type, error_str);
        Q_EMIT postAnswerPreCheckoutQuerySignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postAnswerPreCheckoutQuerySignalError(output, error_type, error_str);
        Q_EMIT postAnswerPreCheckoutQuerySignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postAnswerShippingQuery(const QString &shipping_query_id, const bool &ok, const ::tele_rest::OptionalParam<QList<OAIShippingOption>> &shipping_options, const ::tele_rest::OptionalParam<QString> &error_message) {
    QString fullPath = QString(_serverConfigs["postAnswerShippingQuery"][_serverIndices.value("postAnswerShippingQuery")].URL()+"/answerShippingQuery");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("shipping_query_id", ::tele_rest::toStringValue(shipping_query_id));
    }
    
    {
        input.add_var("ok", ::tele_rest::toStringValue(ok));
    }
    if (shipping_options.hasValue())
    {
        input.add_var("shipping_options", ::tele_rest::toStringValue(shipping_options.value()));
    }
    if (error_message.hasValue())
    {
        input.add_var("error_message", ::tele_rest::toStringValue(error_message.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postAnswerShippingQueryCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postAnswerShippingQueryCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIAnswerShippingQueryResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postAnswerShippingQuerySignal(output);
        Q_EMIT postAnswerShippingQuerySignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postAnswerShippingQuerySignalE(output, error_type, error_str);
        Q_EMIT postAnswerShippingQuerySignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postAnswerShippingQuerySignalError(output, error_type, error_str);
        Q_EMIT postAnswerShippingQuerySignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postAnswerWebAppQuery(const QString &web_app_query_id, const OAIInlineQueryResult &result) {
    QString fullPath = QString(_serverConfigs["postAnswerWebAppQuery"][_serverIndices.value("postAnswerWebAppQuery")].URL()+"/answerWebAppQuery");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("web_app_query_id", ::tele_rest::toStringValue(web_app_query_id));
    }
    
    {
        input.add_var("result", ::tele_rest::toStringValue(result));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postAnswerWebAppQueryCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postAnswerWebAppQueryCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIAnswerWebAppQueryResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postAnswerWebAppQuerySignal(output);
        Q_EMIT postAnswerWebAppQuerySignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postAnswerWebAppQuerySignalE(output, error_type, error_str);
        Q_EMIT postAnswerWebAppQuerySignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postAnswerWebAppQuerySignalError(output, error_type, error_str);
        Q_EMIT postAnswerWebAppQuerySignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postApproveChatJoinRequest(const OAISendMessageRequest_chat_id &chat_id, const qint32 &user_id) {
    QString fullPath = QString(_serverConfigs["postApproveChatJoinRequest"][_serverIndices.value("postApproveChatJoinRequest")].URL()+"/approveChatJoinRequest");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postApproveChatJoinRequestCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postApproveChatJoinRequestCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIApproveChatJoinRequestResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postApproveChatJoinRequestSignal(output);
        Q_EMIT postApproveChatJoinRequestSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postApproveChatJoinRequestSignalE(output, error_type, error_str);
        Q_EMIT postApproveChatJoinRequestSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postApproveChatJoinRequestSignalError(output, error_type, error_str);
        Q_EMIT postApproveChatJoinRequestSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postBanChatMember(const OAIBanChatMemberRequest_chat_id &chat_id, const qint32 &user_id, const ::tele_rest::OptionalParam<qint32> &until_date, const ::tele_rest::OptionalParam<bool> &revoke_messages) {
    QString fullPath = QString(_serverConfigs["postBanChatMember"][_serverIndices.value("postBanChatMember")].URL()+"/banChatMember");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id));
    }
    if (until_date.hasValue())
    {
        input.add_var("until_date", ::tele_rest::toStringValue(until_date.value()));
    }
    if (revoke_messages.hasValue())
    {
        input.add_var("revoke_messages", ::tele_rest::toStringValue(revoke_messages.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postBanChatMemberCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postBanChatMemberCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIBanChatMemberResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postBanChatMemberSignal(output);
        Q_EMIT postBanChatMemberSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postBanChatMemberSignalE(output, error_type, error_str);
        Q_EMIT postBanChatMemberSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postBanChatMemberSignalError(output, error_type, error_str);
        Q_EMIT postBanChatMemberSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postBanChatSenderChat(const OAISendMessageRequest_chat_id &chat_id, const qint32 &sender_chat_id) {
    QString fullPath = QString(_serverConfigs["postBanChatSenderChat"][_serverIndices.value("postBanChatSenderChat")].URL()+"/banChatSenderChat");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("sender_chat_id", ::tele_rest::toStringValue(sender_chat_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postBanChatSenderChatCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postBanChatSenderChatCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIBanChatSenderChatResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postBanChatSenderChatSignal(output);
        Q_EMIT postBanChatSenderChatSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postBanChatSenderChatSignalE(output, error_type, error_str);
        Q_EMIT postBanChatSenderChatSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postBanChatSenderChatSignalError(output, error_type, error_str);
        Q_EMIT postBanChatSenderChatSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postClose() {
    QString fullPath = QString(_serverConfigs["postClose"][_serverIndices.value("postClose")].URL()+"/close");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postCloseCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postCloseCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAICloseResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postCloseSignal(output);
        Q_EMIT postCloseSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postCloseSignalE(output, error_type, error_str);
        Q_EMIT postCloseSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postCloseSignalError(output, error_type, error_str);
        Q_EMIT postCloseSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postCloseForumTopic(const OAIBotCommandScopeChat_chat_id &chat_id, const qint32 &message_thread_id) {
    QString fullPath = QString(_serverConfigs["postCloseForumTopic"][_serverIndices.value("postCloseForumTopic")].URL()+"/closeForumTopic");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postCloseForumTopicCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postCloseForumTopicCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAICloseForumTopicResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postCloseForumTopicSignal(output);
        Q_EMIT postCloseForumTopicSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postCloseForumTopicSignalE(output, error_type, error_str);
        Q_EMIT postCloseForumTopicSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postCloseForumTopicSignalError(output, error_type, error_str);
        Q_EMIT postCloseForumTopicSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postCloseGeneralForumTopic(const OAIBotCommandScopeChat_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["postCloseGeneralForumTopic"][_serverIndices.value("postCloseGeneralForumTopic")].URL()+"/closeGeneralForumTopic");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postCloseGeneralForumTopicCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postCloseGeneralForumTopicCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAICloseGeneralForumTopicResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postCloseGeneralForumTopicSignal(output);
        Q_EMIT postCloseGeneralForumTopicSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postCloseGeneralForumTopicSignalE(output, error_type, error_str);
        Q_EMIT postCloseGeneralForumTopicSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postCloseGeneralForumTopicSignalError(output, error_type, error_str);
        Q_EMIT postCloseGeneralForumTopicSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postConvertGiftToStars(const QString &business_connection_id, const QString &owned_gift_id) {
    QString fullPath = QString(_serverConfigs["postConvertGiftToStars"][_serverIndices.value("postConvertGiftToStars")].URL()+"/convertGiftToStars");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id));
    }
    
    {
        input.add_var("owned_gift_id", ::tele_rest::toStringValue(owned_gift_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postConvertGiftToStarsCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postConvertGiftToStarsCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIConvertGiftToStarsResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postConvertGiftToStarsSignal(output);
        Q_EMIT postConvertGiftToStarsSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postConvertGiftToStarsSignalE(output, error_type, error_str);
        Q_EMIT postConvertGiftToStarsSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postConvertGiftToStarsSignalError(output, error_type, error_str);
        Q_EMIT postConvertGiftToStarsSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postCopyMessage(const OAISendMessageRequest_chat_id &chat_id, const OAIForwardMessageRequest_from_chat_id &from_chat_id, const qint32 &message_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<qint32> &video_start_timestamp, const ::tele_rest::OptionalParam<QString> &caption, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities, const ::tele_rest::OptionalParam<bool> &show_caption_above_media, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAISendMessageRequest_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["postCopyMessage"][_serverIndices.value("postCopyMessage")].URL()+"/copyMessage");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (message_thread_id.hasValue())
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id.value()));
    }
    
    {
        input.add_var("from_chat_id", ::tele_rest::toStringValue(from_chat_id));
    }
    
    {
        input.add_var("message_id", ::tele_rest::toStringValue(message_id));
    }
    if (video_start_timestamp.hasValue())
    {
        input.add_var("video_start_timestamp", ::tele_rest::toStringValue(video_start_timestamp.value()));
    }
    if (caption.hasValue())
    {
        input.add_var("caption", ::tele_rest::toStringValue(caption.value()));
    }
    if (parse_mode.hasValue())
    {
        input.add_var("parse_mode", ::tele_rest::toStringValue(parse_mode.value()));
    }
    if (caption_entities.hasValue())
    {
        input.add_var("caption_entities", ::tele_rest::toStringValue(caption_entities.value()));
    }
    if (show_caption_above_media.hasValue())
    {
        input.add_var("show_caption_above_media", ::tele_rest::toStringValue(show_caption_above_media.value()));
    }
    if (disable_notification.hasValue())
    {
        input.add_var("disable_notification", ::tele_rest::toStringValue(disable_notification.value()));
    }
    if (protect_content.hasValue())
    {
        input.add_var("protect_content", ::tele_rest::toStringValue(protect_content.value()));
    }
    if (allow_paid_broadcast.hasValue())
    {
        input.add_var("allow_paid_broadcast", ::tele_rest::toStringValue(allow_paid_broadcast.value()));
    }
    if (reply_parameters.hasValue())
    {
        input.add_var("reply_parameters", ::tele_rest::toStringValue(reply_parameters.value()));
    }
    if (reply_markup.hasValue())
    {
        input.add_var("reply_markup", ::tele_rest::toStringValue(reply_markup.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postCopyMessageCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postCopyMessageCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAICopyMessageResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postCopyMessageSignal(output);
        Q_EMIT postCopyMessageSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postCopyMessageSignalE(output, error_type, error_str);
        Q_EMIT postCopyMessageSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postCopyMessageSignalError(output, error_type, error_str);
        Q_EMIT postCopyMessageSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postCopyMessages(const OAISendMessageRequest_chat_id &chat_id, const OAIForwardMessagesRequest_from_chat_id &from_chat_id, const QList<qint32> &message_ids, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &remove_caption) {
    QString fullPath = QString(_serverConfigs["postCopyMessages"][_serverIndices.value("postCopyMessages")].URL()+"/copyMessages");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (message_thread_id.hasValue())
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id.value()));
    }
    
    {
        input.add_var("from_chat_id", ::tele_rest::toStringValue(from_chat_id));
    }
    
    {
        input.add_var("message_ids", ::tele_rest::toStringValue(message_ids));
    }
    if (disable_notification.hasValue())
    {
        input.add_var("disable_notification", ::tele_rest::toStringValue(disable_notification.value()));
    }
    if (protect_content.hasValue())
    {
        input.add_var("protect_content", ::tele_rest::toStringValue(protect_content.value()));
    }
    if (remove_caption.hasValue())
    {
        input.add_var("remove_caption", ::tele_rest::toStringValue(remove_caption.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postCopyMessagesCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postCopyMessagesCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAICopyMessagesResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postCopyMessagesSignal(output);
        Q_EMIT postCopyMessagesSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postCopyMessagesSignalE(output, error_type, error_str);
        Q_EMIT postCopyMessagesSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postCopyMessagesSignalError(output, error_type, error_str);
        Q_EMIT postCopyMessagesSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postCreateChatInviteLink(const OAISendMessageRequest_chat_id &chat_id, const ::tele_rest::OptionalParam<QString> &name, const ::tele_rest::OptionalParam<qint32> &expire_date, const ::tele_rest::OptionalParam<qint32> &member_limit, const ::tele_rest::OptionalParam<bool> &creates_join_request) {
    QString fullPath = QString(_serverConfigs["postCreateChatInviteLink"][_serverIndices.value("postCreateChatInviteLink")].URL()+"/createChatInviteLink");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (name.hasValue())
    {
        input.add_var("name", ::tele_rest::toStringValue(name.value()));
    }
    if (expire_date.hasValue())
    {
        input.add_var("expire_date", ::tele_rest::toStringValue(expire_date.value()));
    }
    if (member_limit.hasValue())
    {
        input.add_var("member_limit", ::tele_rest::toStringValue(member_limit.value()));
    }
    if (creates_join_request.hasValue())
    {
        input.add_var("creates_join_request", ::tele_rest::toStringValue(creates_join_request.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postCreateChatInviteLinkCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postCreateChatInviteLinkCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAICreateChatInviteLinkResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postCreateChatInviteLinkSignal(output);
        Q_EMIT postCreateChatInviteLinkSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postCreateChatInviteLinkSignalE(output, error_type, error_str);
        Q_EMIT postCreateChatInviteLinkSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postCreateChatInviteLinkSignalError(output, error_type, error_str);
        Q_EMIT postCreateChatInviteLinkSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postCreateChatSubscriptionInviteLink(const OAICreateChatSubscriptionInviteLinkRequest_chat_id &chat_id, const qint32 &subscription_period, const qint32 &subscription_price, const ::tele_rest::OptionalParam<QString> &name) {
    QString fullPath = QString(_serverConfigs["postCreateChatSubscriptionInviteLink"][_serverIndices.value("postCreateChatSubscriptionInviteLink")].URL()+"/createChatSubscriptionInviteLink");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (name.hasValue())
    {
        input.add_var("name", ::tele_rest::toStringValue(name.value()));
    }
    
    {
        input.add_var("subscription_period", ::tele_rest::toStringValue(subscription_period));
    }
    
    {
        input.add_var("subscription_price", ::tele_rest::toStringValue(subscription_price));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postCreateChatSubscriptionInviteLinkCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postCreateChatSubscriptionInviteLinkCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAICreateChatSubscriptionInviteLinkResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postCreateChatSubscriptionInviteLinkSignal(output);
        Q_EMIT postCreateChatSubscriptionInviteLinkSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postCreateChatSubscriptionInviteLinkSignalE(output, error_type, error_str);
        Q_EMIT postCreateChatSubscriptionInviteLinkSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postCreateChatSubscriptionInviteLinkSignalError(output, error_type, error_str);
        Q_EMIT postCreateChatSubscriptionInviteLinkSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postCreateForumTopic(const OAIBotCommandScopeChat_chat_id &chat_id, const QString &name, const ::tele_rest::OptionalParam<qint32> &icon_color, const ::tele_rest::OptionalParam<QString> &icon_custom_emoji_id) {
    QString fullPath = QString(_serverConfigs["postCreateForumTopic"][_serverIndices.value("postCreateForumTopic")].URL()+"/createForumTopic");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("name", ::tele_rest::toStringValue(name));
    }
    if (icon_color.hasValue())
    {
        input.add_var("icon_color", ::tele_rest::toStringValue(icon_color.value()));
    }
    if (icon_custom_emoji_id.hasValue())
    {
        input.add_var("icon_custom_emoji_id", ::tele_rest::toStringValue(icon_custom_emoji_id.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postCreateForumTopicCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postCreateForumTopicCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAICreateForumTopicResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postCreateForumTopicSignal(output);
        Q_EMIT postCreateForumTopicSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postCreateForumTopicSignalE(output, error_type, error_str);
        Q_EMIT postCreateForumTopicSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postCreateForumTopicSignalError(output, error_type, error_str);
        Q_EMIT postCreateForumTopicSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postCreateInvoiceLink(const QString &title, const QString &description, const QString &payload, const QString &currency, const QList<OAILabeledPrice> &prices, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<QString> &provider_token, const ::tele_rest::OptionalParam<qint32> &subscription_period, const ::tele_rest::OptionalParam<qint32> &max_tip_amount, const ::tele_rest::OptionalParam<QList<qint32>> &suggested_tip_amounts, const ::tele_rest::OptionalParam<QString> &provider_data, const ::tele_rest::OptionalParam<QString> &photo_url, const ::tele_rest::OptionalParam<qint32> &photo_size, const ::tele_rest::OptionalParam<qint32> &photo_width, const ::tele_rest::OptionalParam<qint32> &photo_height, const ::tele_rest::OptionalParam<bool> &need_name, const ::tele_rest::OptionalParam<bool> &need_phone_number, const ::tele_rest::OptionalParam<bool> &need_email, const ::tele_rest::OptionalParam<bool> &need_shipping_address, const ::tele_rest::OptionalParam<bool> &send_phone_number_to_provider, const ::tele_rest::OptionalParam<bool> &send_email_to_provider, const ::tele_rest::OptionalParam<bool> &is_flexible) {
    QString fullPath = QString(_serverConfigs["postCreateInvoiceLink"][_serverIndices.value("postCreateInvoiceLink")].URL()+"/createInvoiceLink");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    
    {
        input.add_var("title", ::tele_rest::toStringValue(title));
    }
    
    {
        input.add_var("description", ::tele_rest::toStringValue(description));
    }
    
    {
        input.add_var("payload", ::tele_rest::toStringValue(payload));
    }
    if (provider_token.hasValue())
    {
        input.add_var("provider_token", ::tele_rest::toStringValue(provider_token.value()));
    }
    
    {
        input.add_var("currency", ::tele_rest::toStringValue(currency));
    }
    
    {
        input.add_var("prices", ::tele_rest::toStringValue(prices));
    }
    if (subscription_period.hasValue())
    {
        input.add_var("subscription_period", ::tele_rest::toStringValue(subscription_period.value()));
    }
    if (max_tip_amount.hasValue())
    {
        input.add_var("max_tip_amount", ::tele_rest::toStringValue(max_tip_amount.value()));
    }
    if (suggested_tip_amounts.hasValue())
    {
        input.add_var("suggested_tip_amounts", ::tele_rest::toStringValue(suggested_tip_amounts.value()));
    }
    if (provider_data.hasValue())
    {
        input.add_var("provider_data", ::tele_rest::toStringValue(provider_data.value()));
    }
    if (photo_url.hasValue())
    {
        input.add_var("photo_url", ::tele_rest::toStringValue(photo_url.value()));
    }
    if (photo_size.hasValue())
    {
        input.add_var("photo_size", ::tele_rest::toStringValue(photo_size.value()));
    }
    if (photo_width.hasValue())
    {
        input.add_var("photo_width", ::tele_rest::toStringValue(photo_width.value()));
    }
    if (photo_height.hasValue())
    {
        input.add_var("photo_height", ::tele_rest::toStringValue(photo_height.value()));
    }
    if (need_name.hasValue())
    {
        input.add_var("need_name", ::tele_rest::toStringValue(need_name.value()));
    }
    if (need_phone_number.hasValue())
    {
        input.add_var("need_phone_number", ::tele_rest::toStringValue(need_phone_number.value()));
    }
    if (need_email.hasValue())
    {
        input.add_var("need_email", ::tele_rest::toStringValue(need_email.value()));
    }
    if (need_shipping_address.hasValue())
    {
        input.add_var("need_shipping_address", ::tele_rest::toStringValue(need_shipping_address.value()));
    }
    if (send_phone_number_to_provider.hasValue())
    {
        input.add_var("send_phone_number_to_provider", ::tele_rest::toStringValue(send_phone_number_to_provider.value()));
    }
    if (send_email_to_provider.hasValue())
    {
        input.add_var("send_email_to_provider", ::tele_rest::toStringValue(send_email_to_provider.value()));
    }
    if (is_flexible.hasValue())
    {
        input.add_var("is_flexible", ::tele_rest::toStringValue(is_flexible.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postCreateInvoiceLinkCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postCreateInvoiceLinkCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAICreateInvoiceLinkResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postCreateInvoiceLinkSignal(output);
        Q_EMIT postCreateInvoiceLinkSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postCreateInvoiceLinkSignalE(output, error_type, error_str);
        Q_EMIT postCreateInvoiceLinkSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postCreateInvoiceLinkSignalError(output, error_type, error_str);
        Q_EMIT postCreateInvoiceLinkSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postCreateNewStickerSet(const qint32 &user_id, const QString &name, const QString &title, const QList<OAIInputSticker> &stickers, const ::tele_rest::OptionalParam<QString> &sticker_type, const ::tele_rest::OptionalParam<bool> &needs_repainting) {
    QString fullPath = QString(_serverConfigs["postCreateNewStickerSet"][_serverIndices.value("postCreateNewStickerSet")].URL()+"/createNewStickerSet");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id));
    }
    
    {
        input.add_var("name", ::tele_rest::toStringValue(name));
    }
    
    {
        input.add_var("title", ::tele_rest::toStringValue(title));
    }
    
    {
        input.add_var("stickers", ::tele_rest::toStringValue(stickers));
    }
    if (sticker_type.hasValue())
    {
        input.add_var("sticker_type", ::tele_rest::toStringValue(sticker_type.value()));
    }
    if (needs_repainting.hasValue())
    {
        input.add_var("needs_repainting", ::tele_rest::toStringValue(needs_repainting.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postCreateNewStickerSetCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postCreateNewStickerSetCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAICreateNewStickerSetResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postCreateNewStickerSetSignal(output);
        Q_EMIT postCreateNewStickerSetSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postCreateNewStickerSetSignalE(output, error_type, error_str);
        Q_EMIT postCreateNewStickerSetSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postCreateNewStickerSetSignalError(output, error_type, error_str);
        Q_EMIT postCreateNewStickerSetSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postDeclineChatJoinRequest(const OAISendMessageRequest_chat_id &chat_id, const qint32 &user_id) {
    QString fullPath = QString(_serverConfigs["postDeclineChatJoinRequest"][_serverIndices.value("postDeclineChatJoinRequest")].URL()+"/declineChatJoinRequest");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postDeclineChatJoinRequestCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postDeclineChatJoinRequestCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIDeclineChatJoinRequestResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postDeclineChatJoinRequestSignal(output);
        Q_EMIT postDeclineChatJoinRequestSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postDeclineChatJoinRequestSignalE(output, error_type, error_str);
        Q_EMIT postDeclineChatJoinRequestSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postDeclineChatJoinRequestSignalError(output, error_type, error_str);
        Q_EMIT postDeclineChatJoinRequestSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postDeleteBusinessMessages(const QString &business_connection_id, const QList<qint32> &message_ids) {
    QString fullPath = QString(_serverConfigs["postDeleteBusinessMessages"][_serverIndices.value("postDeleteBusinessMessages")].URL()+"/deleteBusinessMessages");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id));
    }
    
    {
        input.add_var("message_ids", ::tele_rest::toStringValue(message_ids));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postDeleteBusinessMessagesCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postDeleteBusinessMessagesCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIDeleteBusinessMessagesResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postDeleteBusinessMessagesSignal(output);
        Q_EMIT postDeleteBusinessMessagesSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postDeleteBusinessMessagesSignalE(output, error_type, error_str);
        Q_EMIT postDeleteBusinessMessagesSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postDeleteBusinessMessagesSignalError(output, error_type, error_str);
        Q_EMIT postDeleteBusinessMessagesSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postDeleteChatPhoto(const OAISendMessageRequest_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["postDeleteChatPhoto"][_serverIndices.value("postDeleteChatPhoto")].URL()+"/deleteChatPhoto");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postDeleteChatPhotoCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postDeleteChatPhotoCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIDeleteChatPhotoResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postDeleteChatPhotoSignal(output);
        Q_EMIT postDeleteChatPhotoSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postDeleteChatPhotoSignalE(output, error_type, error_str);
        Q_EMIT postDeleteChatPhotoSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postDeleteChatPhotoSignalError(output, error_type, error_str);
        Q_EMIT postDeleteChatPhotoSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postDeleteChatStickerSet(const OAIBotCommandScopeChat_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["postDeleteChatStickerSet"][_serverIndices.value("postDeleteChatStickerSet")].URL()+"/deleteChatStickerSet");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postDeleteChatStickerSetCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postDeleteChatStickerSetCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIDeleteChatStickerSetResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postDeleteChatStickerSetSignal(output);
        Q_EMIT postDeleteChatStickerSetSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postDeleteChatStickerSetSignalE(output, error_type, error_str);
        Q_EMIT postDeleteChatStickerSetSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postDeleteChatStickerSetSignalError(output, error_type, error_str);
        Q_EMIT postDeleteChatStickerSetSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postDeleteForumTopic(const OAIBotCommandScopeChat_chat_id &chat_id, const qint32 &message_thread_id) {
    QString fullPath = QString(_serverConfigs["postDeleteForumTopic"][_serverIndices.value("postDeleteForumTopic")].URL()+"/deleteForumTopic");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postDeleteForumTopicCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postDeleteForumTopicCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIDeleteForumTopicResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postDeleteForumTopicSignal(output);
        Q_EMIT postDeleteForumTopicSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postDeleteForumTopicSignalE(output, error_type, error_str);
        Q_EMIT postDeleteForumTopicSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postDeleteForumTopicSignalError(output, error_type, error_str);
        Q_EMIT postDeleteForumTopicSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postDeleteMessage(const OAISendMessageRequest_chat_id &chat_id, const qint32 &message_id) {
    QString fullPath = QString(_serverConfigs["postDeleteMessage"][_serverIndices.value("postDeleteMessage")].URL()+"/deleteMessage");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("message_id", ::tele_rest::toStringValue(message_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postDeleteMessageCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postDeleteMessageCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIDeleteMessageResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postDeleteMessageSignal(output);
        Q_EMIT postDeleteMessageSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postDeleteMessageSignalE(output, error_type, error_str);
        Q_EMIT postDeleteMessageSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postDeleteMessageSignalError(output, error_type, error_str);
        Q_EMIT postDeleteMessageSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postDeleteMessages(const OAISendMessageRequest_chat_id &chat_id, const QList<qint32> &message_ids) {
    QString fullPath = QString(_serverConfigs["postDeleteMessages"][_serverIndices.value("postDeleteMessages")].URL()+"/deleteMessages");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("message_ids", ::tele_rest::toStringValue(message_ids));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postDeleteMessagesCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postDeleteMessagesCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIDeleteMessagesResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postDeleteMessagesSignal(output);
        Q_EMIT postDeleteMessagesSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postDeleteMessagesSignalE(output, error_type, error_str);
        Q_EMIT postDeleteMessagesSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postDeleteMessagesSignalError(output, error_type, error_str);
        Q_EMIT postDeleteMessagesSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postDeleteMyCommands(const ::tele_rest::OptionalParam<OAIBotCommandScope> &scope, const ::tele_rest::OptionalParam<QString> &language_code) {
    QString fullPath = QString(_serverConfigs["postDeleteMyCommands"][_serverIndices.value("postDeleteMyCommands")].URL()+"/deleteMyCommands");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (scope.hasValue())
    {
        input.add_var("scope", ::tele_rest::toStringValue(scope.value()));
    }
    if (language_code.hasValue())
    {
        input.add_var("language_code", ::tele_rest::toStringValue(language_code.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postDeleteMyCommandsCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postDeleteMyCommandsCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIDeleteMyCommandsResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postDeleteMyCommandsSignal(output);
        Q_EMIT postDeleteMyCommandsSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postDeleteMyCommandsSignalE(output, error_type, error_str);
        Q_EMIT postDeleteMyCommandsSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postDeleteMyCommandsSignalError(output, error_type, error_str);
        Q_EMIT postDeleteMyCommandsSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postDeleteStickerFromSet(const QString &sticker) {
    QString fullPath = QString(_serverConfigs["postDeleteStickerFromSet"][_serverIndices.value("postDeleteStickerFromSet")].URL()+"/deleteStickerFromSet");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("sticker", ::tele_rest::toStringValue(sticker));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postDeleteStickerFromSetCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postDeleteStickerFromSetCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIDeleteStickerFromSetResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postDeleteStickerFromSetSignal(output);
        Q_EMIT postDeleteStickerFromSetSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postDeleteStickerFromSetSignalE(output, error_type, error_str);
        Q_EMIT postDeleteStickerFromSetSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postDeleteStickerFromSetSignalError(output, error_type, error_str);
        Q_EMIT postDeleteStickerFromSetSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postDeleteStickerSet(const QString &name) {
    QString fullPath = QString(_serverConfigs["postDeleteStickerSet"][_serverIndices.value("postDeleteStickerSet")].URL()+"/deleteStickerSet");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("name", ::tele_rest::toStringValue(name));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postDeleteStickerSetCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postDeleteStickerSetCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIDeleteStickerSetResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postDeleteStickerSetSignal(output);
        Q_EMIT postDeleteStickerSetSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postDeleteStickerSetSignalE(output, error_type, error_str);
        Q_EMIT postDeleteStickerSetSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postDeleteStickerSetSignalError(output, error_type, error_str);
        Q_EMIT postDeleteStickerSetSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postDeleteStory(const QString &business_connection_id, const qint32 &story_id) {
    QString fullPath = QString(_serverConfigs["postDeleteStory"][_serverIndices.value("postDeleteStory")].URL()+"/deleteStory");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id));
    }
    
    {
        input.add_var("story_id", ::tele_rest::toStringValue(story_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postDeleteStoryCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postDeleteStoryCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIDeleteStoryResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postDeleteStorySignal(output);
        Q_EMIT postDeleteStorySignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postDeleteStorySignalE(output, error_type, error_str);
        Q_EMIT postDeleteStorySignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postDeleteStorySignalError(output, error_type, error_str);
        Q_EMIT postDeleteStorySignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postDeleteWebhook(const ::tele_rest::OptionalParam<bool> &drop_pending_updates) {
    QString fullPath = QString(_serverConfigs["postDeleteWebhook"][_serverIndices.value("postDeleteWebhook")].URL()+"/deleteWebhook");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (drop_pending_updates.hasValue())
    {
        input.add_var("drop_pending_updates", ::tele_rest::toStringValue(drop_pending_updates.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postDeleteWebhookCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postDeleteWebhookCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIDeleteWebhookResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postDeleteWebhookSignal(output);
        Q_EMIT postDeleteWebhookSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postDeleteWebhookSignalE(output, error_type, error_str);
        Q_EMIT postDeleteWebhookSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postDeleteWebhookSignalError(output, error_type, error_str);
        Q_EMIT postDeleteWebhookSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postEditChatInviteLink(const OAISendMessageRequest_chat_id &chat_id, const QString &invite_link, const ::tele_rest::OptionalParam<QString> &name, const ::tele_rest::OptionalParam<qint32> &expire_date, const ::tele_rest::OptionalParam<qint32> &member_limit, const ::tele_rest::OptionalParam<bool> &creates_join_request) {
    QString fullPath = QString(_serverConfigs["postEditChatInviteLink"][_serverIndices.value("postEditChatInviteLink")].URL()+"/editChatInviteLink");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("invite_link", ::tele_rest::toStringValue(invite_link));
    }
    if (name.hasValue())
    {
        input.add_var("name", ::tele_rest::toStringValue(name.value()));
    }
    if (expire_date.hasValue())
    {
        input.add_var("expire_date", ::tele_rest::toStringValue(expire_date.value()));
    }
    if (member_limit.hasValue())
    {
        input.add_var("member_limit", ::tele_rest::toStringValue(member_limit.value()));
    }
    if (creates_join_request.hasValue())
    {
        input.add_var("creates_join_request", ::tele_rest::toStringValue(creates_join_request.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postEditChatInviteLinkCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postEditChatInviteLinkCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEditChatInviteLinkResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postEditChatInviteLinkSignal(output);
        Q_EMIT postEditChatInviteLinkSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postEditChatInviteLinkSignalE(output, error_type, error_str);
        Q_EMIT postEditChatInviteLinkSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postEditChatInviteLinkSignalError(output, error_type, error_str);
        Q_EMIT postEditChatInviteLinkSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postEditChatSubscriptionInviteLink(const OAISendMessageRequest_chat_id &chat_id, const QString &invite_link, const ::tele_rest::OptionalParam<QString> &name) {
    QString fullPath = QString(_serverConfigs["postEditChatSubscriptionInviteLink"][_serverIndices.value("postEditChatSubscriptionInviteLink")].URL()+"/editChatSubscriptionInviteLink");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("invite_link", ::tele_rest::toStringValue(invite_link));
    }
    if (name.hasValue())
    {
        input.add_var("name", ::tele_rest::toStringValue(name.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postEditChatSubscriptionInviteLinkCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postEditChatSubscriptionInviteLinkCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEditChatSubscriptionInviteLinkResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postEditChatSubscriptionInviteLinkSignal(output);
        Q_EMIT postEditChatSubscriptionInviteLinkSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postEditChatSubscriptionInviteLinkSignalE(output, error_type, error_str);
        Q_EMIT postEditChatSubscriptionInviteLinkSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postEditChatSubscriptionInviteLinkSignalError(output, error_type, error_str);
        Q_EMIT postEditChatSubscriptionInviteLinkSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postEditForumTopic(const OAIBotCommandScopeChat_chat_id &chat_id, const qint32 &message_thread_id, const ::tele_rest::OptionalParam<QString> &name, const ::tele_rest::OptionalParam<QString> &icon_custom_emoji_id) {
    QString fullPath = QString(_serverConfigs["postEditForumTopic"][_serverIndices.value("postEditForumTopic")].URL()+"/editForumTopic");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id));
    }
    if (name.hasValue())
    {
        input.add_var("name", ::tele_rest::toStringValue(name.value()));
    }
    if (icon_custom_emoji_id.hasValue())
    {
        input.add_var("icon_custom_emoji_id", ::tele_rest::toStringValue(icon_custom_emoji_id.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postEditForumTopicCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postEditForumTopicCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEditForumTopicResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postEditForumTopicSignal(output);
        Q_EMIT postEditForumTopicSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postEditForumTopicSignalE(output, error_type, error_str);
        Q_EMIT postEditForumTopicSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postEditForumTopicSignalError(output, error_type, error_str);
        Q_EMIT postEditForumTopicSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postEditGeneralForumTopic(const OAIBotCommandScopeChat_chat_id &chat_id, const QString &name) {
    QString fullPath = QString(_serverConfigs["postEditGeneralForumTopic"][_serverIndices.value("postEditGeneralForumTopic")].URL()+"/editGeneralForumTopic");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("name", ::tele_rest::toStringValue(name));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postEditGeneralForumTopicCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postEditGeneralForumTopicCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEditGeneralForumTopicResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postEditGeneralForumTopicSignal(output);
        Q_EMIT postEditGeneralForumTopicSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postEditGeneralForumTopicSignalE(output, error_type, error_str);
        Q_EMIT postEditGeneralForumTopicSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postEditGeneralForumTopicSignalError(output, error_type, error_str);
        Q_EMIT postEditGeneralForumTopicSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postEditMessageCaption(const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<OAIEditMessageTextRequest_chat_id> &chat_id, const ::tele_rest::OptionalParam<qint32> &message_id, const ::tele_rest::OptionalParam<QString> &inline_message_id, const ::tele_rest::OptionalParam<QString> &caption, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities, const ::tele_rest::OptionalParam<bool> &show_caption_above_media, const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["postEditMessageCaption"][_serverIndices.value("postEditMessageCaption")].URL()+"/editMessageCaption");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    if (chat_id.hasValue())
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id.value()));
    }
    if (message_id.hasValue())
    {
        input.add_var("message_id", ::tele_rest::toStringValue(message_id.value()));
    }
    if (inline_message_id.hasValue())
    {
        input.add_var("inline_message_id", ::tele_rest::toStringValue(inline_message_id.value()));
    }
    if (caption.hasValue())
    {
        input.add_var("caption", ::tele_rest::toStringValue(caption.value()));
    }
    if (parse_mode.hasValue())
    {
        input.add_var("parse_mode", ::tele_rest::toStringValue(parse_mode.value()));
    }
    if (caption_entities.hasValue())
    {
        input.add_var("caption_entities", ::tele_rest::toStringValue(caption_entities.value()));
    }
    if (show_caption_above_media.hasValue())
    {
        input.add_var("show_caption_above_media", ::tele_rest::toStringValue(show_caption_above_media.value()));
    }
    if (reply_markup.hasValue())
    {
        input.add_var("reply_markup", ::tele_rest::toStringValue(reply_markup.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postEditMessageCaptionCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postEditMessageCaptionCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEditMessageCaptionResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postEditMessageCaptionSignal(output);
        Q_EMIT postEditMessageCaptionSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postEditMessageCaptionSignalE(output, error_type, error_str);
        Q_EMIT postEditMessageCaptionSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postEditMessageCaptionSignalError(output, error_type, error_str);
        Q_EMIT postEditMessageCaptionSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postEditMessageLiveLocation(const double &latitude, const double &longitude, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<OAIEditMessageTextRequest_chat_id> &chat_id, const ::tele_rest::OptionalParam<qint32> &message_id, const ::tele_rest::OptionalParam<QString> &inline_message_id, const ::tele_rest::OptionalParam<qint32> &live_period, const ::tele_rest::OptionalParam<double> &horizontal_accuracy, const ::tele_rest::OptionalParam<qint32> &heading, const ::tele_rest::OptionalParam<qint32> &proximity_alert_radius, const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["postEditMessageLiveLocation"][_serverIndices.value("postEditMessageLiveLocation")].URL()+"/editMessageLiveLocation");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    if (chat_id.hasValue())
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id.value()));
    }
    if (message_id.hasValue())
    {
        input.add_var("message_id", ::tele_rest::toStringValue(message_id.value()));
    }
    if (inline_message_id.hasValue())
    {
        input.add_var("inline_message_id", ::tele_rest::toStringValue(inline_message_id.value()));
    }
    
    {
        input.add_var("latitude", ::tele_rest::toStringValue(latitude));
    }
    
    {
        input.add_var("longitude", ::tele_rest::toStringValue(longitude));
    }
    if (live_period.hasValue())
    {
        input.add_var("live_period", ::tele_rest::toStringValue(live_period.value()));
    }
    if (horizontal_accuracy.hasValue())
    {
        input.add_var("horizontal_accuracy", ::tele_rest::toStringValue(horizontal_accuracy.value()));
    }
    if (heading.hasValue())
    {
        input.add_var("heading", ::tele_rest::toStringValue(heading.value()));
    }
    if (proximity_alert_radius.hasValue())
    {
        input.add_var("proximity_alert_radius", ::tele_rest::toStringValue(proximity_alert_radius.value()));
    }
    if (reply_markup.hasValue())
    {
        input.add_var("reply_markup", ::tele_rest::toStringValue(reply_markup.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postEditMessageLiveLocationCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postEditMessageLiveLocationCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEditMessageLiveLocationResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postEditMessageLiveLocationSignal(output);
        Q_EMIT postEditMessageLiveLocationSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postEditMessageLiveLocationSignalE(output, error_type, error_str);
        Q_EMIT postEditMessageLiveLocationSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postEditMessageLiveLocationSignalError(output, error_type, error_str);
        Q_EMIT postEditMessageLiveLocationSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postEditMessageMedia(const OAIInputMedia &media, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<OAIEditMessageTextRequest_chat_id> &chat_id, const ::tele_rest::OptionalParam<qint32> &message_id, const ::tele_rest::OptionalParam<QString> &inline_message_id, const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["postEditMessageMedia"][_serverIndices.value("postEditMessageMedia")].URL()+"/editMessageMedia");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    if (chat_id.hasValue())
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id.value()));
    }
    if (message_id.hasValue())
    {
        input.add_var("message_id", ::tele_rest::toStringValue(message_id.value()));
    }
    if (inline_message_id.hasValue())
    {
        input.add_var("inline_message_id", ::tele_rest::toStringValue(inline_message_id.value()));
    }
    
    {
        input.add_var("media", ::tele_rest::toStringValue(media));
    }
    if (reply_markup.hasValue())
    {
        input.add_var("reply_markup", ::tele_rest::toStringValue(reply_markup.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postEditMessageMediaCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postEditMessageMediaCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEditMessageMediaResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postEditMessageMediaSignal(output);
        Q_EMIT postEditMessageMediaSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postEditMessageMediaSignalE(output, error_type, error_str);
        Q_EMIT postEditMessageMediaSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postEditMessageMediaSignalError(output, error_type, error_str);
        Q_EMIT postEditMessageMediaSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postEditMessageReplyMarkup(const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<OAIEditMessageTextRequest_chat_id> &chat_id, const ::tele_rest::OptionalParam<qint32> &message_id, const ::tele_rest::OptionalParam<QString> &inline_message_id, const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["postEditMessageReplyMarkup"][_serverIndices.value("postEditMessageReplyMarkup")].URL()+"/editMessageReplyMarkup");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    if (chat_id.hasValue())
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id.value()));
    }
    if (message_id.hasValue())
    {
        input.add_var("message_id", ::tele_rest::toStringValue(message_id.value()));
    }
    if (inline_message_id.hasValue())
    {
        input.add_var("inline_message_id", ::tele_rest::toStringValue(inline_message_id.value()));
    }
    if (reply_markup.hasValue())
    {
        input.add_var("reply_markup", ::tele_rest::toStringValue(reply_markup.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postEditMessageReplyMarkupCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postEditMessageReplyMarkupCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEditMessageReplyMarkupResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postEditMessageReplyMarkupSignal(output);
        Q_EMIT postEditMessageReplyMarkupSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postEditMessageReplyMarkupSignalE(output, error_type, error_str);
        Q_EMIT postEditMessageReplyMarkupSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postEditMessageReplyMarkupSignalError(output, error_type, error_str);
        Q_EMIT postEditMessageReplyMarkupSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postEditMessageText(const QString &text, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<OAIEditMessageTextRequest_chat_id> &chat_id, const ::tele_rest::OptionalParam<qint32> &message_id, const ::tele_rest::OptionalParam<QString> &inline_message_id, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &entities, const ::tele_rest::OptionalParam<OAILinkPreviewOptions> &link_preview_options, const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["postEditMessageText"][_serverIndices.value("postEditMessageText")].URL()+"/editMessageText");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    if (chat_id.hasValue())
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id.value()));
    }
    if (message_id.hasValue())
    {
        input.add_var("message_id", ::tele_rest::toStringValue(message_id.value()));
    }
    if (inline_message_id.hasValue())
    {
        input.add_var("inline_message_id", ::tele_rest::toStringValue(inline_message_id.value()));
    }
    
    {
        input.add_var("text", ::tele_rest::toStringValue(text));
    }
    if (parse_mode.hasValue())
    {
        input.add_var("parse_mode", ::tele_rest::toStringValue(parse_mode.value()));
    }
    if (entities.hasValue())
    {
        input.add_var("entities", ::tele_rest::toStringValue(entities.value()));
    }
    if (link_preview_options.hasValue())
    {
        input.add_var("link_preview_options", ::tele_rest::toStringValue(link_preview_options.value()));
    }
    if (reply_markup.hasValue())
    {
        input.add_var("reply_markup", ::tele_rest::toStringValue(reply_markup.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postEditMessageTextCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postEditMessageTextCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEditMessageTextResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postEditMessageTextSignal(output);
        Q_EMIT postEditMessageTextSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postEditMessageTextSignalE(output, error_type, error_str);
        Q_EMIT postEditMessageTextSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postEditMessageTextSignalError(output, error_type, error_str);
        Q_EMIT postEditMessageTextSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postEditStory(const QString &business_connection_id, const qint32 &story_id, const OAIInputStoryContent &content, const ::tele_rest::OptionalParam<QString> &caption, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities, const ::tele_rest::OptionalParam<QList<OAIStoryArea>> &areas) {
    QString fullPath = QString(_serverConfigs["postEditStory"][_serverIndices.value("postEditStory")].URL()+"/editStory");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id));
    }
    
    {
        input.add_var("story_id", ::tele_rest::toStringValue(story_id));
    }
    
    {
        input.add_var("content", ::tele_rest::toStringValue(content));
    }
    if (caption.hasValue())
    {
        input.add_var("caption", ::tele_rest::toStringValue(caption.value()));
    }
    if (parse_mode.hasValue())
    {
        input.add_var("parse_mode", ::tele_rest::toStringValue(parse_mode.value()));
    }
    if (caption_entities.hasValue())
    {
        input.add_var("caption_entities", ::tele_rest::toStringValue(caption_entities.value()));
    }
    if (areas.hasValue())
    {
        input.add_var("areas", ::tele_rest::toStringValue(areas.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postEditStoryCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postEditStoryCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEditStoryResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postEditStorySignal(output);
        Q_EMIT postEditStorySignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postEditStorySignalE(output, error_type, error_str);
        Q_EMIT postEditStorySignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postEditStorySignalError(output, error_type, error_str);
        Q_EMIT postEditStorySignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postEditUserStarSubscription(const qint32 &user_id, const QString &telegram_payment_charge_id, const bool &is_canceled) {
    QString fullPath = QString(_serverConfigs["postEditUserStarSubscription"][_serverIndices.value("postEditUserStarSubscription")].URL()+"/editUserStarSubscription");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id));
    }
    
    {
        input.add_var("telegram_payment_charge_id", ::tele_rest::toStringValue(telegram_payment_charge_id));
    }
    
    {
        input.add_var("is_canceled", ::tele_rest::toStringValue(is_canceled));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postEditUserStarSubscriptionCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postEditUserStarSubscriptionCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEditUserStarSubscriptionResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postEditUserStarSubscriptionSignal(output);
        Q_EMIT postEditUserStarSubscriptionSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postEditUserStarSubscriptionSignalE(output, error_type, error_str);
        Q_EMIT postEditUserStarSubscriptionSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postEditUserStarSubscriptionSignalError(output, error_type, error_str);
        Q_EMIT postEditUserStarSubscriptionSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postExportChatInviteLink(const OAISendMessageRequest_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["postExportChatInviteLink"][_serverIndices.value("postExportChatInviteLink")].URL()+"/exportChatInviteLink");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postExportChatInviteLinkCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postExportChatInviteLinkCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIExportChatInviteLinkResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postExportChatInviteLinkSignal(output);
        Q_EMIT postExportChatInviteLinkSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postExportChatInviteLinkSignalE(output, error_type, error_str);
        Q_EMIT postExportChatInviteLinkSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postExportChatInviteLinkSignalError(output, error_type, error_str);
        Q_EMIT postExportChatInviteLinkSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postForwardMessage(const OAISendMessageRequest_chat_id &chat_id, const OAIForwardMessageRequest_from_chat_id &from_chat_id, const qint32 &message_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<qint32> &video_start_timestamp, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content) {
    QString fullPath = QString(_serverConfigs["postForwardMessage"][_serverIndices.value("postForwardMessage")].URL()+"/forwardMessage");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (message_thread_id.hasValue())
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id.value()));
    }
    
    {
        input.add_var("from_chat_id", ::tele_rest::toStringValue(from_chat_id));
    }
    if (video_start_timestamp.hasValue())
    {
        input.add_var("video_start_timestamp", ::tele_rest::toStringValue(video_start_timestamp.value()));
    }
    if (disable_notification.hasValue())
    {
        input.add_var("disable_notification", ::tele_rest::toStringValue(disable_notification.value()));
    }
    if (protect_content.hasValue())
    {
        input.add_var("protect_content", ::tele_rest::toStringValue(protect_content.value()));
    }
    
    {
        input.add_var("message_id", ::tele_rest::toStringValue(message_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postForwardMessageCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postForwardMessageCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIForwardMessageResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postForwardMessageSignal(output);
        Q_EMIT postForwardMessageSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postForwardMessageSignalE(output, error_type, error_str);
        Q_EMIT postForwardMessageSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postForwardMessageSignalError(output, error_type, error_str);
        Q_EMIT postForwardMessageSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postForwardMessages(const OAISendMessageRequest_chat_id &chat_id, const OAIForwardMessagesRequest_from_chat_id &from_chat_id, const QList<qint32> &message_ids, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content) {
    QString fullPath = QString(_serverConfigs["postForwardMessages"][_serverIndices.value("postForwardMessages")].URL()+"/forwardMessages");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (message_thread_id.hasValue())
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id.value()));
    }
    
    {
        input.add_var("from_chat_id", ::tele_rest::toStringValue(from_chat_id));
    }
    
    {
        input.add_var("message_ids", ::tele_rest::toStringValue(message_ids));
    }
    if (disable_notification.hasValue())
    {
        input.add_var("disable_notification", ::tele_rest::toStringValue(disable_notification.value()));
    }
    if (protect_content.hasValue())
    {
        input.add_var("protect_content", ::tele_rest::toStringValue(protect_content.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postForwardMessagesCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postForwardMessagesCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIForwardMessagesResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postForwardMessagesSignal(output);
        Q_EMIT postForwardMessagesSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postForwardMessagesSignalE(output, error_type, error_str);
        Q_EMIT postForwardMessagesSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postForwardMessagesSignalError(output, error_type, error_str);
        Q_EMIT postForwardMessagesSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGetAvailableGifts() {
    QString fullPath = QString(_serverConfigs["postGetAvailableGifts"][_serverIndices.value("postGetAvailableGifts")].URL()+"/getAvailableGifts");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGetAvailableGiftsCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGetAvailableGiftsCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGetAvailableGiftsResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGetAvailableGiftsSignal(output);
        Q_EMIT postGetAvailableGiftsSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGetAvailableGiftsSignalE(output, error_type, error_str);
        Q_EMIT postGetAvailableGiftsSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGetAvailableGiftsSignalError(output, error_type, error_str);
        Q_EMIT postGetAvailableGiftsSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGetBusinessAccountGifts(const QString &business_connection_id, const ::tele_rest::OptionalParam<bool> &exclude_unsaved, const ::tele_rest::OptionalParam<bool> &exclude_saved, const ::tele_rest::OptionalParam<bool> &exclude_unlimited, const ::tele_rest::OptionalParam<bool> &exclude_limited, const ::tele_rest::OptionalParam<bool> &exclude_unique, const ::tele_rest::OptionalParam<bool> &sort_by_price, const ::tele_rest::OptionalParam<QString> &offset, const ::tele_rest::OptionalParam<qint32> &limit) {
    QString fullPath = QString(_serverConfigs["postGetBusinessAccountGifts"][_serverIndices.value("postGetBusinessAccountGifts")].URL()+"/getBusinessAccountGifts");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id));
    }
    if (exclude_unsaved.hasValue())
    {
        input.add_var("exclude_unsaved", ::tele_rest::toStringValue(exclude_unsaved.value()));
    }
    if (exclude_saved.hasValue())
    {
        input.add_var("exclude_saved", ::tele_rest::toStringValue(exclude_saved.value()));
    }
    if (exclude_unlimited.hasValue())
    {
        input.add_var("exclude_unlimited", ::tele_rest::toStringValue(exclude_unlimited.value()));
    }
    if (exclude_limited.hasValue())
    {
        input.add_var("exclude_limited", ::tele_rest::toStringValue(exclude_limited.value()));
    }
    if (exclude_unique.hasValue())
    {
        input.add_var("exclude_unique", ::tele_rest::toStringValue(exclude_unique.value()));
    }
    if (sort_by_price.hasValue())
    {
        input.add_var("sort_by_price", ::tele_rest::toStringValue(sort_by_price.value()));
    }
    if (offset.hasValue())
    {
        input.add_var("offset", ::tele_rest::toStringValue(offset.value()));
    }
    if (limit.hasValue())
    {
        input.add_var("limit", ::tele_rest::toStringValue(limit.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGetBusinessAccountGiftsCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGetBusinessAccountGiftsCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGetBusinessAccountGiftsResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGetBusinessAccountGiftsSignal(output);
        Q_EMIT postGetBusinessAccountGiftsSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGetBusinessAccountGiftsSignalE(output, error_type, error_str);
        Q_EMIT postGetBusinessAccountGiftsSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGetBusinessAccountGiftsSignalError(output, error_type, error_str);
        Q_EMIT postGetBusinessAccountGiftsSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGetBusinessAccountStarBalance(const QString &business_connection_id) {
    QString fullPath = QString(_serverConfigs["postGetBusinessAccountStarBalance"][_serverIndices.value("postGetBusinessAccountStarBalance")].URL()+"/getBusinessAccountStarBalance");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGetBusinessAccountStarBalanceCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGetBusinessAccountStarBalanceCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGetBusinessAccountStarBalanceResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGetBusinessAccountStarBalanceSignal(output);
        Q_EMIT postGetBusinessAccountStarBalanceSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGetBusinessAccountStarBalanceSignalE(output, error_type, error_str);
        Q_EMIT postGetBusinessAccountStarBalanceSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGetBusinessAccountStarBalanceSignalError(output, error_type, error_str);
        Q_EMIT postGetBusinessAccountStarBalanceSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGetBusinessConnection(const QString &business_connection_id) {
    QString fullPath = QString(_serverConfigs["postGetBusinessConnection"][_serverIndices.value("postGetBusinessConnection")].URL()+"/getBusinessConnection");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGetBusinessConnectionCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGetBusinessConnectionCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGetBusinessConnectionResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGetBusinessConnectionSignal(output);
        Q_EMIT postGetBusinessConnectionSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGetBusinessConnectionSignalE(output, error_type, error_str);
        Q_EMIT postGetBusinessConnectionSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGetBusinessConnectionSignalError(output, error_type, error_str);
        Q_EMIT postGetBusinessConnectionSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGetChat(const OAILeaveChatRequest_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["postGetChat"][_serverIndices.value("postGetChat")].URL()+"/getChat");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGetChatCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGetChatCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGetChatResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGetChatSignal(output);
        Q_EMIT postGetChatSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGetChatSignalE(output, error_type, error_str);
        Q_EMIT postGetChatSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGetChatSignalError(output, error_type, error_str);
        Q_EMIT postGetChatSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGetChatAdministrators(const OAILeaveChatRequest_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["postGetChatAdministrators"][_serverIndices.value("postGetChatAdministrators")].URL()+"/getChatAdministrators");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGetChatAdministratorsCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGetChatAdministratorsCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGetChatAdministratorsResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGetChatAdministratorsSignal(output);
        Q_EMIT postGetChatAdministratorsSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGetChatAdministratorsSignalE(output, error_type, error_str);
        Q_EMIT postGetChatAdministratorsSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGetChatAdministratorsSignalError(output, error_type, error_str);
        Q_EMIT postGetChatAdministratorsSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGetChatMember(const OAILeaveChatRequest_chat_id &chat_id, const qint32 &user_id) {
    QString fullPath = QString(_serverConfigs["postGetChatMember"][_serverIndices.value("postGetChatMember")].URL()+"/getChatMember");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGetChatMemberCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGetChatMemberCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGetChatMemberResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGetChatMemberSignal(output);
        Q_EMIT postGetChatMemberSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGetChatMemberSignalE(output, error_type, error_str);
        Q_EMIT postGetChatMemberSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGetChatMemberSignalError(output, error_type, error_str);
        Q_EMIT postGetChatMemberSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGetChatMemberCount(const OAILeaveChatRequest_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["postGetChatMemberCount"][_serverIndices.value("postGetChatMemberCount")].URL()+"/getChatMemberCount");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGetChatMemberCountCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGetChatMemberCountCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGetChatMemberCountResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGetChatMemberCountSignal(output);
        Q_EMIT postGetChatMemberCountSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGetChatMemberCountSignalE(output, error_type, error_str);
        Q_EMIT postGetChatMemberCountSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGetChatMemberCountSignalError(output, error_type, error_str);
        Q_EMIT postGetChatMemberCountSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGetChatMenuButton(const ::tele_rest::OptionalParam<qint32> &chat_id) {
    QString fullPath = QString(_serverConfigs["postGetChatMenuButton"][_serverIndices.value("postGetChatMenuButton")].URL()+"/getChatMenuButton");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (chat_id.hasValue())
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGetChatMenuButtonCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGetChatMenuButtonCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGetChatMenuButtonResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGetChatMenuButtonSignal(output);
        Q_EMIT postGetChatMenuButtonSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGetChatMenuButtonSignalE(output, error_type, error_str);
        Q_EMIT postGetChatMenuButtonSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGetChatMenuButtonSignalError(output, error_type, error_str);
        Q_EMIT postGetChatMenuButtonSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGetCustomEmojiStickers(const QList<QString> &custom_emoji_ids) {
    QString fullPath = QString(_serverConfigs["postGetCustomEmojiStickers"][_serverIndices.value("postGetCustomEmojiStickers")].URL()+"/getCustomEmojiStickers");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("custom_emoji_ids", ::tele_rest::toStringValue(custom_emoji_ids));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGetCustomEmojiStickersCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGetCustomEmojiStickersCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGetCustomEmojiStickersResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGetCustomEmojiStickersSignal(output);
        Q_EMIT postGetCustomEmojiStickersSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGetCustomEmojiStickersSignalE(output, error_type, error_str);
        Q_EMIT postGetCustomEmojiStickersSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGetCustomEmojiStickersSignalError(output, error_type, error_str);
        Q_EMIT postGetCustomEmojiStickersSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGetFile(const QString &file_id) {
    QString fullPath = QString(_serverConfigs["postGetFile"][_serverIndices.value("postGetFile")].URL()+"/getFile");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("file_id", ::tele_rest::toStringValue(file_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGetFileCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGetFileCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGetFileResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGetFileSignal(output);
        Q_EMIT postGetFileSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGetFileSignalE(output, error_type, error_str);
        Q_EMIT postGetFileSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGetFileSignalError(output, error_type, error_str);
        Q_EMIT postGetFileSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGetForumTopicIconStickers() {
    QString fullPath = QString(_serverConfigs["postGetForumTopicIconStickers"][_serverIndices.value("postGetForumTopicIconStickers")].URL()+"/getForumTopicIconStickers");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGetForumTopicIconStickersCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGetForumTopicIconStickersCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGetForumTopicIconStickersResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGetForumTopicIconStickersSignal(output);
        Q_EMIT postGetForumTopicIconStickersSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGetForumTopicIconStickersSignalE(output, error_type, error_str);
        Q_EMIT postGetForumTopicIconStickersSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGetForumTopicIconStickersSignalError(output, error_type, error_str);
        Q_EMIT postGetForumTopicIconStickersSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGetGameHighScores(const qint32 &user_id, const ::tele_rest::OptionalParam<qint32> &chat_id, const ::tele_rest::OptionalParam<qint32> &message_id, const ::tele_rest::OptionalParam<QString> &inline_message_id) {
    QString fullPath = QString(_serverConfigs["postGetGameHighScores"][_serverIndices.value("postGetGameHighScores")].URL()+"/getGameHighScores");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id));
    }
    if (chat_id.hasValue())
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id.value()));
    }
    if (message_id.hasValue())
    {
        input.add_var("message_id", ::tele_rest::toStringValue(message_id.value()));
    }
    if (inline_message_id.hasValue())
    {
        input.add_var("inline_message_id", ::tele_rest::toStringValue(inline_message_id.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGetGameHighScoresCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGetGameHighScoresCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGetGameHighScoresResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGetGameHighScoresSignal(output);
        Q_EMIT postGetGameHighScoresSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGetGameHighScoresSignalE(output, error_type, error_str);
        Q_EMIT postGetGameHighScoresSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGetGameHighScoresSignalError(output, error_type, error_str);
        Q_EMIT postGetGameHighScoresSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGetMe() {
    QString fullPath = QString(_serverConfigs["postGetMe"][_serverIndices.value("postGetMe")].URL()+"/getMe");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGetMeCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGetMeCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGetMeResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGetMeSignal(output);
        Q_EMIT postGetMeSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGetMeSignalE(output, error_type, error_str);
        Q_EMIT postGetMeSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGetMeSignalError(output, error_type, error_str);
        Q_EMIT postGetMeSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGetMyCommands(const ::tele_rest::OptionalParam<OAIBotCommandScope> &scope, const ::tele_rest::OptionalParam<QString> &language_code) {
    QString fullPath = QString(_serverConfigs["postGetMyCommands"][_serverIndices.value("postGetMyCommands")].URL()+"/getMyCommands");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (scope.hasValue())
    {
        input.add_var("scope", ::tele_rest::toStringValue(scope.value()));
    }
    if (language_code.hasValue())
    {
        input.add_var("language_code", ::tele_rest::toStringValue(language_code.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGetMyCommandsCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGetMyCommandsCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGetMyCommandsResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGetMyCommandsSignal(output);
        Q_EMIT postGetMyCommandsSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGetMyCommandsSignalE(output, error_type, error_str);
        Q_EMIT postGetMyCommandsSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGetMyCommandsSignalError(output, error_type, error_str);
        Q_EMIT postGetMyCommandsSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGetMyDefaultAdministratorRights(const ::tele_rest::OptionalParam<bool> &for_channels) {
    QString fullPath = QString(_serverConfigs["postGetMyDefaultAdministratorRights"][_serverIndices.value("postGetMyDefaultAdministratorRights")].URL()+"/getMyDefaultAdministratorRights");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (for_channels.hasValue())
    {
        input.add_var("for_channels", ::tele_rest::toStringValue(for_channels.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGetMyDefaultAdministratorRightsCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGetMyDefaultAdministratorRightsCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGetMyDefaultAdministratorRightsResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGetMyDefaultAdministratorRightsSignal(output);
        Q_EMIT postGetMyDefaultAdministratorRightsSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGetMyDefaultAdministratorRightsSignalE(output, error_type, error_str);
        Q_EMIT postGetMyDefaultAdministratorRightsSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGetMyDefaultAdministratorRightsSignalError(output, error_type, error_str);
        Q_EMIT postGetMyDefaultAdministratorRightsSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGetMyDescription(const ::tele_rest::OptionalParam<QString> &language_code) {
    QString fullPath = QString(_serverConfigs["postGetMyDescription"][_serverIndices.value("postGetMyDescription")].URL()+"/getMyDescription");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (language_code.hasValue())
    {
        input.add_var("language_code", ::tele_rest::toStringValue(language_code.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGetMyDescriptionCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGetMyDescriptionCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGetMyDescriptionResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGetMyDescriptionSignal(output);
        Q_EMIT postGetMyDescriptionSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGetMyDescriptionSignalE(output, error_type, error_str);
        Q_EMIT postGetMyDescriptionSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGetMyDescriptionSignalError(output, error_type, error_str);
        Q_EMIT postGetMyDescriptionSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGetMyName(const ::tele_rest::OptionalParam<QString> &language_code) {
    QString fullPath = QString(_serverConfigs["postGetMyName"][_serverIndices.value("postGetMyName")].URL()+"/getMyName");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (language_code.hasValue())
    {
        input.add_var("language_code", ::tele_rest::toStringValue(language_code.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGetMyNameCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGetMyNameCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGetMyNameResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGetMyNameSignal(output);
        Q_EMIT postGetMyNameSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGetMyNameSignalE(output, error_type, error_str);
        Q_EMIT postGetMyNameSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGetMyNameSignalError(output, error_type, error_str);
        Q_EMIT postGetMyNameSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGetMyShortDescription(const ::tele_rest::OptionalParam<QString> &language_code) {
    QString fullPath = QString(_serverConfigs["postGetMyShortDescription"][_serverIndices.value("postGetMyShortDescription")].URL()+"/getMyShortDescription");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (language_code.hasValue())
    {
        input.add_var("language_code", ::tele_rest::toStringValue(language_code.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGetMyShortDescriptionCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGetMyShortDescriptionCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGetMyShortDescriptionResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGetMyShortDescriptionSignal(output);
        Q_EMIT postGetMyShortDescriptionSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGetMyShortDescriptionSignalE(output, error_type, error_str);
        Q_EMIT postGetMyShortDescriptionSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGetMyShortDescriptionSignalError(output, error_type, error_str);
        Q_EMIT postGetMyShortDescriptionSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGetStarTransactions(const ::tele_rest::OptionalParam<qint32> &offset, const ::tele_rest::OptionalParam<qint32> &limit) {
    QString fullPath = QString(_serverConfigs["postGetStarTransactions"][_serverIndices.value("postGetStarTransactions")].URL()+"/getStarTransactions");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (offset.hasValue())
    {
        input.add_var("offset", ::tele_rest::toStringValue(offset.value()));
    }
    if (limit.hasValue())
    {
        input.add_var("limit", ::tele_rest::toStringValue(limit.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGetStarTransactionsCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGetStarTransactionsCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGetStarTransactionsResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGetStarTransactionsSignal(output);
        Q_EMIT postGetStarTransactionsSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGetStarTransactionsSignalE(output, error_type, error_str);
        Q_EMIT postGetStarTransactionsSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGetStarTransactionsSignalError(output, error_type, error_str);
        Q_EMIT postGetStarTransactionsSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGetStickerSet(const QString &name) {
    QString fullPath = QString(_serverConfigs["postGetStickerSet"][_serverIndices.value("postGetStickerSet")].URL()+"/getStickerSet");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("name", ::tele_rest::toStringValue(name));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGetStickerSetCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGetStickerSetCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGetStickerSetResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGetStickerSetSignal(output);
        Q_EMIT postGetStickerSetSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGetStickerSetSignalE(output, error_type, error_str);
        Q_EMIT postGetStickerSetSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGetStickerSetSignalError(output, error_type, error_str);
        Q_EMIT postGetStickerSetSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGetUpdates(const ::tele_rest::OptionalParam<qint32> &offset, const ::tele_rest::OptionalParam<qint32> &limit, const ::tele_rest::OptionalParam<qint32> &timeout, const ::tele_rest::OptionalParam<QList<QString>> &allowed_updates) {
    QString fullPath = QString(_serverConfigs["postGetUpdates"][_serverIndices.value("postGetUpdates")].URL()+"/getUpdates");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (offset.hasValue())
    {
        input.add_var("offset", ::tele_rest::toStringValue(offset.value()));
    }
    if (limit.hasValue())
    {
        input.add_var("limit", ::tele_rest::toStringValue(limit.value()));
    }
    if (timeout.hasValue())
    {
        input.add_var("timeout", ::tele_rest::toStringValue(timeout.value()));
    }
    if (allowed_updates.hasValue())
    {
        input.add_var("allowed_updates", ::tele_rest::toStringValue(allowed_updates.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGetUpdatesCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGetUpdatesCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGetUpdatesResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGetUpdatesSignal(output);
        Q_EMIT postGetUpdatesSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGetUpdatesSignalE(output, error_type, error_str);
        Q_EMIT postGetUpdatesSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGetUpdatesSignalError(output, error_type, error_str);
        Q_EMIT postGetUpdatesSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGetUserChatBoosts(const OAIGetUserChatBoostsRequest_chat_id &chat_id, const qint32 &user_id) {
    QString fullPath = QString(_serverConfigs["postGetUserChatBoosts"][_serverIndices.value("postGetUserChatBoosts")].URL()+"/getUserChatBoosts");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGetUserChatBoostsCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGetUserChatBoostsCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGetUserChatBoostsResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGetUserChatBoostsSignal(output);
        Q_EMIT postGetUserChatBoostsSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGetUserChatBoostsSignalE(output, error_type, error_str);
        Q_EMIT postGetUserChatBoostsSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGetUserChatBoostsSignalError(output, error_type, error_str);
        Q_EMIT postGetUserChatBoostsSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGetUserProfilePhotos(const qint32 &user_id, const ::tele_rest::OptionalParam<qint32> &offset, const ::tele_rest::OptionalParam<qint32> &limit) {
    QString fullPath = QString(_serverConfigs["postGetUserProfilePhotos"][_serverIndices.value("postGetUserProfilePhotos")].URL()+"/getUserProfilePhotos");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id));
    }
    if (offset.hasValue())
    {
        input.add_var("offset", ::tele_rest::toStringValue(offset.value()));
    }
    if (limit.hasValue())
    {
        input.add_var("limit", ::tele_rest::toStringValue(limit.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGetUserProfilePhotosCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGetUserProfilePhotosCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGetUserProfilePhotosResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGetUserProfilePhotosSignal(output);
        Q_EMIT postGetUserProfilePhotosSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGetUserProfilePhotosSignalE(output, error_type, error_str);
        Q_EMIT postGetUserProfilePhotosSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGetUserProfilePhotosSignalError(output, error_type, error_str);
        Q_EMIT postGetUserProfilePhotosSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGetWebhookInfo() {
    QString fullPath = QString(_serverConfigs["postGetWebhookInfo"][_serverIndices.value("postGetWebhookInfo")].URL()+"/getWebhookInfo");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGetWebhookInfoCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGetWebhookInfoCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGetWebhookInfoResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGetWebhookInfoSignal(output);
        Q_EMIT postGetWebhookInfoSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGetWebhookInfoSignalE(output, error_type, error_str);
        Q_EMIT postGetWebhookInfoSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGetWebhookInfoSignalError(output, error_type, error_str);
        Q_EMIT postGetWebhookInfoSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postGiftPremiumSubscription(const qint32 &user_id, const qint32 &month_count, const qint32 &star_count, const ::tele_rest::OptionalParam<QString> &text, const ::tele_rest::OptionalParam<QString> &text_parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &text_entities) {
    QString fullPath = QString(_serverConfigs["postGiftPremiumSubscription"][_serverIndices.value("postGiftPremiumSubscription")].URL()+"/giftPremiumSubscription");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id));
    }
    
    {
        input.add_var("month_count", ::tele_rest::toStringValue(month_count));
    }
    
    {
        input.add_var("star_count", ::tele_rest::toStringValue(star_count));
    }
    if (text.hasValue())
    {
        input.add_var("text", ::tele_rest::toStringValue(text.value()));
    }
    if (text_parse_mode.hasValue())
    {
        input.add_var("text_parse_mode", ::tele_rest::toStringValue(text_parse_mode.value()));
    }
    if (text_entities.hasValue())
    {
        input.add_var("text_entities", ::tele_rest::toStringValue(text_entities.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postGiftPremiumSubscriptionCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postGiftPremiumSubscriptionCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIGiftPremiumSubscriptionResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postGiftPremiumSubscriptionSignal(output);
        Q_EMIT postGiftPremiumSubscriptionSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postGiftPremiumSubscriptionSignalE(output, error_type, error_str);
        Q_EMIT postGiftPremiumSubscriptionSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postGiftPremiumSubscriptionSignalError(output, error_type, error_str);
        Q_EMIT postGiftPremiumSubscriptionSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postHideGeneralForumTopic(const OAIBotCommandScopeChat_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["postHideGeneralForumTopic"][_serverIndices.value("postHideGeneralForumTopic")].URL()+"/hideGeneralForumTopic");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postHideGeneralForumTopicCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postHideGeneralForumTopicCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIHideGeneralForumTopicResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postHideGeneralForumTopicSignal(output);
        Q_EMIT postHideGeneralForumTopicSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postHideGeneralForumTopicSignalE(output, error_type, error_str);
        Q_EMIT postHideGeneralForumTopicSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postHideGeneralForumTopicSignalError(output, error_type, error_str);
        Q_EMIT postHideGeneralForumTopicSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postLeaveChat(const OAILeaveChatRequest_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["postLeaveChat"][_serverIndices.value("postLeaveChat")].URL()+"/leaveChat");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postLeaveChatCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postLeaveChatCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAILeaveChatResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postLeaveChatSignal(output);
        Q_EMIT postLeaveChatSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postLeaveChatSignalE(output, error_type, error_str);
        Q_EMIT postLeaveChatSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postLeaveChatSignalError(output, error_type, error_str);
        Q_EMIT postLeaveChatSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postLogOut() {
    QString fullPath = QString(_serverConfigs["postLogOut"][_serverIndices.value("postLogOut")].URL()+"/logOut");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postLogOutCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postLogOutCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAILogOutResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postLogOutSignal(output);
        Q_EMIT postLogOutSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postLogOutSignalE(output, error_type, error_str);
        Q_EMIT postLogOutSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postLogOutSignalError(output, error_type, error_str);
        Q_EMIT postLogOutSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postPinChatMessage(const OAISendMessageRequest_chat_id &chat_id, const qint32 &message_id, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<bool> &disable_notification) {
    QString fullPath = QString(_serverConfigs["postPinChatMessage"][_serverIndices.value("postPinChatMessage")].URL()+"/pinChatMessage");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("message_id", ::tele_rest::toStringValue(message_id));
    }
    if (disable_notification.hasValue())
    {
        input.add_var("disable_notification", ::tele_rest::toStringValue(disable_notification.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postPinChatMessageCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postPinChatMessageCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIPinChatMessageResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postPinChatMessageSignal(output);
        Q_EMIT postPinChatMessageSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postPinChatMessageSignalE(output, error_type, error_str);
        Q_EMIT postPinChatMessageSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postPinChatMessageSignalError(output, error_type, error_str);
        Q_EMIT postPinChatMessageSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postPostStory(const QString &business_connection_id, const OAIInputStoryContent &content, const qint32 &active_period, const ::tele_rest::OptionalParam<QString> &caption, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities, const ::tele_rest::OptionalParam<QList<OAIStoryArea>> &areas, const ::tele_rest::OptionalParam<bool> &post_to_chat_page, const ::tele_rest::OptionalParam<bool> &protect_content) {
    QString fullPath = QString(_serverConfigs["postPostStory"][_serverIndices.value("postPostStory")].URL()+"/postStory");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id));
    }
    
    {
        input.add_var("content", ::tele_rest::toStringValue(content));
    }
    
    {
        input.add_var("active_period", ::tele_rest::toStringValue(active_period));
    }
    if (caption.hasValue())
    {
        input.add_var("caption", ::tele_rest::toStringValue(caption.value()));
    }
    if (parse_mode.hasValue())
    {
        input.add_var("parse_mode", ::tele_rest::toStringValue(parse_mode.value()));
    }
    if (caption_entities.hasValue())
    {
        input.add_var("caption_entities", ::tele_rest::toStringValue(caption_entities.value()));
    }
    if (areas.hasValue())
    {
        input.add_var("areas", ::tele_rest::toStringValue(areas.value()));
    }
    if (post_to_chat_page.hasValue())
    {
        input.add_var("post_to_chat_page", ::tele_rest::toStringValue(post_to_chat_page.value()));
    }
    if (protect_content.hasValue())
    {
        input.add_var("protect_content", ::tele_rest::toStringValue(protect_content.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postPostStoryCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postPostStoryCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIPostStoryResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postPostStorySignal(output);
        Q_EMIT postPostStorySignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postPostStorySignalE(output, error_type, error_str);
        Q_EMIT postPostStorySignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postPostStorySignalError(output, error_type, error_str);
        Q_EMIT postPostStorySignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postPromoteChatMember(const OAISendMessageRequest_chat_id &chat_id, const qint32 &user_id, const ::tele_rest::OptionalParam<bool> &is_anonymous, const ::tele_rest::OptionalParam<bool> &can_manage_chat, const ::tele_rest::OptionalParam<bool> &can_delete_messages, const ::tele_rest::OptionalParam<bool> &can_manage_video_chats, const ::tele_rest::OptionalParam<bool> &can_restrict_members, const ::tele_rest::OptionalParam<bool> &can_promote_members, const ::tele_rest::OptionalParam<bool> &can_change_info, const ::tele_rest::OptionalParam<bool> &can_invite_users, const ::tele_rest::OptionalParam<bool> &can_post_stories, const ::tele_rest::OptionalParam<bool> &can_edit_stories, const ::tele_rest::OptionalParam<bool> &can_delete_stories, const ::tele_rest::OptionalParam<bool> &can_post_messages, const ::tele_rest::OptionalParam<bool> &can_edit_messages, const ::tele_rest::OptionalParam<bool> &can_pin_messages, const ::tele_rest::OptionalParam<bool> &can_manage_topics) {
    QString fullPath = QString(_serverConfigs["postPromoteChatMember"][_serverIndices.value("postPromoteChatMember")].URL()+"/promoteChatMember");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id));
    }
    if (is_anonymous.hasValue())
    {
        input.add_var("is_anonymous", ::tele_rest::toStringValue(is_anonymous.value()));
    }
    if (can_manage_chat.hasValue())
    {
        input.add_var("can_manage_chat", ::tele_rest::toStringValue(can_manage_chat.value()));
    }
    if (can_delete_messages.hasValue())
    {
        input.add_var("can_delete_messages", ::tele_rest::toStringValue(can_delete_messages.value()));
    }
    if (can_manage_video_chats.hasValue())
    {
        input.add_var("can_manage_video_chats", ::tele_rest::toStringValue(can_manage_video_chats.value()));
    }
    if (can_restrict_members.hasValue())
    {
        input.add_var("can_restrict_members", ::tele_rest::toStringValue(can_restrict_members.value()));
    }
    if (can_promote_members.hasValue())
    {
        input.add_var("can_promote_members", ::tele_rest::toStringValue(can_promote_members.value()));
    }
    if (can_change_info.hasValue())
    {
        input.add_var("can_change_info", ::tele_rest::toStringValue(can_change_info.value()));
    }
    if (can_invite_users.hasValue())
    {
        input.add_var("can_invite_users", ::tele_rest::toStringValue(can_invite_users.value()));
    }
    if (can_post_stories.hasValue())
    {
        input.add_var("can_post_stories", ::tele_rest::toStringValue(can_post_stories.value()));
    }
    if (can_edit_stories.hasValue())
    {
        input.add_var("can_edit_stories", ::tele_rest::toStringValue(can_edit_stories.value()));
    }
    if (can_delete_stories.hasValue())
    {
        input.add_var("can_delete_stories", ::tele_rest::toStringValue(can_delete_stories.value()));
    }
    if (can_post_messages.hasValue())
    {
        input.add_var("can_post_messages", ::tele_rest::toStringValue(can_post_messages.value()));
    }
    if (can_edit_messages.hasValue())
    {
        input.add_var("can_edit_messages", ::tele_rest::toStringValue(can_edit_messages.value()));
    }
    if (can_pin_messages.hasValue())
    {
        input.add_var("can_pin_messages", ::tele_rest::toStringValue(can_pin_messages.value()));
    }
    if (can_manage_topics.hasValue())
    {
        input.add_var("can_manage_topics", ::tele_rest::toStringValue(can_manage_topics.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postPromoteChatMemberCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postPromoteChatMemberCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIPromoteChatMemberResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postPromoteChatMemberSignal(output);
        Q_EMIT postPromoteChatMemberSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postPromoteChatMemberSignalE(output, error_type, error_str);
        Q_EMIT postPromoteChatMemberSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postPromoteChatMemberSignalError(output, error_type, error_str);
        Q_EMIT postPromoteChatMemberSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postReadBusinessMessage(const QString &business_connection_id, const qint32 &chat_id, const qint32 &message_id) {
    QString fullPath = QString(_serverConfigs["postReadBusinessMessage"][_serverIndices.value("postReadBusinessMessage")].URL()+"/readBusinessMessage");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id));
    }
    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("message_id", ::tele_rest::toStringValue(message_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postReadBusinessMessageCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postReadBusinessMessageCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIReadBusinessMessageResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postReadBusinessMessageSignal(output);
        Q_EMIT postReadBusinessMessageSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postReadBusinessMessageSignalE(output, error_type, error_str);
        Q_EMIT postReadBusinessMessageSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postReadBusinessMessageSignalError(output, error_type, error_str);
        Q_EMIT postReadBusinessMessageSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postRefundStarPayment(const qint32 &user_id, const QString &telegram_payment_charge_id) {
    QString fullPath = QString(_serverConfigs["postRefundStarPayment"][_serverIndices.value("postRefundStarPayment")].URL()+"/refundStarPayment");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id));
    }
    
    {
        input.add_var("telegram_payment_charge_id", ::tele_rest::toStringValue(telegram_payment_charge_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postRefundStarPaymentCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postRefundStarPaymentCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIRefundStarPaymentResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postRefundStarPaymentSignal(output);
        Q_EMIT postRefundStarPaymentSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postRefundStarPaymentSignalE(output, error_type, error_str);
        Q_EMIT postRefundStarPaymentSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postRefundStarPaymentSignalError(output, error_type, error_str);
        Q_EMIT postRefundStarPaymentSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postRemoveBusinessAccountProfilePhoto(const QString &business_connection_id, const ::tele_rest::OptionalParam<bool> &is_public) {
    QString fullPath = QString(_serverConfigs["postRemoveBusinessAccountProfilePhoto"][_serverIndices.value("postRemoveBusinessAccountProfilePhoto")].URL()+"/removeBusinessAccountProfilePhoto");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id));
    }
    if (is_public.hasValue())
    {
        input.add_var("is_public", ::tele_rest::toStringValue(is_public.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postRemoveBusinessAccountProfilePhotoCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postRemoveBusinessAccountProfilePhotoCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIRemoveBusinessAccountProfilePhotoResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postRemoveBusinessAccountProfilePhotoSignal(output);
        Q_EMIT postRemoveBusinessAccountProfilePhotoSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postRemoveBusinessAccountProfilePhotoSignalE(output, error_type, error_str);
        Q_EMIT postRemoveBusinessAccountProfilePhotoSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postRemoveBusinessAccountProfilePhotoSignalError(output, error_type, error_str);
        Q_EMIT postRemoveBusinessAccountProfilePhotoSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postRemoveChatVerification(const OAISendMessageRequest_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["postRemoveChatVerification"][_serverIndices.value("postRemoveChatVerification")].URL()+"/removeChatVerification");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postRemoveChatVerificationCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postRemoveChatVerificationCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIRemoveChatVerificationResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postRemoveChatVerificationSignal(output);
        Q_EMIT postRemoveChatVerificationSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postRemoveChatVerificationSignalE(output, error_type, error_str);
        Q_EMIT postRemoveChatVerificationSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postRemoveChatVerificationSignalError(output, error_type, error_str);
        Q_EMIT postRemoveChatVerificationSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postRemoveUserVerification(const qint32 &user_id) {
    QString fullPath = QString(_serverConfigs["postRemoveUserVerification"][_serverIndices.value("postRemoveUserVerification")].URL()+"/removeUserVerification");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postRemoveUserVerificationCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postRemoveUserVerificationCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIRemoveUserVerificationResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postRemoveUserVerificationSignal(output);
        Q_EMIT postRemoveUserVerificationSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postRemoveUserVerificationSignalE(output, error_type, error_str);
        Q_EMIT postRemoveUserVerificationSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postRemoveUserVerificationSignalError(output, error_type, error_str);
        Q_EMIT postRemoveUserVerificationSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postReopenForumTopic(const OAIBotCommandScopeChat_chat_id &chat_id, const qint32 &message_thread_id) {
    QString fullPath = QString(_serverConfigs["postReopenForumTopic"][_serverIndices.value("postReopenForumTopic")].URL()+"/reopenForumTopic");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postReopenForumTopicCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postReopenForumTopicCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIReopenForumTopicResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postReopenForumTopicSignal(output);
        Q_EMIT postReopenForumTopicSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postReopenForumTopicSignalE(output, error_type, error_str);
        Q_EMIT postReopenForumTopicSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postReopenForumTopicSignalError(output, error_type, error_str);
        Q_EMIT postReopenForumTopicSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postReopenGeneralForumTopic(const OAIBotCommandScopeChat_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["postReopenGeneralForumTopic"][_serverIndices.value("postReopenGeneralForumTopic")].URL()+"/reopenGeneralForumTopic");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postReopenGeneralForumTopicCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postReopenGeneralForumTopicCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIReopenGeneralForumTopicResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postReopenGeneralForumTopicSignal(output);
        Q_EMIT postReopenGeneralForumTopicSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postReopenGeneralForumTopicSignalE(output, error_type, error_str);
        Q_EMIT postReopenGeneralForumTopicSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postReopenGeneralForumTopicSignalError(output, error_type, error_str);
        Q_EMIT postReopenGeneralForumTopicSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postReplaceStickerInSet(const qint32 &user_id, const QString &name, const QString &old_sticker, const OAIInputSticker &sticker) {
    QString fullPath = QString(_serverConfigs["postReplaceStickerInSet"][_serverIndices.value("postReplaceStickerInSet")].URL()+"/replaceStickerInSet");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id));
    }
    
    {
        input.add_var("name", ::tele_rest::toStringValue(name));
    }
    
    {
        input.add_var("old_sticker", ::tele_rest::toStringValue(old_sticker));
    }
    
    {
        input.add_var("sticker", ::tele_rest::toStringValue(sticker));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postReplaceStickerInSetCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postReplaceStickerInSetCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIReplaceStickerInSetResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postReplaceStickerInSetSignal(output);
        Q_EMIT postReplaceStickerInSetSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postReplaceStickerInSetSignalE(output, error_type, error_str);
        Q_EMIT postReplaceStickerInSetSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postReplaceStickerInSetSignalError(output, error_type, error_str);
        Q_EMIT postReplaceStickerInSetSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postRestrictChatMember(const OAIBotCommandScopeChat_chat_id &chat_id, const qint32 &user_id, const OAIChatPermissions &permissions, const ::tele_rest::OptionalParam<bool> &use_independent_chat_permissions, const ::tele_rest::OptionalParam<qint32> &until_date) {
    QString fullPath = QString(_serverConfigs["postRestrictChatMember"][_serverIndices.value("postRestrictChatMember")].URL()+"/restrictChatMember");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id));
    }
    
    {
        input.add_var("permissions", ::tele_rest::toStringValue(permissions));
    }
    if (use_independent_chat_permissions.hasValue())
    {
        input.add_var("use_independent_chat_permissions", ::tele_rest::toStringValue(use_independent_chat_permissions.value()));
    }
    if (until_date.hasValue())
    {
        input.add_var("until_date", ::tele_rest::toStringValue(until_date.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postRestrictChatMemberCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postRestrictChatMemberCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIRestrictChatMemberResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postRestrictChatMemberSignal(output);
        Q_EMIT postRestrictChatMemberSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postRestrictChatMemberSignalE(output, error_type, error_str);
        Q_EMIT postRestrictChatMemberSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postRestrictChatMemberSignalError(output, error_type, error_str);
        Q_EMIT postRestrictChatMemberSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postRevokeChatInviteLink(const OAIRevokeChatInviteLinkRequest_chat_id &chat_id, const QString &invite_link) {
    QString fullPath = QString(_serverConfigs["postRevokeChatInviteLink"][_serverIndices.value("postRevokeChatInviteLink")].URL()+"/revokeChatInviteLink");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("invite_link", ::tele_rest::toStringValue(invite_link));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postRevokeChatInviteLinkCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postRevokeChatInviteLinkCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIRevokeChatInviteLinkResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postRevokeChatInviteLinkSignal(output);
        Q_EMIT postRevokeChatInviteLinkSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postRevokeChatInviteLinkSignalE(output, error_type, error_str);
        Q_EMIT postRevokeChatInviteLinkSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postRevokeChatInviteLinkSignalError(output, error_type, error_str);
        Q_EMIT postRevokeChatInviteLinkSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSavePreparedInlineMessage(const qint32 &user_id, const OAIInlineQueryResult &result, const ::tele_rest::OptionalParam<bool> &allow_user_chats, const ::tele_rest::OptionalParam<bool> &allow_bot_chats, const ::tele_rest::OptionalParam<bool> &allow_group_chats, const ::tele_rest::OptionalParam<bool> &allow_channel_chats) {
    QString fullPath = QString(_serverConfigs["postSavePreparedInlineMessage"][_serverIndices.value("postSavePreparedInlineMessage")].URL()+"/savePreparedInlineMessage");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id));
    }
    
    {
        input.add_var("result", ::tele_rest::toStringValue(result));
    }
    if (allow_user_chats.hasValue())
    {
        input.add_var("allow_user_chats", ::tele_rest::toStringValue(allow_user_chats.value()));
    }
    if (allow_bot_chats.hasValue())
    {
        input.add_var("allow_bot_chats", ::tele_rest::toStringValue(allow_bot_chats.value()));
    }
    if (allow_group_chats.hasValue())
    {
        input.add_var("allow_group_chats", ::tele_rest::toStringValue(allow_group_chats.value()));
    }
    if (allow_channel_chats.hasValue())
    {
        input.add_var("allow_channel_chats", ::tele_rest::toStringValue(allow_channel_chats.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSavePreparedInlineMessageCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSavePreparedInlineMessageCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISavePreparedInlineMessageResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSavePreparedInlineMessageSignal(output);
        Q_EMIT postSavePreparedInlineMessageSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSavePreparedInlineMessageSignalE(output, error_type, error_str);
        Q_EMIT postSavePreparedInlineMessageSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSavePreparedInlineMessageSignalError(output, error_type, error_str);
        Q_EMIT postSavePreparedInlineMessageSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSendAnimation(const OAISendMessageRequest_chat_id &chat_id, const QString &animation, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<qint32> &duration, const ::tele_rest::OptionalParam<qint32> &width, const ::tele_rest::OptionalParam<qint32> &height, const ::tele_rest::OptionalParam<QString> &thumbnail, const ::tele_rest::OptionalParam<QString> &caption, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities, const ::tele_rest::OptionalParam<bool> &show_caption_above_media, const ::tele_rest::OptionalParam<bool> &has_spoiler, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAISendMessageRequest_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["postSendAnimation"][_serverIndices.value("postSendAnimation")].URL()+"/sendAnimation");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (message_thread_id.hasValue())
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id.value()));
    }
    
    {
        input.add_var("animation", ::tele_rest::toStringValue(animation));
    }
    if (duration.hasValue())
    {
        input.add_var("duration", ::tele_rest::toStringValue(duration.value()));
    }
    if (width.hasValue())
    {
        input.add_var("width", ::tele_rest::toStringValue(width.value()));
    }
    if (height.hasValue())
    {
        input.add_var("height", ::tele_rest::toStringValue(height.value()));
    }
    if (thumbnail.hasValue())
    {
        input.add_var("thumbnail", ::tele_rest::toStringValue(thumbnail.value()));
    }
    if (caption.hasValue())
    {
        input.add_var("caption", ::tele_rest::toStringValue(caption.value()));
    }
    if (parse_mode.hasValue())
    {
        input.add_var("parse_mode", ::tele_rest::toStringValue(parse_mode.value()));
    }
    if (caption_entities.hasValue())
    {
        input.add_var("caption_entities", ::tele_rest::toStringValue(caption_entities.value()));
    }
    if (show_caption_above_media.hasValue())
    {
        input.add_var("show_caption_above_media", ::tele_rest::toStringValue(show_caption_above_media.value()));
    }
    if (has_spoiler.hasValue())
    {
        input.add_var("has_spoiler", ::tele_rest::toStringValue(has_spoiler.value()));
    }
    if (disable_notification.hasValue())
    {
        input.add_var("disable_notification", ::tele_rest::toStringValue(disable_notification.value()));
    }
    if (protect_content.hasValue())
    {
        input.add_var("protect_content", ::tele_rest::toStringValue(protect_content.value()));
    }
    if (allow_paid_broadcast.hasValue())
    {
        input.add_var("allow_paid_broadcast", ::tele_rest::toStringValue(allow_paid_broadcast.value()));
    }
    if (message_effect_id.hasValue())
    {
        input.add_var("message_effect_id", ::tele_rest::toStringValue(message_effect_id.value()));
    }
    if (reply_parameters.hasValue())
    {
        input.add_var("reply_parameters", ::tele_rest::toStringValue(reply_parameters.value()));
    }
    if (reply_markup.hasValue())
    {
        input.add_var("reply_markup", ::tele_rest::toStringValue(reply_markup.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSendAnimationCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSendAnimationCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISendAnimationResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSendAnimationSignal(output);
        Q_EMIT postSendAnimationSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSendAnimationSignalE(output, error_type, error_str);
        Q_EMIT postSendAnimationSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSendAnimationSignalError(output, error_type, error_str);
        Q_EMIT postSendAnimationSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSendAudio(const OAISendMessageRequest_chat_id &chat_id, const QString &audio, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<QString> &caption, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities, const ::tele_rest::OptionalParam<qint32> &duration, const ::tele_rest::OptionalParam<QString> &performer, const ::tele_rest::OptionalParam<QString> &title, const ::tele_rest::OptionalParam<QString> &thumbnail, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAISendMessageRequest_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["postSendAudio"][_serverIndices.value("postSendAudio")].URL()+"/sendAudio");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (message_thread_id.hasValue())
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id.value()));
    }
    
    {
        input.add_var("audio", ::tele_rest::toStringValue(audio));
    }
    if (caption.hasValue())
    {
        input.add_var("caption", ::tele_rest::toStringValue(caption.value()));
    }
    if (parse_mode.hasValue())
    {
        input.add_var("parse_mode", ::tele_rest::toStringValue(parse_mode.value()));
    }
    if (caption_entities.hasValue())
    {
        input.add_var("caption_entities", ::tele_rest::toStringValue(caption_entities.value()));
    }
    if (duration.hasValue())
    {
        input.add_var("duration", ::tele_rest::toStringValue(duration.value()));
    }
    if (performer.hasValue())
    {
        input.add_var("performer", ::tele_rest::toStringValue(performer.value()));
    }
    if (title.hasValue())
    {
        input.add_var("title", ::tele_rest::toStringValue(title.value()));
    }
    if (thumbnail.hasValue())
    {
        input.add_var("thumbnail", ::tele_rest::toStringValue(thumbnail.value()));
    }
    if (disable_notification.hasValue())
    {
        input.add_var("disable_notification", ::tele_rest::toStringValue(disable_notification.value()));
    }
    if (protect_content.hasValue())
    {
        input.add_var("protect_content", ::tele_rest::toStringValue(protect_content.value()));
    }
    if (allow_paid_broadcast.hasValue())
    {
        input.add_var("allow_paid_broadcast", ::tele_rest::toStringValue(allow_paid_broadcast.value()));
    }
    if (message_effect_id.hasValue())
    {
        input.add_var("message_effect_id", ::tele_rest::toStringValue(message_effect_id.value()));
    }
    if (reply_parameters.hasValue())
    {
        input.add_var("reply_parameters", ::tele_rest::toStringValue(reply_parameters.value()));
    }
    if (reply_markup.hasValue())
    {
        input.add_var("reply_markup", ::tele_rest::toStringValue(reply_markup.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSendAudioCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSendAudioCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISendAudioResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSendAudioSignal(output);
        Q_EMIT postSendAudioSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSendAudioSignalE(output, error_type, error_str);
        Q_EMIT postSendAudioSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSendAudioSignalError(output, error_type, error_str);
        Q_EMIT postSendAudioSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSendChatAction(const OAISendMessageRequest_chat_id &chat_id, const QString &action, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id) {
    QString fullPath = QString(_serverConfigs["postSendChatAction"][_serverIndices.value("postSendChatAction")].URL()+"/sendChatAction");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (message_thread_id.hasValue())
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id.value()));
    }
    
    {
        input.add_var("action", ::tele_rest::toStringValue(action));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSendChatActionCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSendChatActionCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISendChatActionResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSendChatActionSignal(output);
        Q_EMIT postSendChatActionSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSendChatActionSignalE(output, error_type, error_str);
        Q_EMIT postSendChatActionSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSendChatActionSignalError(output, error_type, error_str);
        Q_EMIT postSendChatActionSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSendContact(const OAISendMessageRequest_chat_id &chat_id, const QString &phone_number, const QString &first_name, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<QString> &last_name, const ::tele_rest::OptionalParam<QString> &vcard, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAISendMessageRequest_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["postSendContact"][_serverIndices.value("postSendContact")].URL()+"/sendContact");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (message_thread_id.hasValue())
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id.value()));
    }
    
    {
        input.add_var("phone_number", ::tele_rest::toStringValue(phone_number));
    }
    
    {
        input.add_var("first_name", ::tele_rest::toStringValue(first_name));
    }
    if (last_name.hasValue())
    {
        input.add_var("last_name", ::tele_rest::toStringValue(last_name.value()));
    }
    if (vcard.hasValue())
    {
        input.add_var("vcard", ::tele_rest::toStringValue(vcard.value()));
    }
    if (disable_notification.hasValue())
    {
        input.add_var("disable_notification", ::tele_rest::toStringValue(disable_notification.value()));
    }
    if (protect_content.hasValue())
    {
        input.add_var("protect_content", ::tele_rest::toStringValue(protect_content.value()));
    }
    if (allow_paid_broadcast.hasValue())
    {
        input.add_var("allow_paid_broadcast", ::tele_rest::toStringValue(allow_paid_broadcast.value()));
    }
    if (message_effect_id.hasValue())
    {
        input.add_var("message_effect_id", ::tele_rest::toStringValue(message_effect_id.value()));
    }
    if (reply_parameters.hasValue())
    {
        input.add_var("reply_parameters", ::tele_rest::toStringValue(reply_parameters.value()));
    }
    if (reply_markup.hasValue())
    {
        input.add_var("reply_markup", ::tele_rest::toStringValue(reply_markup.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSendContactCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSendContactCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISendContactResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSendContactSignal(output);
        Q_EMIT postSendContactSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSendContactSignalE(output, error_type, error_str);
        Q_EMIT postSendContactSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSendContactSignalError(output, error_type, error_str);
        Q_EMIT postSendContactSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSendDice(const OAISendMessageRequest_chat_id &chat_id, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<QString> &emoji, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAISendMessageRequest_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["postSendDice"][_serverIndices.value("postSendDice")].URL()+"/sendDice");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (message_thread_id.hasValue())
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id.value()));
    }
    if (emoji.hasValue())
    {
        input.add_var("emoji", ::tele_rest::toStringValue(emoji.value()));
    }
    if (disable_notification.hasValue())
    {
        input.add_var("disable_notification", ::tele_rest::toStringValue(disable_notification.value()));
    }
    if (protect_content.hasValue())
    {
        input.add_var("protect_content", ::tele_rest::toStringValue(protect_content.value()));
    }
    if (allow_paid_broadcast.hasValue())
    {
        input.add_var("allow_paid_broadcast", ::tele_rest::toStringValue(allow_paid_broadcast.value()));
    }
    if (message_effect_id.hasValue())
    {
        input.add_var("message_effect_id", ::tele_rest::toStringValue(message_effect_id.value()));
    }
    if (reply_parameters.hasValue())
    {
        input.add_var("reply_parameters", ::tele_rest::toStringValue(reply_parameters.value()));
    }
    if (reply_markup.hasValue())
    {
        input.add_var("reply_markup", ::tele_rest::toStringValue(reply_markup.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSendDiceCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSendDiceCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISendDiceResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSendDiceSignal(output);
        Q_EMIT postSendDiceSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSendDiceSignalE(output, error_type, error_str);
        Q_EMIT postSendDiceSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSendDiceSignalError(output, error_type, error_str);
        Q_EMIT postSendDiceSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSendDocument(const OAISendMessageRequest_chat_id &chat_id, const QString &document, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<QString> &thumbnail, const ::tele_rest::OptionalParam<QString> &caption, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities, const ::tele_rest::OptionalParam<bool> &disable_content_type_detection, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAISendMessageRequest_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["postSendDocument"][_serverIndices.value("postSendDocument")].URL()+"/sendDocument");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (message_thread_id.hasValue())
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id.value()));
    }
    
    {
        input.add_var("document", ::tele_rest::toStringValue(document));
    }
    if (thumbnail.hasValue())
    {
        input.add_var("thumbnail", ::tele_rest::toStringValue(thumbnail.value()));
    }
    if (caption.hasValue())
    {
        input.add_var("caption", ::tele_rest::toStringValue(caption.value()));
    }
    if (parse_mode.hasValue())
    {
        input.add_var("parse_mode", ::tele_rest::toStringValue(parse_mode.value()));
    }
    if (caption_entities.hasValue())
    {
        input.add_var("caption_entities", ::tele_rest::toStringValue(caption_entities.value()));
    }
    if (disable_content_type_detection.hasValue())
    {
        input.add_var("disable_content_type_detection", ::tele_rest::toStringValue(disable_content_type_detection.value()));
    }
    if (disable_notification.hasValue())
    {
        input.add_var("disable_notification", ::tele_rest::toStringValue(disable_notification.value()));
    }
    if (protect_content.hasValue())
    {
        input.add_var("protect_content", ::tele_rest::toStringValue(protect_content.value()));
    }
    if (allow_paid_broadcast.hasValue())
    {
        input.add_var("allow_paid_broadcast", ::tele_rest::toStringValue(allow_paid_broadcast.value()));
    }
    if (message_effect_id.hasValue())
    {
        input.add_var("message_effect_id", ::tele_rest::toStringValue(message_effect_id.value()));
    }
    if (reply_parameters.hasValue())
    {
        input.add_var("reply_parameters", ::tele_rest::toStringValue(reply_parameters.value()));
    }
    if (reply_markup.hasValue())
    {
        input.add_var("reply_markup", ::tele_rest::toStringValue(reply_markup.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSendDocumentCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSendDocumentCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISendDocumentResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSendDocumentSignal(output);
        Q_EMIT postSendDocumentSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSendDocumentSignalE(output, error_type, error_str);
        Q_EMIT postSendDocumentSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSendDocumentSignalError(output, error_type, error_str);
        Q_EMIT postSendDocumentSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSendGame(const qint32 &chat_id, const QString &game_short_name, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["postSendGame"][_serverIndices.value("postSendGame")].URL()+"/sendGame");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (message_thread_id.hasValue())
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id.value()));
    }
    
    {
        input.add_var("game_short_name", ::tele_rest::toStringValue(game_short_name));
    }
    if (disable_notification.hasValue())
    {
        input.add_var("disable_notification", ::tele_rest::toStringValue(disable_notification.value()));
    }
    if (protect_content.hasValue())
    {
        input.add_var("protect_content", ::tele_rest::toStringValue(protect_content.value()));
    }
    if (allow_paid_broadcast.hasValue())
    {
        input.add_var("allow_paid_broadcast", ::tele_rest::toStringValue(allow_paid_broadcast.value()));
    }
    if (message_effect_id.hasValue())
    {
        input.add_var("message_effect_id", ::tele_rest::toStringValue(message_effect_id.value()));
    }
    if (reply_parameters.hasValue())
    {
        input.add_var("reply_parameters", ::tele_rest::toStringValue(reply_parameters.value()));
    }
    if (reply_markup.hasValue())
    {
        input.add_var("reply_markup", ::tele_rest::toStringValue(reply_markup.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSendGameCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSendGameCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISendGameResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSendGameSignal(output);
        Q_EMIT postSendGameSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSendGameSignalE(output, error_type, error_str);
        Q_EMIT postSendGameSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSendGameSignalError(output, error_type, error_str);
        Q_EMIT postSendGameSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSendGift(const QString &gift_id, const ::tele_rest::OptionalParam<qint32> &user_id, const ::tele_rest::OptionalParam<OAISendGiftRequest_chat_id> &chat_id, const ::tele_rest::OptionalParam<bool> &pay_for_upgrade, const ::tele_rest::OptionalParam<QString> &text, const ::tele_rest::OptionalParam<QString> &text_parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &text_entities) {
    QString fullPath = QString(_serverConfigs["postSendGift"][_serverIndices.value("postSendGift")].URL()+"/sendGift");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (user_id.hasValue())
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id.value()));
    }
    if (chat_id.hasValue())
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id.value()));
    }
    
    {
        input.add_var("gift_id", ::tele_rest::toStringValue(gift_id));
    }
    if (pay_for_upgrade.hasValue())
    {
        input.add_var("pay_for_upgrade", ::tele_rest::toStringValue(pay_for_upgrade.value()));
    }
    if (text.hasValue())
    {
        input.add_var("text", ::tele_rest::toStringValue(text.value()));
    }
    if (text_parse_mode.hasValue())
    {
        input.add_var("text_parse_mode", ::tele_rest::toStringValue(text_parse_mode.value()));
    }
    if (text_entities.hasValue())
    {
        input.add_var("text_entities", ::tele_rest::toStringValue(text_entities.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSendGiftCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSendGiftCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISendGiftResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSendGiftSignal(output);
        Q_EMIT postSendGiftSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSendGiftSignalE(output, error_type, error_str);
        Q_EMIT postSendGiftSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSendGiftSignalError(output, error_type, error_str);
        Q_EMIT postSendGiftSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSendInvoice(const OAISendMessageRequest_chat_id &chat_id, const QString &title, const QString &description, const QString &payload, const QString &currency, const QList<OAILabeledPrice> &prices, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<QString> &provider_token, const ::tele_rest::OptionalParam<qint32> &max_tip_amount, const ::tele_rest::OptionalParam<QList<qint32>> &suggested_tip_amounts, const ::tele_rest::OptionalParam<QString> &start_parameter, const ::tele_rest::OptionalParam<QString> &provider_data, const ::tele_rest::OptionalParam<QString> &photo_url, const ::tele_rest::OptionalParam<qint32> &photo_size, const ::tele_rest::OptionalParam<qint32> &photo_width, const ::tele_rest::OptionalParam<qint32> &photo_height, const ::tele_rest::OptionalParam<bool> &need_name, const ::tele_rest::OptionalParam<bool> &need_phone_number, const ::tele_rest::OptionalParam<bool> &need_email, const ::tele_rest::OptionalParam<bool> &need_shipping_address, const ::tele_rest::OptionalParam<bool> &send_phone_number_to_provider, const ::tele_rest::OptionalParam<bool> &send_email_to_provider, const ::tele_rest::OptionalParam<bool> &is_flexible, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["postSendInvoice"][_serverIndices.value("postSendInvoice")].URL()+"/sendInvoice");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (message_thread_id.hasValue())
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id.value()));
    }
    
    {
        input.add_var("title", ::tele_rest::toStringValue(title));
    }
    
    {
        input.add_var("description", ::tele_rest::toStringValue(description));
    }
    
    {
        input.add_var("payload", ::tele_rest::toStringValue(payload));
    }
    if (provider_token.hasValue())
    {
        input.add_var("provider_token", ::tele_rest::toStringValue(provider_token.value()));
    }
    
    {
        input.add_var("currency", ::tele_rest::toStringValue(currency));
    }
    
    {
        input.add_var("prices", ::tele_rest::toStringValue(prices));
    }
    if (max_tip_amount.hasValue())
    {
        input.add_var("max_tip_amount", ::tele_rest::toStringValue(max_tip_amount.value()));
    }
    if (suggested_tip_amounts.hasValue())
    {
        input.add_var("suggested_tip_amounts", ::tele_rest::toStringValue(suggested_tip_amounts.value()));
    }
    if (start_parameter.hasValue())
    {
        input.add_var("start_parameter", ::tele_rest::toStringValue(start_parameter.value()));
    }
    if (provider_data.hasValue())
    {
        input.add_var("provider_data", ::tele_rest::toStringValue(provider_data.value()));
    }
    if (photo_url.hasValue())
    {
        input.add_var("photo_url", ::tele_rest::toStringValue(photo_url.value()));
    }
    if (photo_size.hasValue())
    {
        input.add_var("photo_size", ::tele_rest::toStringValue(photo_size.value()));
    }
    if (photo_width.hasValue())
    {
        input.add_var("photo_width", ::tele_rest::toStringValue(photo_width.value()));
    }
    if (photo_height.hasValue())
    {
        input.add_var("photo_height", ::tele_rest::toStringValue(photo_height.value()));
    }
    if (need_name.hasValue())
    {
        input.add_var("need_name", ::tele_rest::toStringValue(need_name.value()));
    }
    if (need_phone_number.hasValue())
    {
        input.add_var("need_phone_number", ::tele_rest::toStringValue(need_phone_number.value()));
    }
    if (need_email.hasValue())
    {
        input.add_var("need_email", ::tele_rest::toStringValue(need_email.value()));
    }
    if (need_shipping_address.hasValue())
    {
        input.add_var("need_shipping_address", ::tele_rest::toStringValue(need_shipping_address.value()));
    }
    if (send_phone_number_to_provider.hasValue())
    {
        input.add_var("send_phone_number_to_provider", ::tele_rest::toStringValue(send_phone_number_to_provider.value()));
    }
    if (send_email_to_provider.hasValue())
    {
        input.add_var("send_email_to_provider", ::tele_rest::toStringValue(send_email_to_provider.value()));
    }
    if (is_flexible.hasValue())
    {
        input.add_var("is_flexible", ::tele_rest::toStringValue(is_flexible.value()));
    }
    if (disable_notification.hasValue())
    {
        input.add_var("disable_notification", ::tele_rest::toStringValue(disable_notification.value()));
    }
    if (protect_content.hasValue())
    {
        input.add_var("protect_content", ::tele_rest::toStringValue(protect_content.value()));
    }
    if (allow_paid_broadcast.hasValue())
    {
        input.add_var("allow_paid_broadcast", ::tele_rest::toStringValue(allow_paid_broadcast.value()));
    }
    if (message_effect_id.hasValue())
    {
        input.add_var("message_effect_id", ::tele_rest::toStringValue(message_effect_id.value()));
    }
    if (reply_parameters.hasValue())
    {
        input.add_var("reply_parameters", ::tele_rest::toStringValue(reply_parameters.value()));
    }
    if (reply_markup.hasValue())
    {
        input.add_var("reply_markup", ::tele_rest::toStringValue(reply_markup.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSendInvoiceCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSendInvoiceCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISendInvoiceResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSendInvoiceSignal(output);
        Q_EMIT postSendInvoiceSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSendInvoiceSignalE(output, error_type, error_str);
        Q_EMIT postSendInvoiceSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSendInvoiceSignalError(output, error_type, error_str);
        Q_EMIT postSendInvoiceSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSendLocation(const OAISendMessageRequest_chat_id &chat_id, const double &latitude, const double &longitude, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<double> &horizontal_accuracy, const ::tele_rest::OptionalParam<qint32> &live_period, const ::tele_rest::OptionalParam<qint32> &heading, const ::tele_rest::OptionalParam<qint32> &proximity_alert_radius, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAISendMessageRequest_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["postSendLocation"][_serverIndices.value("postSendLocation")].URL()+"/sendLocation");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (message_thread_id.hasValue())
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id.value()));
    }
    
    {
        input.add_var("latitude", ::tele_rest::toStringValue(latitude));
    }
    
    {
        input.add_var("longitude", ::tele_rest::toStringValue(longitude));
    }
    if (horizontal_accuracy.hasValue())
    {
        input.add_var("horizontal_accuracy", ::tele_rest::toStringValue(horizontal_accuracy.value()));
    }
    if (live_period.hasValue())
    {
        input.add_var("live_period", ::tele_rest::toStringValue(live_period.value()));
    }
    if (heading.hasValue())
    {
        input.add_var("heading", ::tele_rest::toStringValue(heading.value()));
    }
    if (proximity_alert_radius.hasValue())
    {
        input.add_var("proximity_alert_radius", ::tele_rest::toStringValue(proximity_alert_radius.value()));
    }
    if (disable_notification.hasValue())
    {
        input.add_var("disable_notification", ::tele_rest::toStringValue(disable_notification.value()));
    }
    if (protect_content.hasValue())
    {
        input.add_var("protect_content", ::tele_rest::toStringValue(protect_content.value()));
    }
    if (allow_paid_broadcast.hasValue())
    {
        input.add_var("allow_paid_broadcast", ::tele_rest::toStringValue(allow_paid_broadcast.value()));
    }
    if (message_effect_id.hasValue())
    {
        input.add_var("message_effect_id", ::tele_rest::toStringValue(message_effect_id.value()));
    }
    if (reply_parameters.hasValue())
    {
        input.add_var("reply_parameters", ::tele_rest::toStringValue(reply_parameters.value()));
    }
    if (reply_markup.hasValue())
    {
        input.add_var("reply_markup", ::tele_rest::toStringValue(reply_markup.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSendLocationCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSendLocationCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISendLocationResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSendLocationSignal(output);
        Q_EMIT postSendLocationSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSendLocationSignalE(output, error_type, error_str);
        Q_EMIT postSendLocationSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSendLocationSignalError(output, error_type, error_str);
        Q_EMIT postSendLocationSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSendMediaGroup(const OAISendMessageRequest_chat_id &chat_id, const QList<OAISendMediaGroupRequest_media_inner> &media, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters) {
    QString fullPath = QString(_serverConfigs["postSendMediaGroup"][_serverIndices.value("postSendMediaGroup")].URL()+"/sendMediaGroup");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (message_thread_id.hasValue())
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id.value()));
    }
    
    {
        input.add_var("media", ::tele_rest::toStringValue(media));
    }
    if (disable_notification.hasValue())
    {
        input.add_var("disable_notification", ::tele_rest::toStringValue(disable_notification.value()));
    }
    if (protect_content.hasValue())
    {
        input.add_var("protect_content", ::tele_rest::toStringValue(protect_content.value()));
    }
    if (allow_paid_broadcast.hasValue())
    {
        input.add_var("allow_paid_broadcast", ::tele_rest::toStringValue(allow_paid_broadcast.value()));
    }
    if (message_effect_id.hasValue())
    {
        input.add_var("message_effect_id", ::tele_rest::toStringValue(message_effect_id.value()));
    }
    if (reply_parameters.hasValue())
    {
        input.add_var("reply_parameters", ::tele_rest::toStringValue(reply_parameters.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSendMediaGroupCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSendMediaGroupCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISendMediaGroupResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSendMediaGroupSignal(output);
        Q_EMIT postSendMediaGroupSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSendMediaGroupSignalE(output, error_type, error_str);
        Q_EMIT postSendMediaGroupSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSendMediaGroupSignalError(output, error_type, error_str);
        Q_EMIT postSendMediaGroupSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSendMessage(const OAISendMessageRequest_chat_id &chat_id, const QString &text, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &entities, const ::tele_rest::OptionalParam<OAILinkPreviewOptions> &link_preview_options, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAISendMessageRequest_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["postSendMessage"][_serverIndices.value("postSendMessage")].URL()+"/sendMessage");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (message_thread_id.hasValue())
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id.value()));
    }
    
    {
        input.add_var("text", ::tele_rest::toStringValue(text));
    }
    if (parse_mode.hasValue())
    {
        input.add_var("parse_mode", ::tele_rest::toStringValue(parse_mode.value()));
    }
    if (entities.hasValue())
    {
        input.add_var("entities", ::tele_rest::toStringValue(entities.value()));
    }
    if (link_preview_options.hasValue())
    {
        input.add_var("link_preview_options", ::tele_rest::toStringValue(link_preview_options.value()));
    }
    if (disable_notification.hasValue())
    {
        input.add_var("disable_notification", ::tele_rest::toStringValue(disable_notification.value()));
    }
    if (protect_content.hasValue())
    {
        input.add_var("protect_content", ::tele_rest::toStringValue(protect_content.value()));
    }
    if (allow_paid_broadcast.hasValue())
    {
        input.add_var("allow_paid_broadcast", ::tele_rest::toStringValue(allow_paid_broadcast.value()));
    }
    if (message_effect_id.hasValue())
    {
        input.add_var("message_effect_id", ::tele_rest::toStringValue(message_effect_id.value()));
    }
    if (reply_parameters.hasValue())
    {
        input.add_var("reply_parameters", ::tele_rest::toStringValue(reply_parameters.value()));
    }
    if (reply_markup.hasValue())
    {
        input.add_var("reply_markup", ::tele_rest::toStringValue(reply_markup.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSendMessageCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSendMessageCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISendMessageResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSendMessageSignal(output);
        Q_EMIT postSendMessageSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSendMessageSignalE(output, error_type, error_str);
        Q_EMIT postSendMessageSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSendMessageSignalError(output, error_type, error_str);
        Q_EMIT postSendMessageSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSendPaidMedia(const OAISendPaidMediaRequest_chat_id &chat_id, const qint32 &star_count, const QList<OAIInputPaidMedia> &media, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<QString> &payload, const ::tele_rest::OptionalParam<QString> &caption, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities, const ::tele_rest::OptionalParam<bool> &show_caption_above_media, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAISendMessageRequest_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["postSendPaidMedia"][_serverIndices.value("postSendPaidMedia")].URL()+"/sendPaidMedia");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("star_count", ::tele_rest::toStringValue(star_count));
    }
    
    {
        input.add_var("media", ::tele_rest::toStringValue(media));
    }
    if (payload.hasValue())
    {
        input.add_var("payload", ::tele_rest::toStringValue(payload.value()));
    }
    if (caption.hasValue())
    {
        input.add_var("caption", ::tele_rest::toStringValue(caption.value()));
    }
    if (parse_mode.hasValue())
    {
        input.add_var("parse_mode", ::tele_rest::toStringValue(parse_mode.value()));
    }
    if (caption_entities.hasValue())
    {
        input.add_var("caption_entities", ::tele_rest::toStringValue(caption_entities.value()));
    }
    if (show_caption_above_media.hasValue())
    {
        input.add_var("show_caption_above_media", ::tele_rest::toStringValue(show_caption_above_media.value()));
    }
    if (disable_notification.hasValue())
    {
        input.add_var("disable_notification", ::tele_rest::toStringValue(disable_notification.value()));
    }
    if (protect_content.hasValue())
    {
        input.add_var("protect_content", ::tele_rest::toStringValue(protect_content.value()));
    }
    if (allow_paid_broadcast.hasValue())
    {
        input.add_var("allow_paid_broadcast", ::tele_rest::toStringValue(allow_paid_broadcast.value()));
    }
    if (reply_parameters.hasValue())
    {
        input.add_var("reply_parameters", ::tele_rest::toStringValue(reply_parameters.value()));
    }
    if (reply_markup.hasValue())
    {
        input.add_var("reply_markup", ::tele_rest::toStringValue(reply_markup.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSendPaidMediaCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSendPaidMediaCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISendPaidMediaResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSendPaidMediaSignal(output);
        Q_EMIT postSendPaidMediaSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSendPaidMediaSignalE(output, error_type, error_str);
        Q_EMIT postSendPaidMediaSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSendPaidMediaSignalError(output, error_type, error_str);
        Q_EMIT postSendPaidMediaSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSendPhoto(const OAISendMessageRequest_chat_id &chat_id, const QString &photo, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<QString> &caption, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities, const ::tele_rest::OptionalParam<bool> &show_caption_above_media, const ::tele_rest::OptionalParam<bool> &has_spoiler, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAISendMessageRequest_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["postSendPhoto"][_serverIndices.value("postSendPhoto")].URL()+"/sendPhoto");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (message_thread_id.hasValue())
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id.value()));
    }
    
    {
        input.add_var("photo", ::tele_rest::toStringValue(photo));
    }
    if (caption.hasValue())
    {
        input.add_var("caption", ::tele_rest::toStringValue(caption.value()));
    }
    if (parse_mode.hasValue())
    {
        input.add_var("parse_mode", ::tele_rest::toStringValue(parse_mode.value()));
    }
    if (caption_entities.hasValue())
    {
        input.add_var("caption_entities", ::tele_rest::toStringValue(caption_entities.value()));
    }
    if (show_caption_above_media.hasValue())
    {
        input.add_var("show_caption_above_media", ::tele_rest::toStringValue(show_caption_above_media.value()));
    }
    if (has_spoiler.hasValue())
    {
        input.add_var("has_spoiler", ::tele_rest::toStringValue(has_spoiler.value()));
    }
    if (disable_notification.hasValue())
    {
        input.add_var("disable_notification", ::tele_rest::toStringValue(disable_notification.value()));
    }
    if (protect_content.hasValue())
    {
        input.add_var("protect_content", ::tele_rest::toStringValue(protect_content.value()));
    }
    if (allow_paid_broadcast.hasValue())
    {
        input.add_var("allow_paid_broadcast", ::tele_rest::toStringValue(allow_paid_broadcast.value()));
    }
    if (message_effect_id.hasValue())
    {
        input.add_var("message_effect_id", ::tele_rest::toStringValue(message_effect_id.value()));
    }
    if (reply_parameters.hasValue())
    {
        input.add_var("reply_parameters", ::tele_rest::toStringValue(reply_parameters.value()));
    }
    if (reply_markup.hasValue())
    {
        input.add_var("reply_markup", ::tele_rest::toStringValue(reply_markup.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSendPhotoCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSendPhotoCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISendPhotoResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSendPhotoSignal(output);
        Q_EMIT postSendPhotoSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSendPhotoSignalE(output, error_type, error_str);
        Q_EMIT postSendPhotoSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSendPhotoSignalError(output, error_type, error_str);
        Q_EMIT postSendPhotoSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSendPoll(const OAISendMessageRequest_chat_id &chat_id, const QString &question, const QList<OAIInputPollOption> &options, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<QString> &question_parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &question_entities, const ::tele_rest::OptionalParam<bool> &is_anonymous, const ::tele_rest::OptionalParam<QString> &type, const ::tele_rest::OptionalParam<bool> &allows_multiple_answers, const ::tele_rest::OptionalParam<qint32> &correct_option_id, const ::tele_rest::OptionalParam<QString> &explanation, const ::tele_rest::OptionalParam<QString> &explanation_parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &explanation_entities, const ::tele_rest::OptionalParam<qint32> &open_period, const ::tele_rest::OptionalParam<qint32> &close_date, const ::tele_rest::OptionalParam<bool> &is_closed, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAISendMessageRequest_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["postSendPoll"][_serverIndices.value("postSendPoll")].URL()+"/sendPoll");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (message_thread_id.hasValue())
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id.value()));
    }
    
    {
        input.add_var("question", ::tele_rest::toStringValue(question));
    }
    if (question_parse_mode.hasValue())
    {
        input.add_var("question_parse_mode", ::tele_rest::toStringValue(question_parse_mode.value()));
    }
    if (question_entities.hasValue())
    {
        input.add_var("question_entities", ::tele_rest::toStringValue(question_entities.value()));
    }
    
    {
        input.add_var("options", ::tele_rest::toStringValue(options));
    }
    if (is_anonymous.hasValue())
    {
        input.add_var("is_anonymous", ::tele_rest::toStringValue(is_anonymous.value()));
    }
    if (type.hasValue())
    {
        input.add_var("type", ::tele_rest::toStringValue(type.value()));
    }
    if (allows_multiple_answers.hasValue())
    {
        input.add_var("allows_multiple_answers", ::tele_rest::toStringValue(allows_multiple_answers.value()));
    }
    if (correct_option_id.hasValue())
    {
        input.add_var("correct_option_id", ::tele_rest::toStringValue(correct_option_id.value()));
    }
    if (explanation.hasValue())
    {
        input.add_var("explanation", ::tele_rest::toStringValue(explanation.value()));
    }
    if (explanation_parse_mode.hasValue())
    {
        input.add_var("explanation_parse_mode", ::tele_rest::toStringValue(explanation_parse_mode.value()));
    }
    if (explanation_entities.hasValue())
    {
        input.add_var("explanation_entities", ::tele_rest::toStringValue(explanation_entities.value()));
    }
    if (open_period.hasValue())
    {
        input.add_var("open_period", ::tele_rest::toStringValue(open_period.value()));
    }
    if (close_date.hasValue())
    {
        input.add_var("close_date", ::tele_rest::toStringValue(close_date.value()));
    }
    if (is_closed.hasValue())
    {
        input.add_var("is_closed", ::tele_rest::toStringValue(is_closed.value()));
    }
    if (disable_notification.hasValue())
    {
        input.add_var("disable_notification", ::tele_rest::toStringValue(disable_notification.value()));
    }
    if (protect_content.hasValue())
    {
        input.add_var("protect_content", ::tele_rest::toStringValue(protect_content.value()));
    }
    if (allow_paid_broadcast.hasValue())
    {
        input.add_var("allow_paid_broadcast", ::tele_rest::toStringValue(allow_paid_broadcast.value()));
    }
    if (message_effect_id.hasValue())
    {
        input.add_var("message_effect_id", ::tele_rest::toStringValue(message_effect_id.value()));
    }
    if (reply_parameters.hasValue())
    {
        input.add_var("reply_parameters", ::tele_rest::toStringValue(reply_parameters.value()));
    }
    if (reply_markup.hasValue())
    {
        input.add_var("reply_markup", ::tele_rest::toStringValue(reply_markup.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSendPollCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSendPollCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISendPollResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSendPollSignal(output);
        Q_EMIT postSendPollSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSendPollSignalE(output, error_type, error_str);
        Q_EMIT postSendPollSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSendPollSignalError(output, error_type, error_str);
        Q_EMIT postSendPollSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSendSticker(const OAISendMessageRequest_chat_id &chat_id, const QString &sticker, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<QString> &emoji, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAISendMessageRequest_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["postSendSticker"][_serverIndices.value("postSendSticker")].URL()+"/sendSticker");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (message_thread_id.hasValue())
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id.value()));
    }
    
    {
        input.add_var("sticker", ::tele_rest::toStringValue(sticker));
    }
    if (emoji.hasValue())
    {
        input.add_var("emoji", ::tele_rest::toStringValue(emoji.value()));
    }
    if (disable_notification.hasValue())
    {
        input.add_var("disable_notification", ::tele_rest::toStringValue(disable_notification.value()));
    }
    if (protect_content.hasValue())
    {
        input.add_var("protect_content", ::tele_rest::toStringValue(protect_content.value()));
    }
    if (allow_paid_broadcast.hasValue())
    {
        input.add_var("allow_paid_broadcast", ::tele_rest::toStringValue(allow_paid_broadcast.value()));
    }
    if (message_effect_id.hasValue())
    {
        input.add_var("message_effect_id", ::tele_rest::toStringValue(message_effect_id.value()));
    }
    if (reply_parameters.hasValue())
    {
        input.add_var("reply_parameters", ::tele_rest::toStringValue(reply_parameters.value()));
    }
    if (reply_markup.hasValue())
    {
        input.add_var("reply_markup", ::tele_rest::toStringValue(reply_markup.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSendStickerCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSendStickerCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISendStickerResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSendStickerSignal(output);
        Q_EMIT postSendStickerSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSendStickerSignalE(output, error_type, error_str);
        Q_EMIT postSendStickerSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSendStickerSignalError(output, error_type, error_str);
        Q_EMIT postSendStickerSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSendVenue(const OAISendMessageRequest_chat_id &chat_id, const double &latitude, const double &longitude, const QString &title, const QString &address, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<QString> &foursquare_id, const ::tele_rest::OptionalParam<QString> &foursquare_type, const ::tele_rest::OptionalParam<QString> &google_place_id, const ::tele_rest::OptionalParam<QString> &google_place_type, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAISendMessageRequest_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["postSendVenue"][_serverIndices.value("postSendVenue")].URL()+"/sendVenue");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (message_thread_id.hasValue())
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id.value()));
    }
    
    {
        input.add_var("latitude", ::tele_rest::toStringValue(latitude));
    }
    
    {
        input.add_var("longitude", ::tele_rest::toStringValue(longitude));
    }
    
    {
        input.add_var("title", ::tele_rest::toStringValue(title));
    }
    
    {
        input.add_var("address", ::tele_rest::toStringValue(address));
    }
    if (foursquare_id.hasValue())
    {
        input.add_var("foursquare_id", ::tele_rest::toStringValue(foursquare_id.value()));
    }
    if (foursquare_type.hasValue())
    {
        input.add_var("foursquare_type", ::tele_rest::toStringValue(foursquare_type.value()));
    }
    if (google_place_id.hasValue())
    {
        input.add_var("google_place_id", ::tele_rest::toStringValue(google_place_id.value()));
    }
    if (google_place_type.hasValue())
    {
        input.add_var("google_place_type", ::tele_rest::toStringValue(google_place_type.value()));
    }
    if (disable_notification.hasValue())
    {
        input.add_var("disable_notification", ::tele_rest::toStringValue(disable_notification.value()));
    }
    if (protect_content.hasValue())
    {
        input.add_var("protect_content", ::tele_rest::toStringValue(protect_content.value()));
    }
    if (allow_paid_broadcast.hasValue())
    {
        input.add_var("allow_paid_broadcast", ::tele_rest::toStringValue(allow_paid_broadcast.value()));
    }
    if (message_effect_id.hasValue())
    {
        input.add_var("message_effect_id", ::tele_rest::toStringValue(message_effect_id.value()));
    }
    if (reply_parameters.hasValue())
    {
        input.add_var("reply_parameters", ::tele_rest::toStringValue(reply_parameters.value()));
    }
    if (reply_markup.hasValue())
    {
        input.add_var("reply_markup", ::tele_rest::toStringValue(reply_markup.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSendVenueCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSendVenueCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISendVenueResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSendVenueSignal(output);
        Q_EMIT postSendVenueSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSendVenueSignalE(output, error_type, error_str);
        Q_EMIT postSendVenueSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSendVenueSignalError(output, error_type, error_str);
        Q_EMIT postSendVenueSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSendVideo(const OAISendMessageRequest_chat_id &chat_id, const QString &video, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<qint32> &duration, const ::tele_rest::OptionalParam<qint32> &width, const ::tele_rest::OptionalParam<qint32> &height, const ::tele_rest::OptionalParam<QString> &thumbnail, const ::tele_rest::OptionalParam<QString> &cover, const ::tele_rest::OptionalParam<qint32> &start_timestamp, const ::tele_rest::OptionalParam<QString> &caption, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities, const ::tele_rest::OptionalParam<bool> &show_caption_above_media, const ::tele_rest::OptionalParam<bool> &has_spoiler, const ::tele_rest::OptionalParam<bool> &supports_streaming, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAISendMessageRequest_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["postSendVideo"][_serverIndices.value("postSendVideo")].URL()+"/sendVideo");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (message_thread_id.hasValue())
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id.value()));
    }
    
    {
        input.add_var("video", ::tele_rest::toStringValue(video));
    }
    if (duration.hasValue())
    {
        input.add_var("duration", ::tele_rest::toStringValue(duration.value()));
    }
    if (width.hasValue())
    {
        input.add_var("width", ::tele_rest::toStringValue(width.value()));
    }
    if (height.hasValue())
    {
        input.add_var("height", ::tele_rest::toStringValue(height.value()));
    }
    if (thumbnail.hasValue())
    {
        input.add_var("thumbnail", ::tele_rest::toStringValue(thumbnail.value()));
    }
    if (cover.hasValue())
    {
        input.add_var("cover", ::tele_rest::toStringValue(cover.value()));
    }
    if (start_timestamp.hasValue())
    {
        input.add_var("start_timestamp", ::tele_rest::toStringValue(start_timestamp.value()));
    }
    if (caption.hasValue())
    {
        input.add_var("caption", ::tele_rest::toStringValue(caption.value()));
    }
    if (parse_mode.hasValue())
    {
        input.add_var("parse_mode", ::tele_rest::toStringValue(parse_mode.value()));
    }
    if (caption_entities.hasValue())
    {
        input.add_var("caption_entities", ::tele_rest::toStringValue(caption_entities.value()));
    }
    if (show_caption_above_media.hasValue())
    {
        input.add_var("show_caption_above_media", ::tele_rest::toStringValue(show_caption_above_media.value()));
    }
    if (has_spoiler.hasValue())
    {
        input.add_var("has_spoiler", ::tele_rest::toStringValue(has_spoiler.value()));
    }
    if (supports_streaming.hasValue())
    {
        input.add_var("supports_streaming", ::tele_rest::toStringValue(supports_streaming.value()));
    }
    if (disable_notification.hasValue())
    {
        input.add_var("disable_notification", ::tele_rest::toStringValue(disable_notification.value()));
    }
    if (protect_content.hasValue())
    {
        input.add_var("protect_content", ::tele_rest::toStringValue(protect_content.value()));
    }
    if (allow_paid_broadcast.hasValue())
    {
        input.add_var("allow_paid_broadcast", ::tele_rest::toStringValue(allow_paid_broadcast.value()));
    }
    if (message_effect_id.hasValue())
    {
        input.add_var("message_effect_id", ::tele_rest::toStringValue(message_effect_id.value()));
    }
    if (reply_parameters.hasValue())
    {
        input.add_var("reply_parameters", ::tele_rest::toStringValue(reply_parameters.value()));
    }
    if (reply_markup.hasValue())
    {
        input.add_var("reply_markup", ::tele_rest::toStringValue(reply_markup.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSendVideoCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSendVideoCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISendVideoResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSendVideoSignal(output);
        Q_EMIT postSendVideoSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSendVideoSignalE(output, error_type, error_str);
        Q_EMIT postSendVideoSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSendVideoSignalError(output, error_type, error_str);
        Q_EMIT postSendVideoSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSendVideoNote(const OAISendMessageRequest_chat_id &chat_id, const QString &video_note, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<qint32> &duration, const ::tele_rest::OptionalParam<qint32> &length, const ::tele_rest::OptionalParam<QString> &thumbnail, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAISendMessageRequest_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["postSendVideoNote"][_serverIndices.value("postSendVideoNote")].URL()+"/sendVideoNote");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (message_thread_id.hasValue())
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id.value()));
    }
    
    {
        input.add_var("video_note", ::tele_rest::toStringValue(video_note));
    }
    if (duration.hasValue())
    {
        input.add_var("duration", ::tele_rest::toStringValue(duration.value()));
    }
    if (length.hasValue())
    {
        input.add_var("length", ::tele_rest::toStringValue(length.value()));
    }
    if (thumbnail.hasValue())
    {
        input.add_var("thumbnail", ::tele_rest::toStringValue(thumbnail.value()));
    }
    if (disable_notification.hasValue())
    {
        input.add_var("disable_notification", ::tele_rest::toStringValue(disable_notification.value()));
    }
    if (protect_content.hasValue())
    {
        input.add_var("protect_content", ::tele_rest::toStringValue(protect_content.value()));
    }
    if (allow_paid_broadcast.hasValue())
    {
        input.add_var("allow_paid_broadcast", ::tele_rest::toStringValue(allow_paid_broadcast.value()));
    }
    if (message_effect_id.hasValue())
    {
        input.add_var("message_effect_id", ::tele_rest::toStringValue(message_effect_id.value()));
    }
    if (reply_parameters.hasValue())
    {
        input.add_var("reply_parameters", ::tele_rest::toStringValue(reply_parameters.value()));
    }
    if (reply_markup.hasValue())
    {
        input.add_var("reply_markup", ::tele_rest::toStringValue(reply_markup.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSendVideoNoteCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSendVideoNoteCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISendVideoNoteResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSendVideoNoteSignal(output);
        Q_EMIT postSendVideoNoteSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSendVideoNoteSignalE(output, error_type, error_str);
        Q_EMIT postSendVideoNoteSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSendVideoNoteSignalError(output, error_type, error_str);
        Q_EMIT postSendVideoNoteSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSendVoice(const OAISendMessageRequest_chat_id &chat_id, const QString &voice, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<QString> &caption, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities, const ::tele_rest::OptionalParam<qint32> &duration, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAISendMessageRequest_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["postSendVoice"][_serverIndices.value("postSendVoice")].URL()+"/sendVoice");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (message_thread_id.hasValue())
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id.value()));
    }
    
    {
        input.add_var("voice", ::tele_rest::toStringValue(voice));
    }
    if (caption.hasValue())
    {
        input.add_var("caption", ::tele_rest::toStringValue(caption.value()));
    }
    if (parse_mode.hasValue())
    {
        input.add_var("parse_mode", ::tele_rest::toStringValue(parse_mode.value()));
    }
    if (caption_entities.hasValue())
    {
        input.add_var("caption_entities", ::tele_rest::toStringValue(caption_entities.value()));
    }
    if (duration.hasValue())
    {
        input.add_var("duration", ::tele_rest::toStringValue(duration.value()));
    }
    if (disable_notification.hasValue())
    {
        input.add_var("disable_notification", ::tele_rest::toStringValue(disable_notification.value()));
    }
    if (protect_content.hasValue())
    {
        input.add_var("protect_content", ::tele_rest::toStringValue(protect_content.value()));
    }
    if (allow_paid_broadcast.hasValue())
    {
        input.add_var("allow_paid_broadcast", ::tele_rest::toStringValue(allow_paid_broadcast.value()));
    }
    if (message_effect_id.hasValue())
    {
        input.add_var("message_effect_id", ::tele_rest::toStringValue(message_effect_id.value()));
    }
    if (reply_parameters.hasValue())
    {
        input.add_var("reply_parameters", ::tele_rest::toStringValue(reply_parameters.value()));
    }
    if (reply_markup.hasValue())
    {
        input.add_var("reply_markup", ::tele_rest::toStringValue(reply_markup.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSendVoiceCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSendVoiceCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISendVoiceResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSendVoiceSignal(output);
        Q_EMIT postSendVoiceSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSendVoiceSignalE(output, error_type, error_str);
        Q_EMIT postSendVoiceSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSendVoiceSignalError(output, error_type, error_str);
        Q_EMIT postSendVoiceSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetBusinessAccountBio(const QString &business_connection_id, const ::tele_rest::OptionalParam<QString> &bio) {
    QString fullPath = QString(_serverConfigs["postSetBusinessAccountBio"][_serverIndices.value("postSetBusinessAccountBio")].URL()+"/setBusinessAccountBio");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id));
    }
    if (bio.hasValue())
    {
        input.add_var("bio", ::tele_rest::toStringValue(bio.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetBusinessAccountBioCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetBusinessAccountBioCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetBusinessAccountBioResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetBusinessAccountBioSignal(output);
        Q_EMIT postSetBusinessAccountBioSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetBusinessAccountBioSignalE(output, error_type, error_str);
        Q_EMIT postSetBusinessAccountBioSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetBusinessAccountBioSignalError(output, error_type, error_str);
        Q_EMIT postSetBusinessAccountBioSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetBusinessAccountGiftSettings(const QString &business_connection_id, const bool &show_gift_button, const OAIAcceptedGiftTypes &accepted_gift_types) {
    QString fullPath = QString(_serverConfigs["postSetBusinessAccountGiftSettings"][_serverIndices.value("postSetBusinessAccountGiftSettings")].URL()+"/setBusinessAccountGiftSettings");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id));
    }
    
    {
        input.add_var("show_gift_button", ::tele_rest::toStringValue(show_gift_button));
    }
    
    {
        input.add_var("accepted_gift_types", ::tele_rest::toStringValue(accepted_gift_types));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetBusinessAccountGiftSettingsCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetBusinessAccountGiftSettingsCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetBusinessAccountGiftSettingsResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetBusinessAccountGiftSettingsSignal(output);
        Q_EMIT postSetBusinessAccountGiftSettingsSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetBusinessAccountGiftSettingsSignalE(output, error_type, error_str);
        Q_EMIT postSetBusinessAccountGiftSettingsSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetBusinessAccountGiftSettingsSignalError(output, error_type, error_str);
        Q_EMIT postSetBusinessAccountGiftSettingsSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetBusinessAccountName(const QString &business_connection_id, const QString &first_name, const ::tele_rest::OptionalParam<QString> &last_name) {
    QString fullPath = QString(_serverConfigs["postSetBusinessAccountName"][_serverIndices.value("postSetBusinessAccountName")].URL()+"/setBusinessAccountName");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id));
    }
    
    {
        input.add_var("first_name", ::tele_rest::toStringValue(first_name));
    }
    if (last_name.hasValue())
    {
        input.add_var("last_name", ::tele_rest::toStringValue(last_name.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetBusinessAccountNameCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetBusinessAccountNameCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetBusinessAccountNameResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetBusinessAccountNameSignal(output);
        Q_EMIT postSetBusinessAccountNameSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetBusinessAccountNameSignalE(output, error_type, error_str);
        Q_EMIT postSetBusinessAccountNameSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetBusinessAccountNameSignalError(output, error_type, error_str);
        Q_EMIT postSetBusinessAccountNameSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetBusinessAccountProfilePhoto(const QString &business_connection_id, const OAIInputProfilePhoto &photo, const ::tele_rest::OptionalParam<bool> &is_public) {
    QString fullPath = QString(_serverConfigs["postSetBusinessAccountProfilePhoto"][_serverIndices.value("postSetBusinessAccountProfilePhoto")].URL()+"/setBusinessAccountProfilePhoto");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id));
    }
    
    {
        input.add_var("photo", ::tele_rest::toStringValue(photo));
    }
    if (is_public.hasValue())
    {
        input.add_var("is_public", ::tele_rest::toStringValue(is_public.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetBusinessAccountProfilePhotoCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetBusinessAccountProfilePhotoCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetBusinessAccountProfilePhotoResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetBusinessAccountProfilePhotoSignal(output);
        Q_EMIT postSetBusinessAccountProfilePhotoSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetBusinessAccountProfilePhotoSignalE(output, error_type, error_str);
        Q_EMIT postSetBusinessAccountProfilePhotoSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetBusinessAccountProfilePhotoSignalError(output, error_type, error_str);
        Q_EMIT postSetBusinessAccountProfilePhotoSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetBusinessAccountUsername(const QString &business_connection_id, const ::tele_rest::OptionalParam<QString> &username) {
    QString fullPath = QString(_serverConfigs["postSetBusinessAccountUsername"][_serverIndices.value("postSetBusinessAccountUsername")].URL()+"/setBusinessAccountUsername");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id));
    }
    if (username.hasValue())
    {
        input.add_var("username", ::tele_rest::toStringValue(username.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetBusinessAccountUsernameCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetBusinessAccountUsernameCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetBusinessAccountUsernameResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetBusinessAccountUsernameSignal(output);
        Q_EMIT postSetBusinessAccountUsernameSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetBusinessAccountUsernameSignalE(output, error_type, error_str);
        Q_EMIT postSetBusinessAccountUsernameSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetBusinessAccountUsernameSignalError(output, error_type, error_str);
        Q_EMIT postSetBusinessAccountUsernameSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetChatAdministratorCustomTitle(const OAIBotCommandScopeChat_chat_id &chat_id, const qint32 &user_id, const QString &custom_title) {
    QString fullPath = QString(_serverConfigs["postSetChatAdministratorCustomTitle"][_serverIndices.value("postSetChatAdministratorCustomTitle")].URL()+"/setChatAdministratorCustomTitle");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id));
    }
    
    {
        input.add_var("custom_title", ::tele_rest::toStringValue(custom_title));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetChatAdministratorCustomTitleCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetChatAdministratorCustomTitleCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetChatAdministratorCustomTitleResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetChatAdministratorCustomTitleSignal(output);
        Q_EMIT postSetChatAdministratorCustomTitleSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetChatAdministratorCustomTitleSignalE(output, error_type, error_str);
        Q_EMIT postSetChatAdministratorCustomTitleSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetChatAdministratorCustomTitleSignalError(output, error_type, error_str);
        Q_EMIT postSetChatAdministratorCustomTitleSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetChatDescription(const OAISendMessageRequest_chat_id &chat_id, const ::tele_rest::OptionalParam<QString> &description) {
    QString fullPath = QString(_serverConfigs["postSetChatDescription"][_serverIndices.value("postSetChatDescription")].URL()+"/setChatDescription");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (description.hasValue())
    {
        input.add_var("description", ::tele_rest::toStringValue(description.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetChatDescriptionCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetChatDescriptionCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetChatDescriptionResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetChatDescriptionSignal(output);
        Q_EMIT postSetChatDescriptionSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetChatDescriptionSignalE(output, error_type, error_str);
        Q_EMIT postSetChatDescriptionSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetChatDescriptionSignalError(output, error_type, error_str);
        Q_EMIT postSetChatDescriptionSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetChatMenuButton(const ::tele_rest::OptionalParam<qint32> &chat_id, const ::tele_rest::OptionalParam<OAIMenuButton> &menu_button) {
    QString fullPath = QString(_serverConfigs["postSetChatMenuButton"][_serverIndices.value("postSetChatMenuButton")].URL()+"/setChatMenuButton");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (chat_id.hasValue())
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id.value()));
    }
    if (menu_button.hasValue())
    {
        input.add_var("menu_button", ::tele_rest::toStringValue(menu_button.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetChatMenuButtonCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetChatMenuButtonCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetChatMenuButtonResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetChatMenuButtonSignal(output);
        Q_EMIT postSetChatMenuButtonSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetChatMenuButtonSignalE(output, error_type, error_str);
        Q_EMIT postSetChatMenuButtonSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetChatMenuButtonSignalError(output, error_type, error_str);
        Q_EMIT postSetChatMenuButtonSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetChatPermissions(const OAIBotCommandScopeChat_chat_id &chat_id, const OAIChatPermissions &permissions, const ::tele_rest::OptionalParam<bool> &use_independent_chat_permissions) {
    QString fullPath = QString(_serverConfigs["postSetChatPermissions"][_serverIndices.value("postSetChatPermissions")].URL()+"/setChatPermissions");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("permissions", ::tele_rest::toStringValue(permissions));
    }
    if (use_independent_chat_permissions.hasValue())
    {
        input.add_var("use_independent_chat_permissions", ::tele_rest::toStringValue(use_independent_chat_permissions.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetChatPermissionsCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetChatPermissionsCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetChatPermissionsResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetChatPermissionsSignal(output);
        Q_EMIT postSetChatPermissionsSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetChatPermissionsSignalE(output, error_type, error_str);
        Q_EMIT postSetChatPermissionsSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetChatPermissionsSignalError(output, error_type, error_str);
        Q_EMIT postSetChatPermissionsSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetChatPhoto(const OAISendMessageRequest_chat_id &chat_id, const QJsonValue &photo) {
    QString fullPath = QString(_serverConfigs["postSetChatPhoto"][_serverIndices.value("postSetChatPhoto")].URL()+"/setChatPhoto");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("photo", ::tele_rest::toStringValue(photo));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetChatPhotoCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetChatPhotoCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetChatPhotoResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetChatPhotoSignal(output);
        Q_EMIT postSetChatPhotoSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetChatPhotoSignalE(output, error_type, error_str);
        Q_EMIT postSetChatPhotoSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetChatPhotoSignalError(output, error_type, error_str);
        Q_EMIT postSetChatPhotoSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetChatStickerSet(const OAIBotCommandScopeChat_chat_id &chat_id, const QString &sticker_set_name) {
    QString fullPath = QString(_serverConfigs["postSetChatStickerSet"][_serverIndices.value("postSetChatStickerSet")].URL()+"/setChatStickerSet");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("sticker_set_name", ::tele_rest::toStringValue(sticker_set_name));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetChatStickerSetCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetChatStickerSetCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetChatStickerSetResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetChatStickerSetSignal(output);
        Q_EMIT postSetChatStickerSetSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetChatStickerSetSignalE(output, error_type, error_str);
        Q_EMIT postSetChatStickerSetSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetChatStickerSetSignalError(output, error_type, error_str);
        Q_EMIT postSetChatStickerSetSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetChatTitle(const OAISendMessageRequest_chat_id &chat_id, const QString &title) {
    QString fullPath = QString(_serverConfigs["postSetChatTitle"][_serverIndices.value("postSetChatTitle")].URL()+"/setChatTitle");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("title", ::tele_rest::toStringValue(title));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetChatTitleCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetChatTitleCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetChatTitleResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetChatTitleSignal(output);
        Q_EMIT postSetChatTitleSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetChatTitleSignalE(output, error_type, error_str);
        Q_EMIT postSetChatTitleSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetChatTitleSignalError(output, error_type, error_str);
        Q_EMIT postSetChatTitleSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetCustomEmojiStickerSetThumbnail(const QString &name, const ::tele_rest::OptionalParam<QString> &custom_emoji_id) {
    QString fullPath = QString(_serverConfigs["postSetCustomEmojiStickerSetThumbnail"][_serverIndices.value("postSetCustomEmojiStickerSetThumbnail")].URL()+"/setCustomEmojiStickerSetThumbnail");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("name", ::tele_rest::toStringValue(name));
    }
    if (custom_emoji_id.hasValue())
    {
        input.add_var("custom_emoji_id", ::tele_rest::toStringValue(custom_emoji_id.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetCustomEmojiStickerSetThumbnailCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetCustomEmojiStickerSetThumbnailCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetCustomEmojiStickerSetThumbnailResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetCustomEmojiStickerSetThumbnailSignal(output);
        Q_EMIT postSetCustomEmojiStickerSetThumbnailSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetCustomEmojiStickerSetThumbnailSignalE(output, error_type, error_str);
        Q_EMIT postSetCustomEmojiStickerSetThumbnailSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetCustomEmojiStickerSetThumbnailSignalError(output, error_type, error_str);
        Q_EMIT postSetCustomEmojiStickerSetThumbnailSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetGameScore(const qint32 &user_id, const qint32 &score, const ::tele_rest::OptionalParam<bool> &force, const ::tele_rest::OptionalParam<bool> &disable_edit_message, const ::tele_rest::OptionalParam<qint32> &chat_id, const ::tele_rest::OptionalParam<qint32> &message_id, const ::tele_rest::OptionalParam<QString> &inline_message_id) {
    QString fullPath = QString(_serverConfigs["postSetGameScore"][_serverIndices.value("postSetGameScore")].URL()+"/setGameScore");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id));
    }
    
    {
        input.add_var("score", ::tele_rest::toStringValue(score));
    }
    if (force.hasValue())
    {
        input.add_var("force", ::tele_rest::toStringValue(force.value()));
    }
    if (disable_edit_message.hasValue())
    {
        input.add_var("disable_edit_message", ::tele_rest::toStringValue(disable_edit_message.value()));
    }
    if (chat_id.hasValue())
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id.value()));
    }
    if (message_id.hasValue())
    {
        input.add_var("message_id", ::tele_rest::toStringValue(message_id.value()));
    }
    if (inline_message_id.hasValue())
    {
        input.add_var("inline_message_id", ::tele_rest::toStringValue(inline_message_id.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetGameScoreCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetGameScoreCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetGameScoreResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetGameScoreSignal(output);
        Q_EMIT postSetGameScoreSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetGameScoreSignalE(output, error_type, error_str);
        Q_EMIT postSetGameScoreSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetGameScoreSignalError(output, error_type, error_str);
        Q_EMIT postSetGameScoreSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetMessageReaction(const OAISendMessageRequest_chat_id &chat_id, const qint32 &message_id, const ::tele_rest::OptionalParam<QList<OAIReactionType>> &reaction, const ::tele_rest::OptionalParam<bool> &is_big) {
    QString fullPath = QString(_serverConfigs["postSetMessageReaction"][_serverIndices.value("postSetMessageReaction")].URL()+"/setMessageReaction");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("message_id", ::tele_rest::toStringValue(message_id));
    }
    if (reaction.hasValue())
    {
        input.add_var("reaction", ::tele_rest::toStringValue(reaction.value()));
    }
    if (is_big.hasValue())
    {
        input.add_var("is_big", ::tele_rest::toStringValue(is_big.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetMessageReactionCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetMessageReactionCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetMessageReactionResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetMessageReactionSignal(output);
        Q_EMIT postSetMessageReactionSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetMessageReactionSignalE(output, error_type, error_str);
        Q_EMIT postSetMessageReactionSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetMessageReactionSignalError(output, error_type, error_str);
        Q_EMIT postSetMessageReactionSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetMyCommands(const QList<OAIBotCommand> &commands, const ::tele_rest::OptionalParam<OAIBotCommandScope> &scope, const ::tele_rest::OptionalParam<QString> &language_code) {
    QString fullPath = QString(_serverConfigs["postSetMyCommands"][_serverIndices.value("postSetMyCommands")].URL()+"/setMyCommands");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("commands", ::tele_rest::toStringValue(commands));
    }
    if (scope.hasValue())
    {
        input.add_var("scope", ::tele_rest::toStringValue(scope.value()));
    }
    if (language_code.hasValue())
    {
        input.add_var("language_code", ::tele_rest::toStringValue(language_code.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetMyCommandsCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetMyCommandsCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetMyCommandsResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetMyCommandsSignal(output);
        Q_EMIT postSetMyCommandsSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetMyCommandsSignalE(output, error_type, error_str);
        Q_EMIT postSetMyCommandsSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetMyCommandsSignalError(output, error_type, error_str);
        Q_EMIT postSetMyCommandsSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetMyDefaultAdministratorRights(const ::tele_rest::OptionalParam<OAIChatAdministratorRights> &rights, const ::tele_rest::OptionalParam<bool> &for_channels) {
    QString fullPath = QString(_serverConfigs["postSetMyDefaultAdministratorRights"][_serverIndices.value("postSetMyDefaultAdministratorRights")].URL()+"/setMyDefaultAdministratorRights");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (rights.hasValue())
    {
        input.add_var("rights", ::tele_rest::toStringValue(rights.value()));
    }
    if (for_channels.hasValue())
    {
        input.add_var("for_channels", ::tele_rest::toStringValue(for_channels.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetMyDefaultAdministratorRightsCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetMyDefaultAdministratorRightsCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetMyDefaultAdministratorRightsResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetMyDefaultAdministratorRightsSignal(output);
        Q_EMIT postSetMyDefaultAdministratorRightsSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetMyDefaultAdministratorRightsSignalE(output, error_type, error_str);
        Q_EMIT postSetMyDefaultAdministratorRightsSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetMyDefaultAdministratorRightsSignalError(output, error_type, error_str);
        Q_EMIT postSetMyDefaultAdministratorRightsSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetMyDescription(const ::tele_rest::OptionalParam<QString> &description, const ::tele_rest::OptionalParam<QString> &language_code) {
    QString fullPath = QString(_serverConfigs["postSetMyDescription"][_serverIndices.value("postSetMyDescription")].URL()+"/setMyDescription");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (description.hasValue())
    {
        input.add_var("description", ::tele_rest::toStringValue(description.value()));
    }
    if (language_code.hasValue())
    {
        input.add_var("language_code", ::tele_rest::toStringValue(language_code.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetMyDescriptionCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetMyDescriptionCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetMyDescriptionResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetMyDescriptionSignal(output);
        Q_EMIT postSetMyDescriptionSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetMyDescriptionSignalE(output, error_type, error_str);
        Q_EMIT postSetMyDescriptionSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetMyDescriptionSignalError(output, error_type, error_str);
        Q_EMIT postSetMyDescriptionSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetMyName(const ::tele_rest::OptionalParam<QString> &name, const ::tele_rest::OptionalParam<QString> &language_code) {
    QString fullPath = QString(_serverConfigs["postSetMyName"][_serverIndices.value("postSetMyName")].URL()+"/setMyName");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (name.hasValue())
    {
        input.add_var("name", ::tele_rest::toStringValue(name.value()));
    }
    if (language_code.hasValue())
    {
        input.add_var("language_code", ::tele_rest::toStringValue(language_code.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetMyNameCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetMyNameCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetMyNameResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetMyNameSignal(output);
        Q_EMIT postSetMyNameSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetMyNameSignalE(output, error_type, error_str);
        Q_EMIT postSetMyNameSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetMyNameSignalError(output, error_type, error_str);
        Q_EMIT postSetMyNameSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetMyShortDescription(const ::tele_rest::OptionalParam<QString> &short_description, const ::tele_rest::OptionalParam<QString> &language_code) {
    QString fullPath = QString(_serverConfigs["postSetMyShortDescription"][_serverIndices.value("postSetMyShortDescription")].URL()+"/setMyShortDescription");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (short_description.hasValue())
    {
        input.add_var("short_description", ::tele_rest::toStringValue(short_description.value()));
    }
    if (language_code.hasValue())
    {
        input.add_var("language_code", ::tele_rest::toStringValue(language_code.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetMyShortDescriptionCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetMyShortDescriptionCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetMyShortDescriptionResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetMyShortDescriptionSignal(output);
        Q_EMIT postSetMyShortDescriptionSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetMyShortDescriptionSignalE(output, error_type, error_str);
        Q_EMIT postSetMyShortDescriptionSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetMyShortDescriptionSignalError(output, error_type, error_str);
        Q_EMIT postSetMyShortDescriptionSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetPassportDataErrors(const qint32 &user_id, const QList<OAIPassportElementError> &errors) {
    QString fullPath = QString(_serverConfigs["postSetPassportDataErrors"][_serverIndices.value("postSetPassportDataErrors")].URL()+"/setPassportDataErrors");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id));
    }
    
    {
        input.add_var("errors", ::tele_rest::toStringValue(errors));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetPassportDataErrorsCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetPassportDataErrorsCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetPassportDataErrorsResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetPassportDataErrorsSignal(output);
        Q_EMIT postSetPassportDataErrorsSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetPassportDataErrorsSignalE(output, error_type, error_str);
        Q_EMIT postSetPassportDataErrorsSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetPassportDataErrorsSignalError(output, error_type, error_str);
        Q_EMIT postSetPassportDataErrorsSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetStickerEmojiList(const QString &sticker, const QList<QString> &emoji_list) {
    QString fullPath = QString(_serverConfigs["postSetStickerEmojiList"][_serverIndices.value("postSetStickerEmojiList")].URL()+"/setStickerEmojiList");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("sticker", ::tele_rest::toStringValue(sticker));
    }
    
    {
        input.add_var("emoji_list", ::tele_rest::toStringValue(emoji_list));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetStickerEmojiListCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetStickerEmojiListCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetStickerEmojiListResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetStickerEmojiListSignal(output);
        Q_EMIT postSetStickerEmojiListSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetStickerEmojiListSignalE(output, error_type, error_str);
        Q_EMIT postSetStickerEmojiListSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetStickerEmojiListSignalError(output, error_type, error_str);
        Q_EMIT postSetStickerEmojiListSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetStickerKeywords(const QString &sticker, const ::tele_rest::OptionalParam<QList<QString>> &keywords) {
    QString fullPath = QString(_serverConfigs["postSetStickerKeywords"][_serverIndices.value("postSetStickerKeywords")].URL()+"/setStickerKeywords");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("sticker", ::tele_rest::toStringValue(sticker));
    }
    if (keywords.hasValue())
    {
        input.add_var("keywords", ::tele_rest::toStringValue(keywords.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetStickerKeywordsCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetStickerKeywordsCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetStickerKeywordsResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetStickerKeywordsSignal(output);
        Q_EMIT postSetStickerKeywordsSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetStickerKeywordsSignalE(output, error_type, error_str);
        Q_EMIT postSetStickerKeywordsSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetStickerKeywordsSignalError(output, error_type, error_str);
        Q_EMIT postSetStickerKeywordsSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetStickerMaskPosition(const QString &sticker, const ::tele_rest::OptionalParam<OAIMaskPosition> &mask_position) {
    QString fullPath = QString(_serverConfigs["postSetStickerMaskPosition"][_serverIndices.value("postSetStickerMaskPosition")].URL()+"/setStickerMaskPosition");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("sticker", ::tele_rest::toStringValue(sticker));
    }
    if (mask_position.hasValue())
    {
        input.add_var("mask_position", ::tele_rest::toStringValue(mask_position.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetStickerMaskPositionCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetStickerMaskPositionCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetStickerMaskPositionResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetStickerMaskPositionSignal(output);
        Q_EMIT postSetStickerMaskPositionSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetStickerMaskPositionSignalE(output, error_type, error_str);
        Q_EMIT postSetStickerMaskPositionSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetStickerMaskPositionSignalError(output, error_type, error_str);
        Q_EMIT postSetStickerMaskPositionSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetStickerPositionInSet(const QString &sticker, const qint32 &position) {
    QString fullPath = QString(_serverConfigs["postSetStickerPositionInSet"][_serverIndices.value("postSetStickerPositionInSet")].URL()+"/setStickerPositionInSet");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("sticker", ::tele_rest::toStringValue(sticker));
    }
    
    {
        input.add_var("position", ::tele_rest::toStringValue(position));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetStickerPositionInSetCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetStickerPositionInSetCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetStickerPositionInSetResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetStickerPositionInSetSignal(output);
        Q_EMIT postSetStickerPositionInSetSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetStickerPositionInSetSignalE(output, error_type, error_str);
        Q_EMIT postSetStickerPositionInSetSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetStickerPositionInSetSignalError(output, error_type, error_str);
        Q_EMIT postSetStickerPositionInSetSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetStickerSetThumbnail(const QString &name, const qint32 &user_id, const QString &format, const ::tele_rest::OptionalParam<QString> &thumbnail) {
    QString fullPath = QString(_serverConfigs["postSetStickerSetThumbnail"][_serverIndices.value("postSetStickerSetThumbnail")].URL()+"/setStickerSetThumbnail");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("name", ::tele_rest::toStringValue(name));
    }
    
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id));
    }
    if (thumbnail.hasValue())
    {
        input.add_var("thumbnail", ::tele_rest::toStringValue(thumbnail.value()));
    }
    
    {
        input.add_var("format", ::tele_rest::toStringValue(format));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetStickerSetThumbnailCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetStickerSetThumbnailCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetStickerSetThumbnailResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetStickerSetThumbnailSignal(output);
        Q_EMIT postSetStickerSetThumbnailSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetStickerSetThumbnailSignalE(output, error_type, error_str);
        Q_EMIT postSetStickerSetThumbnailSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetStickerSetThumbnailSignalError(output, error_type, error_str);
        Q_EMIT postSetStickerSetThumbnailSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetStickerSetTitle(const QString &name, const QString &title) {
    QString fullPath = QString(_serverConfigs["postSetStickerSetTitle"][_serverIndices.value("postSetStickerSetTitle")].URL()+"/setStickerSetTitle");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("name", ::tele_rest::toStringValue(name));
    }
    
    {
        input.add_var("title", ::tele_rest::toStringValue(title));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetStickerSetTitleCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetStickerSetTitleCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetStickerSetTitleResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetStickerSetTitleSignal(output);
        Q_EMIT postSetStickerSetTitleSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetStickerSetTitleSignalE(output, error_type, error_str);
        Q_EMIT postSetStickerSetTitleSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetStickerSetTitleSignalError(output, error_type, error_str);
        Q_EMIT postSetStickerSetTitleSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetUserEmojiStatus(const qint32 &user_id, const ::tele_rest::OptionalParam<QString> &emoji_status_custom_emoji_id, const ::tele_rest::OptionalParam<qint32> &emoji_status_expiration_date) {
    QString fullPath = QString(_serverConfigs["postSetUserEmojiStatus"][_serverIndices.value("postSetUserEmojiStatus")].URL()+"/setUserEmojiStatus");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id));
    }
    if (emoji_status_custom_emoji_id.hasValue())
    {
        input.add_var("emoji_status_custom_emoji_id", ::tele_rest::toStringValue(emoji_status_custom_emoji_id.value()));
    }
    if (emoji_status_expiration_date.hasValue())
    {
        input.add_var("emoji_status_expiration_date", ::tele_rest::toStringValue(emoji_status_expiration_date.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetUserEmojiStatusCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetUserEmojiStatusCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetUserEmojiStatusResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetUserEmojiStatusSignal(output);
        Q_EMIT postSetUserEmojiStatusSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetUserEmojiStatusSignalE(output, error_type, error_str);
        Q_EMIT postSetUserEmojiStatusSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetUserEmojiStatusSignalError(output, error_type, error_str);
        Q_EMIT postSetUserEmojiStatusSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postSetWebhook(const QString &url, const ::tele_rest::OptionalParam<QJsonValue> &certificate, const ::tele_rest::OptionalParam<QString> &ip_address, const ::tele_rest::OptionalParam<qint32> &max_connections, const ::tele_rest::OptionalParam<QList<QString>> &allowed_updates, const ::tele_rest::OptionalParam<bool> &drop_pending_updates, const ::tele_rest::OptionalParam<QString> &secret_token) {
    QString fullPath = QString(_serverConfigs["postSetWebhook"][_serverIndices.value("postSetWebhook")].URL()+"/setWebhook");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("url", ::tele_rest::toStringValue(url));
    }
    if (certificate.hasValue())
    {
        input.add_var("certificate", ::tele_rest::toStringValue(certificate.value()));
    }
    if (ip_address.hasValue())
    {
        input.add_var("ip_address", ::tele_rest::toStringValue(ip_address.value()));
    }
    if (max_connections.hasValue())
    {
        input.add_var("max_connections", ::tele_rest::toStringValue(max_connections.value()));
    }
    if (allowed_updates.hasValue())
    {
        input.add_var("allowed_updates", ::tele_rest::toStringValue(allowed_updates.value()));
    }
    if (drop_pending_updates.hasValue())
    {
        input.add_var("drop_pending_updates", ::tele_rest::toStringValue(drop_pending_updates.value()));
    }
    if (secret_token.hasValue())
    {
        input.add_var("secret_token", ::tele_rest::toStringValue(secret_token.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postSetWebhookCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postSetWebhookCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAISetWebhookResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postSetWebhookSignal(output);
        Q_EMIT postSetWebhookSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postSetWebhookSignalE(output, error_type, error_str);
        Q_EMIT postSetWebhookSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postSetWebhookSignalError(output, error_type, error_str);
        Q_EMIT postSetWebhookSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postStopMessageLiveLocation(const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<OAIEditMessageTextRequest_chat_id> &chat_id, const ::tele_rest::OptionalParam<qint32> &message_id, const ::tele_rest::OptionalParam<QString> &inline_message_id, const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["postStopMessageLiveLocation"][_serverIndices.value("postStopMessageLiveLocation")].URL()+"/stopMessageLiveLocation");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    if (chat_id.hasValue())
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id.value()));
    }
    if (message_id.hasValue())
    {
        input.add_var("message_id", ::tele_rest::toStringValue(message_id.value()));
    }
    if (inline_message_id.hasValue())
    {
        input.add_var("inline_message_id", ::tele_rest::toStringValue(inline_message_id.value()));
    }
    if (reply_markup.hasValue())
    {
        input.add_var("reply_markup", ::tele_rest::toStringValue(reply_markup.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postStopMessageLiveLocationCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postStopMessageLiveLocationCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIStopMessageLiveLocationResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postStopMessageLiveLocationSignal(output);
        Q_EMIT postStopMessageLiveLocationSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postStopMessageLiveLocationSignalE(output, error_type, error_str);
        Q_EMIT postStopMessageLiveLocationSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postStopMessageLiveLocationSignalError(output, error_type, error_str);
        Q_EMIT postStopMessageLiveLocationSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postStopPoll(const OAISendMessageRequest_chat_id &chat_id, const qint32 &message_id, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["postStopPoll"][_serverIndices.value("postStopPoll")].URL()+"/stopPoll");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("message_id", ::tele_rest::toStringValue(message_id));
    }
    if (reply_markup.hasValue())
    {
        input.add_var("reply_markup", ::tele_rest::toStringValue(reply_markup.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postStopPollCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postStopPollCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIStopPollResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postStopPollSignal(output);
        Q_EMIT postStopPollSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postStopPollSignalE(output, error_type, error_str);
        Q_EMIT postStopPollSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postStopPollSignalError(output, error_type, error_str);
        Q_EMIT postStopPollSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postTransferBusinessAccountStars(const QString &business_connection_id, const qint32 &star_count) {
    QString fullPath = QString(_serverConfigs["postTransferBusinessAccountStars"][_serverIndices.value("postTransferBusinessAccountStars")].URL()+"/transferBusinessAccountStars");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id));
    }
    
    {
        input.add_var("star_count", ::tele_rest::toStringValue(star_count));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postTransferBusinessAccountStarsCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postTransferBusinessAccountStarsCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAITransferBusinessAccountStarsResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postTransferBusinessAccountStarsSignal(output);
        Q_EMIT postTransferBusinessAccountStarsSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postTransferBusinessAccountStarsSignalE(output, error_type, error_str);
        Q_EMIT postTransferBusinessAccountStarsSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postTransferBusinessAccountStarsSignalError(output, error_type, error_str);
        Q_EMIT postTransferBusinessAccountStarsSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postTransferGift(const QString &business_connection_id, const QString &owned_gift_id, const qint32 &new_owner_chat_id, const ::tele_rest::OptionalParam<qint32> &star_count) {
    QString fullPath = QString(_serverConfigs["postTransferGift"][_serverIndices.value("postTransferGift")].URL()+"/transferGift");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id));
    }
    
    {
        input.add_var("owned_gift_id", ::tele_rest::toStringValue(owned_gift_id));
    }
    
    {
        input.add_var("new_owner_chat_id", ::tele_rest::toStringValue(new_owner_chat_id));
    }
    if (star_count.hasValue())
    {
        input.add_var("star_count", ::tele_rest::toStringValue(star_count.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postTransferGiftCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postTransferGiftCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAITransferGiftResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postTransferGiftSignal(output);
        Q_EMIT postTransferGiftSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postTransferGiftSignalE(output, error_type, error_str);
        Q_EMIT postTransferGiftSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postTransferGiftSignalError(output, error_type, error_str);
        Q_EMIT postTransferGiftSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postUnbanChatMember(const OAIBanChatMemberRequest_chat_id &chat_id, const qint32 &user_id, const ::tele_rest::OptionalParam<bool> &only_if_banned) {
    QString fullPath = QString(_serverConfigs["postUnbanChatMember"][_serverIndices.value("postUnbanChatMember")].URL()+"/unbanChatMember");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id));
    }
    if (only_if_banned.hasValue())
    {
        input.add_var("only_if_banned", ::tele_rest::toStringValue(only_if_banned.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postUnbanChatMemberCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postUnbanChatMemberCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIUnbanChatMemberResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postUnbanChatMemberSignal(output);
        Q_EMIT postUnbanChatMemberSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postUnbanChatMemberSignalE(output, error_type, error_str);
        Q_EMIT postUnbanChatMemberSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postUnbanChatMemberSignalError(output, error_type, error_str);
        Q_EMIT postUnbanChatMemberSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postUnbanChatSenderChat(const OAISendMessageRequest_chat_id &chat_id, const qint32 &sender_chat_id) {
    QString fullPath = QString(_serverConfigs["postUnbanChatSenderChat"][_serverIndices.value("postUnbanChatSenderChat")].URL()+"/unbanChatSenderChat");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("sender_chat_id", ::tele_rest::toStringValue(sender_chat_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postUnbanChatSenderChatCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postUnbanChatSenderChatCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIUnbanChatSenderChatResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postUnbanChatSenderChatSignal(output);
        Q_EMIT postUnbanChatSenderChatSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postUnbanChatSenderChatSignalE(output, error_type, error_str);
        Q_EMIT postUnbanChatSenderChatSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postUnbanChatSenderChatSignalError(output, error_type, error_str);
        Q_EMIT postUnbanChatSenderChatSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postUnhideGeneralForumTopic(const OAIBotCommandScopeChat_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["postUnhideGeneralForumTopic"][_serverIndices.value("postUnhideGeneralForumTopic")].URL()+"/unhideGeneralForumTopic");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postUnhideGeneralForumTopicCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postUnhideGeneralForumTopicCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIUnhideGeneralForumTopicResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postUnhideGeneralForumTopicSignal(output);
        Q_EMIT postUnhideGeneralForumTopicSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postUnhideGeneralForumTopicSignalE(output, error_type, error_str);
        Q_EMIT postUnhideGeneralForumTopicSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postUnhideGeneralForumTopicSignalError(output, error_type, error_str);
        Q_EMIT postUnhideGeneralForumTopicSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postUnpinAllChatMessages(const OAISendMessageRequest_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["postUnpinAllChatMessages"][_serverIndices.value("postUnpinAllChatMessages")].URL()+"/unpinAllChatMessages");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postUnpinAllChatMessagesCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postUnpinAllChatMessagesCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIUnpinAllChatMessagesResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postUnpinAllChatMessagesSignal(output);
        Q_EMIT postUnpinAllChatMessagesSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postUnpinAllChatMessagesSignalE(output, error_type, error_str);
        Q_EMIT postUnpinAllChatMessagesSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postUnpinAllChatMessagesSignalError(output, error_type, error_str);
        Q_EMIT postUnpinAllChatMessagesSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postUnpinAllForumTopicMessages(const OAIBotCommandScopeChat_chat_id &chat_id, const qint32 &message_thread_id) {
    QString fullPath = QString(_serverConfigs["postUnpinAllForumTopicMessages"][_serverIndices.value("postUnpinAllForumTopicMessages")].URL()+"/unpinAllForumTopicMessages");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    
    {
        input.add_var("message_thread_id", ::tele_rest::toStringValue(message_thread_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postUnpinAllForumTopicMessagesCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postUnpinAllForumTopicMessagesCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIUnpinAllForumTopicMessagesResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postUnpinAllForumTopicMessagesSignal(output);
        Q_EMIT postUnpinAllForumTopicMessagesSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postUnpinAllForumTopicMessagesSignalE(output, error_type, error_str);
        Q_EMIT postUnpinAllForumTopicMessagesSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postUnpinAllForumTopicMessagesSignalError(output, error_type, error_str);
        Q_EMIT postUnpinAllForumTopicMessagesSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postUnpinAllGeneralForumTopicMessages(const OAIBotCommandScopeChat_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["postUnpinAllGeneralForumTopicMessages"][_serverIndices.value("postUnpinAllGeneralForumTopicMessages")].URL()+"/unpinAllGeneralForumTopicMessages");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postUnpinAllGeneralForumTopicMessagesCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postUnpinAllGeneralForumTopicMessagesCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIUnpinAllGeneralForumTopicMessagesResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postUnpinAllGeneralForumTopicMessagesSignal(output);
        Q_EMIT postUnpinAllGeneralForumTopicMessagesSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postUnpinAllGeneralForumTopicMessagesSignalE(output, error_type, error_str);
        Q_EMIT postUnpinAllGeneralForumTopicMessagesSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postUnpinAllGeneralForumTopicMessagesSignalError(output, error_type, error_str);
        Q_EMIT postUnpinAllGeneralForumTopicMessagesSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postUnpinChatMessage(const OAISendMessageRequest_chat_id &chat_id, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_id) {
    QString fullPath = QString(_serverConfigs["postUnpinChatMessage"][_serverIndices.value("postUnpinChatMessage")].URL()+"/unpinChatMessage");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    if (business_connection_id.hasValue())
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id.value()));
    }
    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (message_id.hasValue())
    {
        input.add_var("message_id", ::tele_rest::toStringValue(message_id.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postUnpinChatMessageCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postUnpinChatMessageCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIUnpinChatMessageResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postUnpinChatMessageSignal(output);
        Q_EMIT postUnpinChatMessageSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postUnpinChatMessageSignalE(output, error_type, error_str);
        Q_EMIT postUnpinChatMessageSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postUnpinChatMessageSignalError(output, error_type, error_str);
        Q_EMIT postUnpinChatMessageSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postUpgradeGift(const QString &business_connection_id, const QString &owned_gift_id, const ::tele_rest::OptionalParam<bool> &keep_original_details, const ::tele_rest::OptionalParam<qint32> &star_count) {
    QString fullPath = QString(_serverConfigs["postUpgradeGift"][_serverIndices.value("postUpgradeGift")].URL()+"/upgradeGift");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("business_connection_id", ::tele_rest::toStringValue(business_connection_id));
    }
    
    {
        input.add_var("owned_gift_id", ::tele_rest::toStringValue(owned_gift_id));
    }
    if (keep_original_details.hasValue())
    {
        input.add_var("keep_original_details", ::tele_rest::toStringValue(keep_original_details.value()));
    }
    if (star_count.hasValue())
    {
        input.add_var("star_count", ::tele_rest::toStringValue(star_count.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postUpgradeGiftCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postUpgradeGiftCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIUpgradeGiftResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postUpgradeGiftSignal(output);
        Q_EMIT postUpgradeGiftSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postUpgradeGiftSignalE(output, error_type, error_str);
        Q_EMIT postUpgradeGiftSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postUpgradeGiftSignalError(output, error_type, error_str);
        Q_EMIT postUpgradeGiftSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postUploadStickerFile(const qint32 &user_id, const QJsonValue &sticker, const QString &sticker_format) {
    QString fullPath = QString(_serverConfigs["postUploadStickerFile"][_serverIndices.value("postUploadStickerFile")].URL()+"/uploadStickerFile");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id));
    }
    
    {
        input.add_var("sticker", ::tele_rest::toStringValue(sticker));
    }
    
    {
        input.add_var("sticker_format", ::tele_rest::toStringValue(sticker_format));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postUploadStickerFileCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postUploadStickerFileCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIUploadStickerFileResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postUploadStickerFileSignal(output);
        Q_EMIT postUploadStickerFileSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postUploadStickerFileSignalE(output, error_type, error_str);
        Q_EMIT postUploadStickerFileSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postUploadStickerFileSignalError(output, error_type, error_str);
        Q_EMIT postUploadStickerFileSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postVerifyChat(const OAISendMessageRequest_chat_id &chat_id, const ::tele_rest::OptionalParam<QString> &custom_description) {
    QString fullPath = QString(_serverConfigs["postVerifyChat"][_serverIndices.value("postVerifyChat")].URL()+"/verifyChat");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("chat_id", ::tele_rest::toStringValue(chat_id));
    }
    if (custom_description.hasValue())
    {
        input.add_var("custom_description", ::tele_rest::toStringValue(custom_description.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postVerifyChatCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postVerifyChatCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIVerifyChatResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postVerifyChatSignal(output);
        Q_EMIT postVerifyChatSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postVerifyChatSignalE(output, error_type, error_str);
        Q_EMIT postVerifyChatSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postVerifyChatSignalError(output, error_type, error_str);
        Q_EMIT postVerifyChatSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postVerifyUser(const qint32 &user_id, const ::tele_rest::OptionalParam<QString> &custom_description) {
    QString fullPath = QString(_serverConfigs["postVerifyUser"][_serverIndices.value("postVerifyUser")].URL()+"/verifyUser");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    
    {
        input.add_var("user_id", ::tele_rest::toStringValue(user_id));
    }
    if (custom_description.hasValue())
    {
        input.add_var("custom_description", ::tele_rest::toStringValue(custom_description.value()));
    }

    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postVerifyUserCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postVerifyUserCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIVerifyUserResponse output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postVerifyUserSignal(output);
        Q_EMIT postVerifyUserSignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        Q_EMIT postVerifyUserSignalE(output, error_type, error_str);
        Q_EMIT postVerifyUserSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postVerifyUserSignalError(output, error_type, error_str);
        Q_EMIT postVerifyUserSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::tokenAvailable(){

    oauthToken token;
    switch (_OauthMethod) {
    case 1: //implicit flow
        token = _implicitFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _implicitFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    case 2: //authorization flow
        token = _authFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _authFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    case 3: //client credentials flow
        token = _credentialFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _credentialFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    case 4: //resource owner password flow
        token = _passwordFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _credentialFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    default:
        qDebug() << "No Oauth method set!";
        break;
    }
}
} // namespace tele_rest
