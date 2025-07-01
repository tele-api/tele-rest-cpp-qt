/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
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
    
    _serverConfigs.insert("addStickerToSetPost", defaultConf);
    _serverIndices.insert("addStickerToSetPost", 0);
    _serverConfigs.insert("answerCallbackQueryPost", defaultConf);
    _serverIndices.insert("answerCallbackQueryPost", 0);
    _serverConfigs.insert("answerInlineQueryPost", defaultConf);
    _serverIndices.insert("answerInlineQueryPost", 0);
    _serverConfigs.insert("answerPreCheckoutQueryPost", defaultConf);
    _serverIndices.insert("answerPreCheckoutQueryPost", 0);
    _serverConfigs.insert("answerShippingQueryPost", defaultConf);
    _serverIndices.insert("answerShippingQueryPost", 0);
    _serverConfigs.insert("answerWebAppQueryPost", defaultConf);
    _serverIndices.insert("answerWebAppQueryPost", 0);
    _serverConfigs.insert("approveChatJoinRequestPost", defaultConf);
    _serverIndices.insert("approveChatJoinRequestPost", 0);
    _serverConfigs.insert("banChatMemberPost", defaultConf);
    _serverIndices.insert("banChatMemberPost", 0);
    _serverConfigs.insert("banChatSenderChatPost", defaultConf);
    _serverIndices.insert("banChatSenderChatPost", 0);
    _serverConfigs.insert("closeForumTopicPost", defaultConf);
    _serverIndices.insert("closeForumTopicPost", 0);
    _serverConfigs.insert("closeGeneralForumTopicPost", defaultConf);
    _serverIndices.insert("closeGeneralForumTopicPost", 0);
    _serverConfigs.insert("closePost", defaultConf);
    _serverIndices.insert("closePost", 0);
    _serverConfigs.insert("convertGiftToStarsPost", defaultConf);
    _serverIndices.insert("convertGiftToStarsPost", 0);
    _serverConfigs.insert("copyMessagePost", defaultConf);
    _serverIndices.insert("copyMessagePost", 0);
    _serverConfigs.insert("copyMessagesPost", defaultConf);
    _serverIndices.insert("copyMessagesPost", 0);
    _serverConfigs.insert("createChatInviteLinkPost", defaultConf);
    _serverIndices.insert("createChatInviteLinkPost", 0);
    _serverConfigs.insert("createChatSubscriptionInviteLinkPost", defaultConf);
    _serverIndices.insert("createChatSubscriptionInviteLinkPost", 0);
    _serverConfigs.insert("createForumTopicPost", defaultConf);
    _serverIndices.insert("createForumTopicPost", 0);
    _serverConfigs.insert("createInvoiceLinkPost", defaultConf);
    _serverIndices.insert("createInvoiceLinkPost", 0);
    _serverConfigs.insert("createNewStickerSetPost", defaultConf);
    _serverIndices.insert("createNewStickerSetPost", 0);
    _serverConfigs.insert("declineChatJoinRequestPost", defaultConf);
    _serverIndices.insert("declineChatJoinRequestPost", 0);
    _serverConfigs.insert("deleteBusinessMessagesPost", defaultConf);
    _serverIndices.insert("deleteBusinessMessagesPost", 0);
    _serverConfigs.insert("deleteChatPhotoPost", defaultConf);
    _serverIndices.insert("deleteChatPhotoPost", 0);
    _serverConfigs.insert("deleteChatStickerSetPost", defaultConf);
    _serverIndices.insert("deleteChatStickerSetPost", 0);
    _serverConfigs.insert("deleteForumTopicPost", defaultConf);
    _serverIndices.insert("deleteForumTopicPost", 0);
    _serverConfigs.insert("deleteMessagePost", defaultConf);
    _serverIndices.insert("deleteMessagePost", 0);
    _serverConfigs.insert("deleteMessagesPost", defaultConf);
    _serverIndices.insert("deleteMessagesPost", 0);
    _serverConfigs.insert("deleteMyCommandsPost", defaultConf);
    _serverIndices.insert("deleteMyCommandsPost", 0);
    _serverConfigs.insert("deleteStickerFromSetPost", defaultConf);
    _serverIndices.insert("deleteStickerFromSetPost", 0);
    _serverConfigs.insert("deleteStickerSetPost", defaultConf);
    _serverIndices.insert("deleteStickerSetPost", 0);
    _serverConfigs.insert("deleteStoryPost", defaultConf);
    _serverIndices.insert("deleteStoryPost", 0);
    _serverConfigs.insert("deleteWebhookPost", defaultConf);
    _serverIndices.insert("deleteWebhookPost", 0);
    _serverConfigs.insert("editChatInviteLinkPost", defaultConf);
    _serverIndices.insert("editChatInviteLinkPost", 0);
    _serverConfigs.insert("editChatSubscriptionInviteLinkPost", defaultConf);
    _serverIndices.insert("editChatSubscriptionInviteLinkPost", 0);
    _serverConfigs.insert("editForumTopicPost", defaultConf);
    _serverIndices.insert("editForumTopicPost", 0);
    _serverConfigs.insert("editGeneralForumTopicPost", defaultConf);
    _serverIndices.insert("editGeneralForumTopicPost", 0);
    _serverConfigs.insert("editMessageCaptionPost", defaultConf);
    _serverIndices.insert("editMessageCaptionPost", 0);
    _serverConfigs.insert("editMessageLiveLocationPost", defaultConf);
    _serverIndices.insert("editMessageLiveLocationPost", 0);
    _serverConfigs.insert("editMessageMediaPost", defaultConf);
    _serverIndices.insert("editMessageMediaPost", 0);
    _serverConfigs.insert("editMessageReplyMarkupPost", defaultConf);
    _serverIndices.insert("editMessageReplyMarkupPost", 0);
    _serverConfigs.insert("editMessageTextPost", defaultConf);
    _serverIndices.insert("editMessageTextPost", 0);
    _serverConfigs.insert("editStoryPost", defaultConf);
    _serverIndices.insert("editStoryPost", 0);
    _serverConfigs.insert("editUserStarSubscriptionPost", defaultConf);
    _serverIndices.insert("editUserStarSubscriptionPost", 0);
    _serverConfigs.insert("exportChatInviteLinkPost", defaultConf);
    _serverIndices.insert("exportChatInviteLinkPost", 0);
    _serverConfigs.insert("forwardMessagePost", defaultConf);
    _serverIndices.insert("forwardMessagePost", 0);
    _serverConfigs.insert("forwardMessagesPost", defaultConf);
    _serverIndices.insert("forwardMessagesPost", 0);
    _serverConfigs.insert("getAvailableGiftsPost", defaultConf);
    _serverIndices.insert("getAvailableGiftsPost", 0);
    _serverConfigs.insert("getBusinessAccountGiftsPost", defaultConf);
    _serverIndices.insert("getBusinessAccountGiftsPost", 0);
    _serverConfigs.insert("getBusinessAccountStarBalancePost", defaultConf);
    _serverIndices.insert("getBusinessAccountStarBalancePost", 0);
    _serverConfigs.insert("getBusinessConnectionPost", defaultConf);
    _serverIndices.insert("getBusinessConnectionPost", 0);
    _serverConfigs.insert("getChatAdministratorsPost", defaultConf);
    _serverIndices.insert("getChatAdministratorsPost", 0);
    _serverConfigs.insert("getChatMemberCountPost", defaultConf);
    _serverIndices.insert("getChatMemberCountPost", 0);
    _serverConfigs.insert("getChatMemberPost", defaultConf);
    _serverIndices.insert("getChatMemberPost", 0);
    _serverConfigs.insert("getChatMenuButtonPost", defaultConf);
    _serverIndices.insert("getChatMenuButtonPost", 0);
    _serverConfigs.insert("getChatPost", defaultConf);
    _serverIndices.insert("getChatPost", 0);
    _serverConfigs.insert("getCustomEmojiStickersPost", defaultConf);
    _serverIndices.insert("getCustomEmojiStickersPost", 0);
    _serverConfigs.insert("getFilePost", defaultConf);
    _serverIndices.insert("getFilePost", 0);
    _serverConfigs.insert("getForumTopicIconStickersPost", defaultConf);
    _serverIndices.insert("getForumTopicIconStickersPost", 0);
    _serverConfigs.insert("getGameHighScoresPost", defaultConf);
    _serverIndices.insert("getGameHighScoresPost", 0);
    _serverConfigs.insert("getMePost", defaultConf);
    _serverIndices.insert("getMePost", 0);
    _serverConfigs.insert("getMyCommandsPost", defaultConf);
    _serverIndices.insert("getMyCommandsPost", 0);
    _serverConfigs.insert("getMyDefaultAdministratorRightsPost", defaultConf);
    _serverIndices.insert("getMyDefaultAdministratorRightsPost", 0);
    _serverConfigs.insert("getMyDescriptionPost", defaultConf);
    _serverIndices.insert("getMyDescriptionPost", 0);
    _serverConfigs.insert("getMyNamePost", defaultConf);
    _serverIndices.insert("getMyNamePost", 0);
    _serverConfigs.insert("getMyShortDescriptionPost", defaultConf);
    _serverIndices.insert("getMyShortDescriptionPost", 0);
    _serverConfigs.insert("getStarTransactionsPost", defaultConf);
    _serverIndices.insert("getStarTransactionsPost", 0);
    _serverConfigs.insert("getStickerSetPost", defaultConf);
    _serverIndices.insert("getStickerSetPost", 0);
    _serverConfigs.insert("getUpdatesPost", defaultConf);
    _serverIndices.insert("getUpdatesPost", 0);
    _serverConfigs.insert("getUserChatBoostsPost", defaultConf);
    _serverIndices.insert("getUserChatBoostsPost", 0);
    _serverConfigs.insert("getUserProfilePhotosPost", defaultConf);
    _serverIndices.insert("getUserProfilePhotosPost", 0);
    _serverConfigs.insert("getWebhookInfoPost", defaultConf);
    _serverIndices.insert("getWebhookInfoPost", 0);
    _serverConfigs.insert("giftPremiumSubscriptionPost", defaultConf);
    _serverIndices.insert("giftPremiumSubscriptionPost", 0);
    _serverConfigs.insert("hideGeneralForumTopicPost", defaultConf);
    _serverIndices.insert("hideGeneralForumTopicPost", 0);
    _serverConfigs.insert("leaveChatPost", defaultConf);
    _serverIndices.insert("leaveChatPost", 0);
    _serverConfigs.insert("logOutPost", defaultConf);
    _serverIndices.insert("logOutPost", 0);
    _serverConfigs.insert("pinChatMessagePost", defaultConf);
    _serverIndices.insert("pinChatMessagePost", 0);
    _serverConfigs.insert("postStoryPost", defaultConf);
    _serverIndices.insert("postStoryPost", 0);
    _serverConfigs.insert("promoteChatMemberPost", defaultConf);
    _serverIndices.insert("promoteChatMemberPost", 0);
    _serverConfigs.insert("readBusinessMessagePost", defaultConf);
    _serverIndices.insert("readBusinessMessagePost", 0);
    _serverConfigs.insert("refundStarPaymentPost", defaultConf);
    _serverIndices.insert("refundStarPaymentPost", 0);
    _serverConfigs.insert("removeBusinessAccountProfilePhotoPost", defaultConf);
    _serverIndices.insert("removeBusinessAccountProfilePhotoPost", 0);
    _serverConfigs.insert("removeChatVerificationPost", defaultConf);
    _serverIndices.insert("removeChatVerificationPost", 0);
    _serverConfigs.insert("removeUserVerificationPost", defaultConf);
    _serverIndices.insert("removeUserVerificationPost", 0);
    _serverConfigs.insert("reopenForumTopicPost", defaultConf);
    _serverIndices.insert("reopenForumTopicPost", 0);
    _serverConfigs.insert("reopenGeneralForumTopicPost", defaultConf);
    _serverIndices.insert("reopenGeneralForumTopicPost", 0);
    _serverConfigs.insert("replaceStickerInSetPost", defaultConf);
    _serverIndices.insert("replaceStickerInSetPost", 0);
    _serverConfigs.insert("restrictChatMemberPost", defaultConf);
    _serverIndices.insert("restrictChatMemberPost", 0);
    _serverConfigs.insert("revokeChatInviteLinkPost", defaultConf);
    _serverIndices.insert("revokeChatInviteLinkPost", 0);
    _serverConfigs.insert("savePreparedInlineMessagePost", defaultConf);
    _serverIndices.insert("savePreparedInlineMessagePost", 0);
    _serverConfigs.insert("sendAnimationPost", defaultConf);
    _serverIndices.insert("sendAnimationPost", 0);
    _serverConfigs.insert("sendAudioPost", defaultConf);
    _serverIndices.insert("sendAudioPost", 0);
    _serverConfigs.insert("sendChatActionPost", defaultConf);
    _serverIndices.insert("sendChatActionPost", 0);
    _serverConfigs.insert("sendContactPost", defaultConf);
    _serverIndices.insert("sendContactPost", 0);
    _serverConfigs.insert("sendDicePost", defaultConf);
    _serverIndices.insert("sendDicePost", 0);
    _serverConfigs.insert("sendDocumentPost", defaultConf);
    _serverIndices.insert("sendDocumentPost", 0);
    _serverConfigs.insert("sendGamePost", defaultConf);
    _serverIndices.insert("sendGamePost", 0);
    _serverConfigs.insert("sendGiftPost", defaultConf);
    _serverIndices.insert("sendGiftPost", 0);
    _serverConfigs.insert("sendInvoicePost", defaultConf);
    _serverIndices.insert("sendInvoicePost", 0);
    _serverConfigs.insert("sendLocationPost", defaultConf);
    _serverIndices.insert("sendLocationPost", 0);
    _serverConfigs.insert("sendMediaGroupPost", defaultConf);
    _serverIndices.insert("sendMediaGroupPost", 0);
    _serverConfigs.insert("sendMessagePost", defaultConf);
    _serverIndices.insert("sendMessagePost", 0);
    _serverConfigs.insert("sendPaidMediaPost", defaultConf);
    _serverIndices.insert("sendPaidMediaPost", 0);
    _serverConfigs.insert("sendPhotoPost", defaultConf);
    _serverIndices.insert("sendPhotoPost", 0);
    _serverConfigs.insert("sendPollPost", defaultConf);
    _serverIndices.insert("sendPollPost", 0);
    _serverConfigs.insert("sendStickerPost", defaultConf);
    _serverIndices.insert("sendStickerPost", 0);
    _serverConfigs.insert("sendVenuePost", defaultConf);
    _serverIndices.insert("sendVenuePost", 0);
    _serverConfigs.insert("sendVideoNotePost", defaultConf);
    _serverIndices.insert("sendVideoNotePost", 0);
    _serverConfigs.insert("sendVideoPost", defaultConf);
    _serverIndices.insert("sendVideoPost", 0);
    _serverConfigs.insert("sendVoicePost", defaultConf);
    _serverIndices.insert("sendVoicePost", 0);
    _serverConfigs.insert("setBusinessAccountBioPost", defaultConf);
    _serverIndices.insert("setBusinessAccountBioPost", 0);
    _serverConfigs.insert("setBusinessAccountGiftSettingsPost", defaultConf);
    _serverIndices.insert("setBusinessAccountGiftSettingsPost", 0);
    _serverConfigs.insert("setBusinessAccountNamePost", defaultConf);
    _serverIndices.insert("setBusinessAccountNamePost", 0);
    _serverConfigs.insert("setBusinessAccountProfilePhotoPost", defaultConf);
    _serverIndices.insert("setBusinessAccountProfilePhotoPost", 0);
    _serverConfigs.insert("setBusinessAccountUsernamePost", defaultConf);
    _serverIndices.insert("setBusinessAccountUsernamePost", 0);
    _serverConfigs.insert("setChatAdministratorCustomTitlePost", defaultConf);
    _serverIndices.insert("setChatAdministratorCustomTitlePost", 0);
    _serverConfigs.insert("setChatDescriptionPost", defaultConf);
    _serverIndices.insert("setChatDescriptionPost", 0);
    _serverConfigs.insert("setChatMenuButtonPost", defaultConf);
    _serverIndices.insert("setChatMenuButtonPost", 0);
    _serverConfigs.insert("setChatPermissionsPost", defaultConf);
    _serverIndices.insert("setChatPermissionsPost", 0);
    _serverConfigs.insert("setChatPhotoPost", defaultConf);
    _serverIndices.insert("setChatPhotoPost", 0);
    _serverConfigs.insert("setChatStickerSetPost", defaultConf);
    _serverIndices.insert("setChatStickerSetPost", 0);
    _serverConfigs.insert("setChatTitlePost", defaultConf);
    _serverIndices.insert("setChatTitlePost", 0);
    _serverConfigs.insert("setCustomEmojiStickerSetThumbnailPost", defaultConf);
    _serverIndices.insert("setCustomEmojiStickerSetThumbnailPost", 0);
    _serverConfigs.insert("setGameScorePost", defaultConf);
    _serverIndices.insert("setGameScorePost", 0);
    _serverConfigs.insert("setMessageReactionPost", defaultConf);
    _serverIndices.insert("setMessageReactionPost", 0);
    _serverConfigs.insert("setMyCommandsPost", defaultConf);
    _serverIndices.insert("setMyCommandsPost", 0);
    _serverConfigs.insert("setMyDefaultAdministratorRightsPost", defaultConf);
    _serverIndices.insert("setMyDefaultAdministratorRightsPost", 0);
    _serverConfigs.insert("setMyDescriptionPost", defaultConf);
    _serverIndices.insert("setMyDescriptionPost", 0);
    _serverConfigs.insert("setMyNamePost", defaultConf);
    _serverIndices.insert("setMyNamePost", 0);
    _serverConfigs.insert("setMyShortDescriptionPost", defaultConf);
    _serverIndices.insert("setMyShortDescriptionPost", 0);
    _serverConfigs.insert("setPassportDataErrorsPost", defaultConf);
    _serverIndices.insert("setPassportDataErrorsPost", 0);
    _serverConfigs.insert("setStickerEmojiListPost", defaultConf);
    _serverIndices.insert("setStickerEmojiListPost", 0);
    _serverConfigs.insert("setStickerKeywordsPost", defaultConf);
    _serverIndices.insert("setStickerKeywordsPost", 0);
    _serverConfigs.insert("setStickerMaskPositionPost", defaultConf);
    _serverIndices.insert("setStickerMaskPositionPost", 0);
    _serverConfigs.insert("setStickerPositionInSetPost", defaultConf);
    _serverIndices.insert("setStickerPositionInSetPost", 0);
    _serverConfigs.insert("setStickerSetThumbnailPost", defaultConf);
    _serverIndices.insert("setStickerSetThumbnailPost", 0);
    _serverConfigs.insert("setStickerSetTitlePost", defaultConf);
    _serverIndices.insert("setStickerSetTitlePost", 0);
    _serverConfigs.insert("setUserEmojiStatusPost", defaultConf);
    _serverIndices.insert("setUserEmojiStatusPost", 0);
    _serverConfigs.insert("setWebhookPost", defaultConf);
    _serverIndices.insert("setWebhookPost", 0);
    _serverConfigs.insert("stopMessageLiveLocationPost", defaultConf);
    _serverIndices.insert("stopMessageLiveLocationPost", 0);
    _serverConfigs.insert("stopPollPost", defaultConf);
    _serverIndices.insert("stopPollPost", 0);
    _serverConfigs.insert("transferBusinessAccountStarsPost", defaultConf);
    _serverIndices.insert("transferBusinessAccountStarsPost", 0);
    _serverConfigs.insert("transferGiftPost", defaultConf);
    _serverIndices.insert("transferGiftPost", 0);
    _serverConfigs.insert("unbanChatMemberPost", defaultConf);
    _serverIndices.insert("unbanChatMemberPost", 0);
    _serverConfigs.insert("unbanChatSenderChatPost", defaultConf);
    _serverIndices.insert("unbanChatSenderChatPost", 0);
    _serverConfigs.insert("unhideGeneralForumTopicPost", defaultConf);
    _serverIndices.insert("unhideGeneralForumTopicPost", 0);
    _serverConfigs.insert("unpinAllChatMessagesPost", defaultConf);
    _serverIndices.insert("unpinAllChatMessagesPost", 0);
    _serverConfigs.insert("unpinAllForumTopicMessagesPost", defaultConf);
    _serverIndices.insert("unpinAllForumTopicMessagesPost", 0);
    _serverConfigs.insert("unpinAllGeneralForumTopicMessagesPost", defaultConf);
    _serverIndices.insert("unpinAllGeneralForumTopicMessagesPost", 0);
    _serverConfigs.insert("unpinChatMessagePost", defaultConf);
    _serverIndices.insert("unpinChatMessagePost", 0);
    _serverConfigs.insert("upgradeGiftPost", defaultConf);
    _serverIndices.insert("upgradeGiftPost", 0);
    _serverConfigs.insert("uploadStickerFilePost", defaultConf);
    _serverIndices.insert("uploadStickerFilePost", 0);
    _serverConfigs.insert("verifyChatPost", defaultConf);
    _serverIndices.insert("verifyChatPost", 0);
    _serverConfigs.insert("verifyUserPost", defaultConf);
    _serverIndices.insert("verifyUserPost", 0);
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

void OAIDefaultApi::addStickerToSetPost(const qint32 &user_id, const QString &name, const OAIInputSticker &sticker) {
    QString fullPath = QString(_serverConfigs["addStickerToSetPost"][_serverIndices.value("addStickerToSetPost")].URL()+"/addStickerToSet");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::addStickerToSetPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::addStickerToSetPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT addStickerToSetPostSignal(output);
        Q_EMIT addStickerToSetPostSignalFull(worker, output);
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

        Q_EMIT addStickerToSetPostSignalE(output, error_type, error_str);
        Q_EMIT addStickerToSetPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT addStickerToSetPostSignalError(output, error_type, error_str);
        Q_EMIT addStickerToSetPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::answerCallbackQueryPost(const QString &callback_query_id, const ::tele_rest::OptionalParam<QString> &text, const ::tele_rest::OptionalParam<bool> &show_alert, const ::tele_rest::OptionalParam<QString> &url, const ::tele_rest::OptionalParam<qint32> &cache_time) {
    QString fullPath = QString(_serverConfigs["answerCallbackQueryPost"][_serverIndices.value("answerCallbackQueryPost")].URL()+"/answerCallbackQuery");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::answerCallbackQueryPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::answerCallbackQueryPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT answerCallbackQueryPostSignal(output);
        Q_EMIT answerCallbackQueryPostSignalFull(worker, output);
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

        Q_EMIT answerCallbackQueryPostSignalE(output, error_type, error_str);
        Q_EMIT answerCallbackQueryPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT answerCallbackQueryPostSignalError(output, error_type, error_str);
        Q_EMIT answerCallbackQueryPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::answerInlineQueryPost(const QString &inline_query_id, const QList<OAIInlineQueryResult> &results, const ::tele_rest::OptionalParam<qint32> &cache_time, const ::tele_rest::OptionalParam<bool> &is_personal, const ::tele_rest::OptionalParam<QString> &next_offset, const ::tele_rest::OptionalParam<OAIInlineQueryResultsButton> &button) {
    QString fullPath = QString(_serverConfigs["answerInlineQueryPost"][_serverIndices.value("answerInlineQueryPost")].URL()+"/answerInlineQuery");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::answerInlineQueryPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::answerInlineQueryPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT answerInlineQueryPostSignal(output);
        Q_EMIT answerInlineQueryPostSignalFull(worker, output);
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

        Q_EMIT answerInlineQueryPostSignalE(output, error_type, error_str);
        Q_EMIT answerInlineQueryPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT answerInlineQueryPostSignalError(output, error_type, error_str);
        Q_EMIT answerInlineQueryPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::answerPreCheckoutQueryPost(const QString &pre_checkout_query_id, const bool &ok, const ::tele_rest::OptionalParam<QString> &error_message) {
    QString fullPath = QString(_serverConfigs["answerPreCheckoutQueryPost"][_serverIndices.value("answerPreCheckoutQueryPost")].URL()+"/answerPreCheckoutQuery");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::answerPreCheckoutQueryPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::answerPreCheckoutQueryPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT answerPreCheckoutQueryPostSignal(output);
        Q_EMIT answerPreCheckoutQueryPostSignalFull(worker, output);
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

        Q_EMIT answerPreCheckoutQueryPostSignalE(output, error_type, error_str);
        Q_EMIT answerPreCheckoutQueryPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT answerPreCheckoutQueryPostSignalError(output, error_type, error_str);
        Q_EMIT answerPreCheckoutQueryPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::answerShippingQueryPost(const QString &shipping_query_id, const bool &ok, const ::tele_rest::OptionalParam<QList<OAIShippingOption>> &shipping_options, const ::tele_rest::OptionalParam<QString> &error_message) {
    QString fullPath = QString(_serverConfigs["answerShippingQueryPost"][_serverIndices.value("answerShippingQueryPost")].URL()+"/answerShippingQuery");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::answerShippingQueryPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::answerShippingQueryPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT answerShippingQueryPostSignal(output);
        Q_EMIT answerShippingQueryPostSignalFull(worker, output);
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

        Q_EMIT answerShippingQueryPostSignalE(output, error_type, error_str);
        Q_EMIT answerShippingQueryPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT answerShippingQueryPostSignalError(output, error_type, error_str);
        Q_EMIT answerShippingQueryPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::answerWebAppQueryPost(const QString &web_app_query_id, const OAIInlineQueryResult &result) {
    QString fullPath = QString(_serverConfigs["answerWebAppQueryPost"][_serverIndices.value("answerWebAppQueryPost")].URL()+"/answerWebAppQuery");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::answerWebAppQueryPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::answerWebAppQueryPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_answerWebAppQuery_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT answerWebAppQueryPostSignal(output);
        Q_EMIT answerWebAppQueryPostSignalFull(worker, output);
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

        Q_EMIT answerWebAppQueryPostSignalE(output, error_type, error_str);
        Q_EMIT answerWebAppQueryPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT answerWebAppQueryPostSignalError(output, error_type, error_str);
        Q_EMIT answerWebAppQueryPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::approveChatJoinRequestPost(const OAI_sendMessage_post_request_chat_id &chat_id, const qint32 &user_id) {
    QString fullPath = QString(_serverConfigs["approveChatJoinRequestPost"][_serverIndices.value("approveChatJoinRequestPost")].URL()+"/approveChatJoinRequest");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::approveChatJoinRequestPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::approveChatJoinRequestPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT approveChatJoinRequestPostSignal(output);
        Q_EMIT approveChatJoinRequestPostSignalFull(worker, output);
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

        Q_EMIT approveChatJoinRequestPostSignalE(output, error_type, error_str);
        Q_EMIT approveChatJoinRequestPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT approveChatJoinRequestPostSignalError(output, error_type, error_str);
        Q_EMIT approveChatJoinRequestPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::banChatMemberPost(const OAI_banChatMember_post_request_chat_id &chat_id, const qint32 &user_id, const ::tele_rest::OptionalParam<qint32> &until_date, const ::tele_rest::OptionalParam<bool> &revoke_messages) {
    QString fullPath = QString(_serverConfigs["banChatMemberPost"][_serverIndices.value("banChatMemberPost")].URL()+"/banChatMember");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::banChatMemberPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::banChatMemberPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT banChatMemberPostSignal(output);
        Q_EMIT banChatMemberPostSignalFull(worker, output);
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

        Q_EMIT banChatMemberPostSignalE(output, error_type, error_str);
        Q_EMIT banChatMemberPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT banChatMemberPostSignalError(output, error_type, error_str);
        Q_EMIT banChatMemberPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::banChatSenderChatPost(const OAI_sendMessage_post_request_chat_id &chat_id, const qint32 &sender_chat_id) {
    QString fullPath = QString(_serverConfigs["banChatSenderChatPost"][_serverIndices.value("banChatSenderChatPost")].URL()+"/banChatSenderChat");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::banChatSenderChatPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::banChatSenderChatPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT banChatSenderChatPostSignal(output);
        Q_EMIT banChatSenderChatPostSignalFull(worker, output);
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

        Q_EMIT banChatSenderChatPostSignalE(output, error_type, error_str);
        Q_EMIT banChatSenderChatPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT banChatSenderChatPostSignalError(output, error_type, error_str);
        Q_EMIT banChatSenderChatPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::closeForumTopicPost(const OAI_restrictChatMember_post_request_chat_id &chat_id, const qint32 &message_thread_id) {
    QString fullPath = QString(_serverConfigs["closeForumTopicPost"][_serverIndices.value("closeForumTopicPost")].URL()+"/closeForumTopic");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::closeForumTopicPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::closeForumTopicPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT closeForumTopicPostSignal(output);
        Q_EMIT closeForumTopicPostSignalFull(worker, output);
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

        Q_EMIT closeForumTopicPostSignalE(output, error_type, error_str);
        Q_EMIT closeForumTopicPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT closeForumTopicPostSignalError(output, error_type, error_str);
        Q_EMIT closeForumTopicPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::closeGeneralForumTopicPost(const OAI_restrictChatMember_post_request_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["closeGeneralForumTopicPost"][_serverIndices.value("closeGeneralForumTopicPost")].URL()+"/closeGeneralForumTopic");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::closeGeneralForumTopicPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::closeGeneralForumTopicPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT closeGeneralForumTopicPostSignal(output);
        Q_EMIT closeGeneralForumTopicPostSignalFull(worker, output);
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

        Q_EMIT closeGeneralForumTopicPostSignalE(output, error_type, error_str);
        Q_EMIT closeGeneralForumTopicPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT closeGeneralForumTopicPostSignalError(output, error_type, error_str);
        Q_EMIT closeGeneralForumTopicPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::closePost() {
    QString fullPath = QString(_serverConfigs["closePost"][_serverIndices.value("closePost")].URL()+"/close");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::closePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::closePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT closePostSignal(output);
        Q_EMIT closePostSignalFull(worker, output);
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

        Q_EMIT closePostSignalE(output, error_type, error_str);
        Q_EMIT closePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT closePostSignalError(output, error_type, error_str);
        Q_EMIT closePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::convertGiftToStarsPost(const QString &business_connection_id, const QString &owned_gift_id) {
    QString fullPath = QString(_serverConfigs["convertGiftToStarsPost"][_serverIndices.value("convertGiftToStarsPost")].URL()+"/convertGiftToStars");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::convertGiftToStarsPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::convertGiftToStarsPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT convertGiftToStarsPostSignal(output);
        Q_EMIT convertGiftToStarsPostSignalFull(worker, output);
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

        Q_EMIT convertGiftToStarsPostSignalE(output, error_type, error_str);
        Q_EMIT convertGiftToStarsPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT convertGiftToStarsPostSignalError(output, error_type, error_str);
        Q_EMIT convertGiftToStarsPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::copyMessagePost(const OAI_sendMessage_post_request_chat_id &chat_id, const OAI_forwardMessage_post_request_from_chat_id &from_chat_id, const qint32 &message_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<qint32> &video_start_timestamp, const ::tele_rest::OptionalParam<QString> &caption, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities, const ::tele_rest::OptionalParam<bool> &show_caption_above_media, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["copyMessagePost"][_serverIndices.value("copyMessagePost")].URL()+"/copyMessage");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::copyMessagePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::copyMessagePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_copyMessage_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT copyMessagePostSignal(output);
        Q_EMIT copyMessagePostSignalFull(worker, output);
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

        Q_EMIT copyMessagePostSignalE(output, error_type, error_str);
        Q_EMIT copyMessagePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT copyMessagePostSignalError(output, error_type, error_str);
        Q_EMIT copyMessagePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::copyMessagesPost(const OAI_sendMessage_post_request_chat_id &chat_id, const OAI_forwardMessages_post_request_from_chat_id &from_chat_id, const QList<qint32> &message_ids, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &remove_caption) {
    QString fullPath = QString(_serverConfigs["copyMessagesPost"][_serverIndices.value("copyMessagesPost")].URL()+"/copyMessages");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::copyMessagesPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::copyMessagesPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_forwardMessages_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT copyMessagesPostSignal(output);
        Q_EMIT copyMessagesPostSignalFull(worker, output);
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

        Q_EMIT copyMessagesPostSignalE(output, error_type, error_str);
        Q_EMIT copyMessagesPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT copyMessagesPostSignalError(output, error_type, error_str);
        Q_EMIT copyMessagesPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::createChatInviteLinkPost(const OAI_sendMessage_post_request_chat_id &chat_id, const ::tele_rest::OptionalParam<QString> &name, const ::tele_rest::OptionalParam<qint32> &expire_date, const ::tele_rest::OptionalParam<qint32> &member_limit, const ::tele_rest::OptionalParam<bool> &creates_join_request) {
    QString fullPath = QString(_serverConfigs["createChatInviteLinkPost"][_serverIndices.value("createChatInviteLinkPost")].URL()+"/createChatInviteLink");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::createChatInviteLinkPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::createChatInviteLinkPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_createChatInviteLink_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT createChatInviteLinkPostSignal(output);
        Q_EMIT createChatInviteLinkPostSignalFull(worker, output);
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

        Q_EMIT createChatInviteLinkPostSignalE(output, error_type, error_str);
        Q_EMIT createChatInviteLinkPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT createChatInviteLinkPostSignalError(output, error_type, error_str);
        Q_EMIT createChatInviteLinkPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::createChatSubscriptionInviteLinkPost(const OAI_createChatSubscriptionInviteLink_post_request_chat_id &chat_id, const qint32 &subscription_period, const qint32 &subscription_price, const ::tele_rest::OptionalParam<QString> &name) {
    QString fullPath = QString(_serverConfigs["createChatSubscriptionInviteLinkPost"][_serverIndices.value("createChatSubscriptionInviteLinkPost")].URL()+"/createChatSubscriptionInviteLink");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::createChatSubscriptionInviteLinkPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::createChatSubscriptionInviteLinkPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_createChatInviteLink_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT createChatSubscriptionInviteLinkPostSignal(output);
        Q_EMIT createChatSubscriptionInviteLinkPostSignalFull(worker, output);
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

        Q_EMIT createChatSubscriptionInviteLinkPostSignalE(output, error_type, error_str);
        Q_EMIT createChatSubscriptionInviteLinkPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT createChatSubscriptionInviteLinkPostSignalError(output, error_type, error_str);
        Q_EMIT createChatSubscriptionInviteLinkPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::createForumTopicPost(const OAI_restrictChatMember_post_request_chat_id &chat_id, const QString &name, const ::tele_rest::OptionalParam<qint32> &icon_color, const ::tele_rest::OptionalParam<QString> &icon_custom_emoji_id) {
    QString fullPath = QString(_serverConfigs["createForumTopicPost"][_serverIndices.value("createForumTopicPost")].URL()+"/createForumTopic");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::createForumTopicPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::createForumTopicPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_createForumTopic_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT createForumTopicPostSignal(output);
        Q_EMIT createForumTopicPostSignalFull(worker, output);
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

        Q_EMIT createForumTopicPostSignalE(output, error_type, error_str);
        Q_EMIT createForumTopicPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT createForumTopicPostSignalError(output, error_type, error_str);
        Q_EMIT createForumTopicPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::createInvoiceLinkPost(const QString &title, const QString &description, const QString &payload, const QString &currency, const QList<OAILabeledPrice> &prices, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<QString> &provider_token, const ::tele_rest::OptionalParam<qint32> &subscription_period, const ::tele_rest::OptionalParam<qint32> &max_tip_amount, const ::tele_rest::OptionalParam<QList<qint32>> &suggested_tip_amounts, const ::tele_rest::OptionalParam<QString> &provider_data, const ::tele_rest::OptionalParam<QString> &photo_url, const ::tele_rest::OptionalParam<qint32> &photo_size, const ::tele_rest::OptionalParam<qint32> &photo_width, const ::tele_rest::OptionalParam<qint32> &photo_height, const ::tele_rest::OptionalParam<bool> &need_name, const ::tele_rest::OptionalParam<bool> &need_phone_number, const ::tele_rest::OptionalParam<bool> &need_email, const ::tele_rest::OptionalParam<bool> &need_shipping_address, const ::tele_rest::OptionalParam<bool> &send_phone_number_to_provider, const ::tele_rest::OptionalParam<bool> &send_email_to_provider, const ::tele_rest::OptionalParam<bool> &is_flexible) {
    QString fullPath = QString(_serverConfigs["createInvoiceLinkPost"][_serverIndices.value("createInvoiceLinkPost")].URL()+"/createInvoiceLink");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::createInvoiceLinkPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::createInvoiceLinkPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_exportChatInviteLink_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT createInvoiceLinkPostSignal(output);
        Q_EMIT createInvoiceLinkPostSignalFull(worker, output);
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

        Q_EMIT createInvoiceLinkPostSignalE(output, error_type, error_str);
        Q_EMIT createInvoiceLinkPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT createInvoiceLinkPostSignalError(output, error_type, error_str);
        Q_EMIT createInvoiceLinkPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::createNewStickerSetPost(const qint32 &user_id, const QString &name, const QString &title, const QList<OAIInputSticker> &stickers, const ::tele_rest::OptionalParam<QString> &sticker_type, const ::tele_rest::OptionalParam<bool> &needs_repainting) {
    QString fullPath = QString(_serverConfigs["createNewStickerSetPost"][_serverIndices.value("createNewStickerSetPost")].URL()+"/createNewStickerSet");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::createNewStickerSetPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::createNewStickerSetPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT createNewStickerSetPostSignal(output);
        Q_EMIT createNewStickerSetPostSignalFull(worker, output);
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

        Q_EMIT createNewStickerSetPostSignalE(output, error_type, error_str);
        Q_EMIT createNewStickerSetPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT createNewStickerSetPostSignalError(output, error_type, error_str);
        Q_EMIT createNewStickerSetPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::declineChatJoinRequestPost(const OAI_sendMessage_post_request_chat_id &chat_id, const qint32 &user_id) {
    QString fullPath = QString(_serverConfigs["declineChatJoinRequestPost"][_serverIndices.value("declineChatJoinRequestPost")].URL()+"/declineChatJoinRequest");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::declineChatJoinRequestPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::declineChatJoinRequestPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT declineChatJoinRequestPostSignal(output);
        Q_EMIT declineChatJoinRequestPostSignalFull(worker, output);
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

        Q_EMIT declineChatJoinRequestPostSignalE(output, error_type, error_str);
        Q_EMIT declineChatJoinRequestPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT declineChatJoinRequestPostSignalError(output, error_type, error_str);
        Q_EMIT declineChatJoinRequestPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::deleteBusinessMessagesPost(const QString &business_connection_id, const QList<qint32> &message_ids) {
    QString fullPath = QString(_serverConfigs["deleteBusinessMessagesPost"][_serverIndices.value("deleteBusinessMessagesPost")].URL()+"/deleteBusinessMessages");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::deleteBusinessMessagesPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::deleteBusinessMessagesPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT deleteBusinessMessagesPostSignal(output);
        Q_EMIT deleteBusinessMessagesPostSignalFull(worker, output);
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

        Q_EMIT deleteBusinessMessagesPostSignalE(output, error_type, error_str);
        Q_EMIT deleteBusinessMessagesPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT deleteBusinessMessagesPostSignalError(output, error_type, error_str);
        Q_EMIT deleteBusinessMessagesPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::deleteChatPhotoPost(const OAI_sendMessage_post_request_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["deleteChatPhotoPost"][_serverIndices.value("deleteChatPhotoPost")].URL()+"/deleteChatPhoto");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::deleteChatPhotoPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::deleteChatPhotoPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT deleteChatPhotoPostSignal(output);
        Q_EMIT deleteChatPhotoPostSignalFull(worker, output);
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

        Q_EMIT deleteChatPhotoPostSignalE(output, error_type, error_str);
        Q_EMIT deleteChatPhotoPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT deleteChatPhotoPostSignalError(output, error_type, error_str);
        Q_EMIT deleteChatPhotoPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::deleteChatStickerSetPost(const OAI_restrictChatMember_post_request_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["deleteChatStickerSetPost"][_serverIndices.value("deleteChatStickerSetPost")].URL()+"/deleteChatStickerSet");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::deleteChatStickerSetPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::deleteChatStickerSetPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT deleteChatStickerSetPostSignal(output);
        Q_EMIT deleteChatStickerSetPostSignalFull(worker, output);
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

        Q_EMIT deleteChatStickerSetPostSignalE(output, error_type, error_str);
        Q_EMIT deleteChatStickerSetPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT deleteChatStickerSetPostSignalError(output, error_type, error_str);
        Q_EMIT deleteChatStickerSetPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::deleteForumTopicPost(const OAI_restrictChatMember_post_request_chat_id &chat_id, const qint32 &message_thread_id) {
    QString fullPath = QString(_serverConfigs["deleteForumTopicPost"][_serverIndices.value("deleteForumTopicPost")].URL()+"/deleteForumTopic");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::deleteForumTopicPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::deleteForumTopicPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT deleteForumTopicPostSignal(output);
        Q_EMIT deleteForumTopicPostSignalFull(worker, output);
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

        Q_EMIT deleteForumTopicPostSignalE(output, error_type, error_str);
        Q_EMIT deleteForumTopicPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT deleteForumTopicPostSignalError(output, error_type, error_str);
        Q_EMIT deleteForumTopicPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::deleteMessagePost(const OAI_sendMessage_post_request_chat_id &chat_id, const qint32 &message_id) {
    QString fullPath = QString(_serverConfigs["deleteMessagePost"][_serverIndices.value("deleteMessagePost")].URL()+"/deleteMessage");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::deleteMessagePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::deleteMessagePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT deleteMessagePostSignal(output);
        Q_EMIT deleteMessagePostSignalFull(worker, output);
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

        Q_EMIT deleteMessagePostSignalE(output, error_type, error_str);
        Q_EMIT deleteMessagePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT deleteMessagePostSignalError(output, error_type, error_str);
        Q_EMIT deleteMessagePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::deleteMessagesPost(const OAI_sendMessage_post_request_chat_id &chat_id, const QList<qint32> &message_ids) {
    QString fullPath = QString(_serverConfigs["deleteMessagesPost"][_serverIndices.value("deleteMessagesPost")].URL()+"/deleteMessages");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::deleteMessagesPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::deleteMessagesPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT deleteMessagesPostSignal(output);
        Q_EMIT deleteMessagesPostSignalFull(worker, output);
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

        Q_EMIT deleteMessagesPostSignalE(output, error_type, error_str);
        Q_EMIT deleteMessagesPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT deleteMessagesPostSignalError(output, error_type, error_str);
        Q_EMIT deleteMessagesPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::deleteMyCommandsPost(const ::tele_rest::OptionalParam<OAIBotCommandScope> &scope, const ::tele_rest::OptionalParam<QString> &language_code) {
    QString fullPath = QString(_serverConfigs["deleteMyCommandsPost"][_serverIndices.value("deleteMyCommandsPost")].URL()+"/deleteMyCommands");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::deleteMyCommandsPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::deleteMyCommandsPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT deleteMyCommandsPostSignal(output);
        Q_EMIT deleteMyCommandsPostSignalFull(worker, output);
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

        Q_EMIT deleteMyCommandsPostSignalE(output, error_type, error_str);
        Q_EMIT deleteMyCommandsPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT deleteMyCommandsPostSignalError(output, error_type, error_str);
        Q_EMIT deleteMyCommandsPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::deleteStickerFromSetPost(const QString &sticker) {
    QString fullPath = QString(_serverConfigs["deleteStickerFromSetPost"][_serverIndices.value("deleteStickerFromSetPost")].URL()+"/deleteStickerFromSet");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::deleteStickerFromSetPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::deleteStickerFromSetPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT deleteStickerFromSetPostSignal(output);
        Q_EMIT deleteStickerFromSetPostSignalFull(worker, output);
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

        Q_EMIT deleteStickerFromSetPostSignalE(output, error_type, error_str);
        Q_EMIT deleteStickerFromSetPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT deleteStickerFromSetPostSignalError(output, error_type, error_str);
        Q_EMIT deleteStickerFromSetPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::deleteStickerSetPost(const QString &name) {
    QString fullPath = QString(_serverConfigs["deleteStickerSetPost"][_serverIndices.value("deleteStickerSetPost")].URL()+"/deleteStickerSet");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::deleteStickerSetPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::deleteStickerSetPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT deleteStickerSetPostSignal(output);
        Q_EMIT deleteStickerSetPostSignalFull(worker, output);
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

        Q_EMIT deleteStickerSetPostSignalE(output, error_type, error_str);
        Q_EMIT deleteStickerSetPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT deleteStickerSetPostSignalError(output, error_type, error_str);
        Q_EMIT deleteStickerSetPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::deleteStoryPost(const QString &business_connection_id, const qint32 &story_id) {
    QString fullPath = QString(_serverConfigs["deleteStoryPost"][_serverIndices.value("deleteStoryPost")].URL()+"/deleteStory");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::deleteStoryPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::deleteStoryPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT deleteStoryPostSignal(output);
        Q_EMIT deleteStoryPostSignalFull(worker, output);
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

        Q_EMIT deleteStoryPostSignalE(output, error_type, error_str);
        Q_EMIT deleteStoryPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT deleteStoryPostSignalError(output, error_type, error_str);
        Q_EMIT deleteStoryPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::deleteWebhookPost(const ::tele_rest::OptionalParam<bool> &drop_pending_updates) {
    QString fullPath = QString(_serverConfigs["deleteWebhookPost"][_serverIndices.value("deleteWebhookPost")].URL()+"/deleteWebhook");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::deleteWebhookPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::deleteWebhookPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT deleteWebhookPostSignal(output);
        Q_EMIT deleteWebhookPostSignalFull(worker, output);
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

        Q_EMIT deleteWebhookPostSignalE(output, error_type, error_str);
        Q_EMIT deleteWebhookPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT deleteWebhookPostSignalError(output, error_type, error_str);
        Q_EMIT deleteWebhookPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::editChatInviteLinkPost(const OAI_sendMessage_post_request_chat_id &chat_id, const QString &invite_link, const ::tele_rest::OptionalParam<QString> &name, const ::tele_rest::OptionalParam<qint32> &expire_date, const ::tele_rest::OptionalParam<qint32> &member_limit, const ::tele_rest::OptionalParam<bool> &creates_join_request) {
    QString fullPath = QString(_serverConfigs["editChatInviteLinkPost"][_serverIndices.value("editChatInviteLinkPost")].URL()+"/editChatInviteLink");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::editChatInviteLinkPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::editChatInviteLinkPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_createChatInviteLink_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT editChatInviteLinkPostSignal(output);
        Q_EMIT editChatInviteLinkPostSignalFull(worker, output);
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

        Q_EMIT editChatInviteLinkPostSignalE(output, error_type, error_str);
        Q_EMIT editChatInviteLinkPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT editChatInviteLinkPostSignalError(output, error_type, error_str);
        Q_EMIT editChatInviteLinkPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::editChatSubscriptionInviteLinkPost(const OAI_sendMessage_post_request_chat_id &chat_id, const QString &invite_link, const ::tele_rest::OptionalParam<QString> &name) {
    QString fullPath = QString(_serverConfigs["editChatSubscriptionInviteLinkPost"][_serverIndices.value("editChatSubscriptionInviteLinkPost")].URL()+"/editChatSubscriptionInviteLink");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::editChatSubscriptionInviteLinkPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::editChatSubscriptionInviteLinkPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_createChatInviteLink_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT editChatSubscriptionInviteLinkPostSignal(output);
        Q_EMIT editChatSubscriptionInviteLinkPostSignalFull(worker, output);
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

        Q_EMIT editChatSubscriptionInviteLinkPostSignalE(output, error_type, error_str);
        Q_EMIT editChatSubscriptionInviteLinkPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT editChatSubscriptionInviteLinkPostSignalError(output, error_type, error_str);
        Q_EMIT editChatSubscriptionInviteLinkPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::editForumTopicPost(const OAI_restrictChatMember_post_request_chat_id &chat_id, const qint32 &message_thread_id, const ::tele_rest::OptionalParam<QString> &name, const ::tele_rest::OptionalParam<QString> &icon_custom_emoji_id) {
    QString fullPath = QString(_serverConfigs["editForumTopicPost"][_serverIndices.value("editForumTopicPost")].URL()+"/editForumTopic");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::editForumTopicPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::editForumTopicPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT editForumTopicPostSignal(output);
        Q_EMIT editForumTopicPostSignalFull(worker, output);
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

        Q_EMIT editForumTopicPostSignalE(output, error_type, error_str);
        Q_EMIT editForumTopicPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT editForumTopicPostSignalError(output, error_type, error_str);
        Q_EMIT editForumTopicPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::editGeneralForumTopicPost(const OAI_restrictChatMember_post_request_chat_id &chat_id, const QString &name) {
    QString fullPath = QString(_serverConfigs["editGeneralForumTopicPost"][_serverIndices.value("editGeneralForumTopicPost")].URL()+"/editGeneralForumTopic");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::editGeneralForumTopicPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::editGeneralForumTopicPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT editGeneralForumTopicPostSignal(output);
        Q_EMIT editGeneralForumTopicPostSignalFull(worker, output);
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

        Q_EMIT editGeneralForumTopicPostSignalE(output, error_type, error_str);
        Q_EMIT editGeneralForumTopicPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT editGeneralForumTopicPostSignalError(output, error_type, error_str);
        Q_EMIT editGeneralForumTopicPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::editMessageCaptionPost(const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<OAI_editMessageText_post_request_chat_id> &chat_id, const ::tele_rest::OptionalParam<qint32> &message_id, const ::tele_rest::OptionalParam<QString> &inline_message_id, const ::tele_rest::OptionalParam<QString> &caption, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities, const ::tele_rest::OptionalParam<bool> &show_caption_above_media, const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["editMessageCaptionPost"][_serverIndices.value("editMessageCaptionPost")].URL()+"/editMessageCaption");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::editMessageCaptionPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::editMessageCaptionPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_editMessageText_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT editMessageCaptionPostSignal(output);
        Q_EMIT editMessageCaptionPostSignalFull(worker, output);
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

        Q_EMIT editMessageCaptionPostSignalE(output, error_type, error_str);
        Q_EMIT editMessageCaptionPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT editMessageCaptionPostSignalError(output, error_type, error_str);
        Q_EMIT editMessageCaptionPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::editMessageLiveLocationPost(const double &latitude, const double &longitude, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<OAI_editMessageText_post_request_chat_id> &chat_id, const ::tele_rest::OptionalParam<qint32> &message_id, const ::tele_rest::OptionalParam<QString> &inline_message_id, const ::tele_rest::OptionalParam<qint32> &live_period, const ::tele_rest::OptionalParam<double> &horizontal_accuracy, const ::tele_rest::OptionalParam<qint32> &heading, const ::tele_rest::OptionalParam<qint32> &proximity_alert_radius, const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["editMessageLiveLocationPost"][_serverIndices.value("editMessageLiveLocationPost")].URL()+"/editMessageLiveLocation");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::editMessageLiveLocationPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::editMessageLiveLocationPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_editMessageText_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT editMessageLiveLocationPostSignal(output);
        Q_EMIT editMessageLiveLocationPostSignalFull(worker, output);
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

        Q_EMIT editMessageLiveLocationPostSignalE(output, error_type, error_str);
        Q_EMIT editMessageLiveLocationPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT editMessageLiveLocationPostSignalError(output, error_type, error_str);
        Q_EMIT editMessageLiveLocationPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::editMessageMediaPost(const OAIInputMedia &media, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<OAI_editMessageText_post_request_chat_id> &chat_id, const ::tele_rest::OptionalParam<qint32> &message_id, const ::tele_rest::OptionalParam<QString> &inline_message_id, const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["editMessageMediaPost"][_serverIndices.value("editMessageMediaPost")].URL()+"/editMessageMedia");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::editMessageMediaPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::editMessageMediaPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_editMessageText_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT editMessageMediaPostSignal(output);
        Q_EMIT editMessageMediaPostSignalFull(worker, output);
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

        Q_EMIT editMessageMediaPostSignalE(output, error_type, error_str);
        Q_EMIT editMessageMediaPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT editMessageMediaPostSignalError(output, error_type, error_str);
        Q_EMIT editMessageMediaPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::editMessageReplyMarkupPost(const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<OAI_editMessageText_post_request_chat_id> &chat_id, const ::tele_rest::OptionalParam<qint32> &message_id, const ::tele_rest::OptionalParam<QString> &inline_message_id, const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["editMessageReplyMarkupPost"][_serverIndices.value("editMessageReplyMarkupPost")].URL()+"/editMessageReplyMarkup");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::editMessageReplyMarkupPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::editMessageReplyMarkupPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_editMessageText_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT editMessageReplyMarkupPostSignal(output);
        Q_EMIT editMessageReplyMarkupPostSignalFull(worker, output);
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

        Q_EMIT editMessageReplyMarkupPostSignalE(output, error_type, error_str);
        Q_EMIT editMessageReplyMarkupPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT editMessageReplyMarkupPostSignalError(output, error_type, error_str);
        Q_EMIT editMessageReplyMarkupPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::editMessageTextPost(const QString &text, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<OAI_editMessageText_post_request_chat_id> &chat_id, const ::tele_rest::OptionalParam<qint32> &message_id, const ::tele_rest::OptionalParam<QString> &inline_message_id, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &entities, const ::tele_rest::OptionalParam<OAILinkPreviewOptions> &link_preview_options, const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["editMessageTextPost"][_serverIndices.value("editMessageTextPost")].URL()+"/editMessageText");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::editMessageTextPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::editMessageTextPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_editMessageText_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT editMessageTextPostSignal(output);
        Q_EMIT editMessageTextPostSignalFull(worker, output);
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

        Q_EMIT editMessageTextPostSignalE(output, error_type, error_str);
        Q_EMIT editMessageTextPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT editMessageTextPostSignalError(output, error_type, error_str);
        Q_EMIT editMessageTextPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::editStoryPost(const QString &business_connection_id, const qint32 &story_id, const OAIInputStoryContent &content, const ::tele_rest::OptionalParam<QString> &caption, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities, const ::tele_rest::OptionalParam<QList<OAIStoryArea>> &areas) {
    QString fullPath = QString(_serverConfigs["editStoryPost"][_serverIndices.value("editStoryPost")].URL()+"/editStory");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::editStoryPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::editStoryPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_postStory_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT editStoryPostSignal(output);
        Q_EMIT editStoryPostSignalFull(worker, output);
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

        Q_EMIT editStoryPostSignalE(output, error_type, error_str);
        Q_EMIT editStoryPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT editStoryPostSignalError(output, error_type, error_str);
        Q_EMIT editStoryPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::editUserStarSubscriptionPost(const qint32 &user_id, const QString &telegram_payment_charge_id, const bool &is_canceled) {
    QString fullPath = QString(_serverConfigs["editUserStarSubscriptionPost"][_serverIndices.value("editUserStarSubscriptionPost")].URL()+"/editUserStarSubscription");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::editUserStarSubscriptionPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::editUserStarSubscriptionPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT editUserStarSubscriptionPostSignal(output);
        Q_EMIT editUserStarSubscriptionPostSignalFull(worker, output);
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

        Q_EMIT editUserStarSubscriptionPostSignalE(output, error_type, error_str);
        Q_EMIT editUserStarSubscriptionPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT editUserStarSubscriptionPostSignalError(output, error_type, error_str);
        Q_EMIT editUserStarSubscriptionPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::exportChatInviteLinkPost(const OAI_sendMessage_post_request_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["exportChatInviteLinkPost"][_serverIndices.value("exportChatInviteLinkPost")].URL()+"/exportChatInviteLink");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::exportChatInviteLinkPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::exportChatInviteLinkPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_exportChatInviteLink_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT exportChatInviteLinkPostSignal(output);
        Q_EMIT exportChatInviteLinkPostSignalFull(worker, output);
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

        Q_EMIT exportChatInviteLinkPostSignalE(output, error_type, error_str);
        Q_EMIT exportChatInviteLinkPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT exportChatInviteLinkPostSignalError(output, error_type, error_str);
        Q_EMIT exportChatInviteLinkPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::forwardMessagePost(const OAI_sendMessage_post_request_chat_id &chat_id, const OAI_forwardMessage_post_request_from_chat_id &from_chat_id, const qint32 &message_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<qint32> &video_start_timestamp, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content) {
    QString fullPath = QString(_serverConfigs["forwardMessagePost"][_serverIndices.value("forwardMessagePost")].URL()+"/forwardMessage");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::forwardMessagePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::forwardMessagePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_sendMessage_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT forwardMessagePostSignal(output);
        Q_EMIT forwardMessagePostSignalFull(worker, output);
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

        Q_EMIT forwardMessagePostSignalE(output, error_type, error_str);
        Q_EMIT forwardMessagePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT forwardMessagePostSignalError(output, error_type, error_str);
        Q_EMIT forwardMessagePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::forwardMessagesPost(const OAI_sendMessage_post_request_chat_id &chat_id, const OAI_forwardMessages_post_request_from_chat_id &from_chat_id, const QList<qint32> &message_ids, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content) {
    QString fullPath = QString(_serverConfigs["forwardMessagesPost"][_serverIndices.value("forwardMessagesPost")].URL()+"/forwardMessages");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::forwardMessagesPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::forwardMessagesPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_forwardMessages_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT forwardMessagesPostSignal(output);
        Q_EMIT forwardMessagesPostSignalFull(worker, output);
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

        Q_EMIT forwardMessagesPostSignalE(output, error_type, error_str);
        Q_EMIT forwardMessagesPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT forwardMessagesPostSignalError(output, error_type, error_str);
        Q_EMIT forwardMessagesPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::getAvailableGiftsPost() {
    QString fullPath = QString(_serverConfigs["getAvailableGiftsPost"][_serverIndices.value("getAvailableGiftsPost")].URL()+"/getAvailableGifts");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::getAvailableGiftsPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::getAvailableGiftsPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getAvailableGifts_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT getAvailableGiftsPostSignal(output);
        Q_EMIT getAvailableGiftsPostSignalFull(worker, output);
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

        Q_EMIT getAvailableGiftsPostSignalE(output, error_type, error_str);
        Q_EMIT getAvailableGiftsPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT getAvailableGiftsPostSignalError(output, error_type, error_str);
        Q_EMIT getAvailableGiftsPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::getBusinessAccountGiftsPost(const QString &business_connection_id, const ::tele_rest::OptionalParam<bool> &exclude_unsaved, const ::tele_rest::OptionalParam<bool> &exclude_saved, const ::tele_rest::OptionalParam<bool> &exclude_unlimited, const ::tele_rest::OptionalParam<bool> &exclude_limited, const ::tele_rest::OptionalParam<bool> &exclude_unique, const ::tele_rest::OptionalParam<bool> &sort_by_price, const ::tele_rest::OptionalParam<QString> &offset, const ::tele_rest::OptionalParam<qint32> &limit) {
    QString fullPath = QString(_serverConfigs["getBusinessAccountGiftsPost"][_serverIndices.value("getBusinessAccountGiftsPost")].URL()+"/getBusinessAccountGifts");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::getBusinessAccountGiftsPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::getBusinessAccountGiftsPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getBusinessAccountGifts_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT getBusinessAccountGiftsPostSignal(output);
        Q_EMIT getBusinessAccountGiftsPostSignalFull(worker, output);
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

        Q_EMIT getBusinessAccountGiftsPostSignalE(output, error_type, error_str);
        Q_EMIT getBusinessAccountGiftsPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT getBusinessAccountGiftsPostSignalError(output, error_type, error_str);
        Q_EMIT getBusinessAccountGiftsPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::getBusinessAccountStarBalancePost(const QString &business_connection_id) {
    QString fullPath = QString(_serverConfigs["getBusinessAccountStarBalancePost"][_serverIndices.value("getBusinessAccountStarBalancePost")].URL()+"/getBusinessAccountStarBalance");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::getBusinessAccountStarBalancePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::getBusinessAccountStarBalancePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getBusinessAccountStarBalance_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT getBusinessAccountStarBalancePostSignal(output);
        Q_EMIT getBusinessAccountStarBalancePostSignalFull(worker, output);
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

        Q_EMIT getBusinessAccountStarBalancePostSignalE(output, error_type, error_str);
        Q_EMIT getBusinessAccountStarBalancePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT getBusinessAccountStarBalancePostSignalError(output, error_type, error_str);
        Q_EMIT getBusinessAccountStarBalancePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::getBusinessConnectionPost(const QString &business_connection_id) {
    QString fullPath = QString(_serverConfigs["getBusinessConnectionPost"][_serverIndices.value("getBusinessConnectionPost")].URL()+"/getBusinessConnection");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::getBusinessConnectionPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::getBusinessConnectionPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getBusinessConnection_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT getBusinessConnectionPostSignal(output);
        Q_EMIT getBusinessConnectionPostSignalFull(worker, output);
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

        Q_EMIT getBusinessConnectionPostSignalE(output, error_type, error_str);
        Q_EMIT getBusinessConnectionPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT getBusinessConnectionPostSignalError(output, error_type, error_str);
        Q_EMIT getBusinessConnectionPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::getChatAdministratorsPost(const OAI_leaveChat_post_request_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["getChatAdministratorsPost"][_serverIndices.value("getChatAdministratorsPost")].URL()+"/getChatAdministrators");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::getChatAdministratorsPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::getChatAdministratorsPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getChatAdministrators_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT getChatAdministratorsPostSignal(output);
        Q_EMIT getChatAdministratorsPostSignalFull(worker, output);
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

        Q_EMIT getChatAdministratorsPostSignalE(output, error_type, error_str);
        Q_EMIT getChatAdministratorsPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT getChatAdministratorsPostSignalError(output, error_type, error_str);
        Q_EMIT getChatAdministratorsPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::getChatMemberCountPost(const OAI_leaveChat_post_request_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["getChatMemberCountPost"][_serverIndices.value("getChatMemberCountPost")].URL()+"/getChatMemberCount");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::getChatMemberCountPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::getChatMemberCountPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getChatMemberCount_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT getChatMemberCountPostSignal(output);
        Q_EMIT getChatMemberCountPostSignalFull(worker, output);
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

        Q_EMIT getChatMemberCountPostSignalE(output, error_type, error_str);
        Q_EMIT getChatMemberCountPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT getChatMemberCountPostSignalError(output, error_type, error_str);
        Q_EMIT getChatMemberCountPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::getChatMemberPost(const OAI_leaveChat_post_request_chat_id &chat_id, const qint32 &user_id) {
    QString fullPath = QString(_serverConfigs["getChatMemberPost"][_serverIndices.value("getChatMemberPost")].URL()+"/getChatMember");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::getChatMemberPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::getChatMemberPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getChatMember_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT getChatMemberPostSignal(output);
        Q_EMIT getChatMemberPostSignalFull(worker, output);
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

        Q_EMIT getChatMemberPostSignalE(output, error_type, error_str);
        Q_EMIT getChatMemberPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT getChatMemberPostSignalError(output, error_type, error_str);
        Q_EMIT getChatMemberPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::getChatMenuButtonPost(const ::tele_rest::OptionalParam<qint32> &chat_id) {
    QString fullPath = QString(_serverConfigs["getChatMenuButtonPost"][_serverIndices.value("getChatMenuButtonPost")].URL()+"/getChatMenuButton");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::getChatMenuButtonPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::getChatMenuButtonPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getChatMenuButton_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT getChatMenuButtonPostSignal(output);
        Q_EMIT getChatMenuButtonPostSignalFull(worker, output);
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

        Q_EMIT getChatMenuButtonPostSignalE(output, error_type, error_str);
        Q_EMIT getChatMenuButtonPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT getChatMenuButtonPostSignalError(output, error_type, error_str);
        Q_EMIT getChatMenuButtonPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::getChatPost(const OAI_leaveChat_post_request_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["getChatPost"][_serverIndices.value("getChatPost")].URL()+"/getChat");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::getChatPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::getChatPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getChat_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT getChatPostSignal(output);
        Q_EMIT getChatPostSignalFull(worker, output);
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

        Q_EMIT getChatPostSignalE(output, error_type, error_str);
        Q_EMIT getChatPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT getChatPostSignalError(output, error_type, error_str);
        Q_EMIT getChatPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::getCustomEmojiStickersPost(const QList<QString> &custom_emoji_ids) {
    QString fullPath = QString(_serverConfigs["getCustomEmojiStickersPost"][_serverIndices.value("getCustomEmojiStickersPost")].URL()+"/getCustomEmojiStickers");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::getCustomEmojiStickersPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::getCustomEmojiStickersPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getForumTopicIconStickers_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT getCustomEmojiStickersPostSignal(output);
        Q_EMIT getCustomEmojiStickersPostSignalFull(worker, output);
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

        Q_EMIT getCustomEmojiStickersPostSignalE(output, error_type, error_str);
        Q_EMIT getCustomEmojiStickersPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT getCustomEmojiStickersPostSignalError(output, error_type, error_str);
        Q_EMIT getCustomEmojiStickersPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::getFilePost(const QString &file_id) {
    QString fullPath = QString(_serverConfigs["getFilePost"][_serverIndices.value("getFilePost")].URL()+"/getFile");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::getFilePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::getFilePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getFile_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT getFilePostSignal(output);
        Q_EMIT getFilePostSignalFull(worker, output);
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

        Q_EMIT getFilePostSignalE(output, error_type, error_str);
        Q_EMIT getFilePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT getFilePostSignalError(output, error_type, error_str);
        Q_EMIT getFilePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::getForumTopicIconStickersPost() {
    QString fullPath = QString(_serverConfigs["getForumTopicIconStickersPost"][_serverIndices.value("getForumTopicIconStickersPost")].URL()+"/getForumTopicIconStickers");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::getForumTopicIconStickersPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::getForumTopicIconStickersPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getForumTopicIconStickers_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT getForumTopicIconStickersPostSignal(output);
        Q_EMIT getForumTopicIconStickersPostSignalFull(worker, output);
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

        Q_EMIT getForumTopicIconStickersPostSignalE(output, error_type, error_str);
        Q_EMIT getForumTopicIconStickersPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT getForumTopicIconStickersPostSignalError(output, error_type, error_str);
        Q_EMIT getForumTopicIconStickersPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::getGameHighScoresPost(const qint32 &user_id, const ::tele_rest::OptionalParam<qint32> &chat_id, const ::tele_rest::OptionalParam<qint32> &message_id, const ::tele_rest::OptionalParam<QString> &inline_message_id) {
    QString fullPath = QString(_serverConfigs["getGameHighScoresPost"][_serverIndices.value("getGameHighScoresPost")].URL()+"/getGameHighScores");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::getGameHighScoresPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::getGameHighScoresPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getGameHighScores_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT getGameHighScoresPostSignal(output);
        Q_EMIT getGameHighScoresPostSignalFull(worker, output);
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

        Q_EMIT getGameHighScoresPostSignalE(output, error_type, error_str);
        Q_EMIT getGameHighScoresPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT getGameHighScoresPostSignalError(output, error_type, error_str);
        Q_EMIT getGameHighScoresPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::getMePost() {
    QString fullPath = QString(_serverConfigs["getMePost"][_serverIndices.value("getMePost")].URL()+"/getMe");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::getMePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::getMePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getMe_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT getMePostSignal(output);
        Q_EMIT getMePostSignalFull(worker, output);
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

        Q_EMIT getMePostSignalE(output, error_type, error_str);
        Q_EMIT getMePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT getMePostSignalError(output, error_type, error_str);
        Q_EMIT getMePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::getMyCommandsPost(const ::tele_rest::OptionalParam<OAIBotCommandScope> &scope, const ::tele_rest::OptionalParam<QString> &language_code) {
    QString fullPath = QString(_serverConfigs["getMyCommandsPost"][_serverIndices.value("getMyCommandsPost")].URL()+"/getMyCommands");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::getMyCommandsPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::getMyCommandsPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getMyCommands_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT getMyCommandsPostSignal(output);
        Q_EMIT getMyCommandsPostSignalFull(worker, output);
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

        Q_EMIT getMyCommandsPostSignalE(output, error_type, error_str);
        Q_EMIT getMyCommandsPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT getMyCommandsPostSignalError(output, error_type, error_str);
        Q_EMIT getMyCommandsPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::getMyDefaultAdministratorRightsPost(const ::tele_rest::OptionalParam<bool> &for_channels) {
    QString fullPath = QString(_serverConfigs["getMyDefaultAdministratorRightsPost"][_serverIndices.value("getMyDefaultAdministratorRightsPost")].URL()+"/getMyDefaultAdministratorRights");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::getMyDefaultAdministratorRightsPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::getMyDefaultAdministratorRightsPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getMyDefaultAdministratorRights_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT getMyDefaultAdministratorRightsPostSignal(output);
        Q_EMIT getMyDefaultAdministratorRightsPostSignalFull(worker, output);
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

        Q_EMIT getMyDefaultAdministratorRightsPostSignalE(output, error_type, error_str);
        Q_EMIT getMyDefaultAdministratorRightsPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT getMyDefaultAdministratorRightsPostSignalError(output, error_type, error_str);
        Q_EMIT getMyDefaultAdministratorRightsPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::getMyDescriptionPost(const ::tele_rest::OptionalParam<QString> &language_code) {
    QString fullPath = QString(_serverConfigs["getMyDescriptionPost"][_serverIndices.value("getMyDescriptionPost")].URL()+"/getMyDescription");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::getMyDescriptionPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::getMyDescriptionPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getMyDescription_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT getMyDescriptionPostSignal(output);
        Q_EMIT getMyDescriptionPostSignalFull(worker, output);
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

        Q_EMIT getMyDescriptionPostSignalE(output, error_type, error_str);
        Q_EMIT getMyDescriptionPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT getMyDescriptionPostSignalError(output, error_type, error_str);
        Q_EMIT getMyDescriptionPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::getMyNamePost(const ::tele_rest::OptionalParam<QString> &language_code) {
    QString fullPath = QString(_serverConfigs["getMyNamePost"][_serverIndices.value("getMyNamePost")].URL()+"/getMyName");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::getMyNamePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::getMyNamePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getMyName_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT getMyNamePostSignal(output);
        Q_EMIT getMyNamePostSignalFull(worker, output);
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

        Q_EMIT getMyNamePostSignalE(output, error_type, error_str);
        Q_EMIT getMyNamePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT getMyNamePostSignalError(output, error_type, error_str);
        Q_EMIT getMyNamePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::getMyShortDescriptionPost(const ::tele_rest::OptionalParam<QString> &language_code) {
    QString fullPath = QString(_serverConfigs["getMyShortDescriptionPost"][_serverIndices.value("getMyShortDescriptionPost")].URL()+"/getMyShortDescription");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::getMyShortDescriptionPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::getMyShortDescriptionPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getMyShortDescription_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT getMyShortDescriptionPostSignal(output);
        Q_EMIT getMyShortDescriptionPostSignalFull(worker, output);
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

        Q_EMIT getMyShortDescriptionPostSignalE(output, error_type, error_str);
        Q_EMIT getMyShortDescriptionPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT getMyShortDescriptionPostSignalError(output, error_type, error_str);
        Q_EMIT getMyShortDescriptionPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::getStarTransactionsPost(const ::tele_rest::OptionalParam<qint32> &offset, const ::tele_rest::OptionalParam<qint32> &limit) {
    QString fullPath = QString(_serverConfigs["getStarTransactionsPost"][_serverIndices.value("getStarTransactionsPost")].URL()+"/getStarTransactions");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::getStarTransactionsPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::getStarTransactionsPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getStarTransactions_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT getStarTransactionsPostSignal(output);
        Q_EMIT getStarTransactionsPostSignalFull(worker, output);
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

        Q_EMIT getStarTransactionsPostSignalE(output, error_type, error_str);
        Q_EMIT getStarTransactionsPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT getStarTransactionsPostSignalError(output, error_type, error_str);
        Q_EMIT getStarTransactionsPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::getStickerSetPost(const QString &name) {
    QString fullPath = QString(_serverConfigs["getStickerSetPost"][_serverIndices.value("getStickerSetPost")].URL()+"/getStickerSet");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::getStickerSetPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::getStickerSetPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getStickerSet_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT getStickerSetPostSignal(output);
        Q_EMIT getStickerSetPostSignalFull(worker, output);
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

        Q_EMIT getStickerSetPostSignalE(output, error_type, error_str);
        Q_EMIT getStickerSetPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT getStickerSetPostSignalError(output, error_type, error_str);
        Q_EMIT getStickerSetPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::getUpdatesPost(const ::tele_rest::OptionalParam<qint32> &offset, const ::tele_rest::OptionalParam<qint32> &limit, const ::tele_rest::OptionalParam<qint32> &timeout, const ::tele_rest::OptionalParam<QList<QString>> &allowed_updates) {
    QString fullPath = QString(_serverConfigs["getUpdatesPost"][_serverIndices.value("getUpdatesPost")].URL()+"/getUpdates");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::getUpdatesPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::getUpdatesPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getUpdates_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT getUpdatesPostSignal(output);
        Q_EMIT getUpdatesPostSignalFull(worker, output);
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

        Q_EMIT getUpdatesPostSignalE(output, error_type, error_str);
        Q_EMIT getUpdatesPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT getUpdatesPostSignalError(output, error_type, error_str);
        Q_EMIT getUpdatesPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::getUserChatBoostsPost(const OAI_getUserChatBoosts_post_request_chat_id &chat_id, const qint32 &user_id) {
    QString fullPath = QString(_serverConfigs["getUserChatBoostsPost"][_serverIndices.value("getUserChatBoostsPost")].URL()+"/getUserChatBoosts");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::getUserChatBoostsPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::getUserChatBoostsPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getUserChatBoosts_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT getUserChatBoostsPostSignal(output);
        Q_EMIT getUserChatBoostsPostSignalFull(worker, output);
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

        Q_EMIT getUserChatBoostsPostSignalE(output, error_type, error_str);
        Q_EMIT getUserChatBoostsPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT getUserChatBoostsPostSignalError(output, error_type, error_str);
        Q_EMIT getUserChatBoostsPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::getUserProfilePhotosPost(const qint32 &user_id, const ::tele_rest::OptionalParam<qint32> &offset, const ::tele_rest::OptionalParam<qint32> &limit) {
    QString fullPath = QString(_serverConfigs["getUserProfilePhotosPost"][_serverIndices.value("getUserProfilePhotosPost")].URL()+"/getUserProfilePhotos");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::getUserProfilePhotosPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::getUserProfilePhotosPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getUserProfilePhotos_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT getUserProfilePhotosPostSignal(output);
        Q_EMIT getUserProfilePhotosPostSignalFull(worker, output);
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

        Q_EMIT getUserProfilePhotosPostSignalE(output, error_type, error_str);
        Q_EMIT getUserProfilePhotosPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT getUserProfilePhotosPostSignalError(output, error_type, error_str);
        Q_EMIT getUserProfilePhotosPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::getWebhookInfoPost() {
    QString fullPath = QString(_serverConfigs["getWebhookInfoPost"][_serverIndices.value("getWebhookInfoPost")].URL()+"/getWebhookInfo");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::getWebhookInfoPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::getWebhookInfoPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getWebhookInfo_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT getWebhookInfoPostSignal(output);
        Q_EMIT getWebhookInfoPostSignalFull(worker, output);
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

        Q_EMIT getWebhookInfoPostSignalE(output, error_type, error_str);
        Q_EMIT getWebhookInfoPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT getWebhookInfoPostSignalError(output, error_type, error_str);
        Q_EMIT getWebhookInfoPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::giftPremiumSubscriptionPost(const qint32 &user_id, const qint32 &month_count, const qint32 &star_count, const ::tele_rest::OptionalParam<QString> &text, const ::tele_rest::OptionalParam<QString> &text_parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &text_entities) {
    QString fullPath = QString(_serverConfigs["giftPremiumSubscriptionPost"][_serverIndices.value("giftPremiumSubscriptionPost")].URL()+"/giftPremiumSubscription");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::giftPremiumSubscriptionPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::giftPremiumSubscriptionPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT giftPremiumSubscriptionPostSignal(output);
        Q_EMIT giftPremiumSubscriptionPostSignalFull(worker, output);
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

        Q_EMIT giftPremiumSubscriptionPostSignalE(output, error_type, error_str);
        Q_EMIT giftPremiumSubscriptionPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT giftPremiumSubscriptionPostSignalError(output, error_type, error_str);
        Q_EMIT giftPremiumSubscriptionPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::hideGeneralForumTopicPost(const OAI_restrictChatMember_post_request_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["hideGeneralForumTopicPost"][_serverIndices.value("hideGeneralForumTopicPost")].URL()+"/hideGeneralForumTopic");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::hideGeneralForumTopicPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::hideGeneralForumTopicPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT hideGeneralForumTopicPostSignal(output);
        Q_EMIT hideGeneralForumTopicPostSignalFull(worker, output);
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

        Q_EMIT hideGeneralForumTopicPostSignalE(output, error_type, error_str);
        Q_EMIT hideGeneralForumTopicPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT hideGeneralForumTopicPostSignalError(output, error_type, error_str);
        Q_EMIT hideGeneralForumTopicPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::leaveChatPost(const OAI_leaveChat_post_request_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["leaveChatPost"][_serverIndices.value("leaveChatPost")].URL()+"/leaveChat");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::leaveChatPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::leaveChatPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT leaveChatPostSignal(output);
        Q_EMIT leaveChatPostSignalFull(worker, output);
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

        Q_EMIT leaveChatPostSignalE(output, error_type, error_str);
        Q_EMIT leaveChatPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT leaveChatPostSignalError(output, error_type, error_str);
        Q_EMIT leaveChatPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::logOutPost() {
    QString fullPath = QString(_serverConfigs["logOutPost"][_serverIndices.value("logOutPost")].URL()+"/logOut");
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::logOutPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::logOutPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT logOutPostSignal(output);
        Q_EMIT logOutPostSignalFull(worker, output);
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

        Q_EMIT logOutPostSignalE(output, error_type, error_str);
        Q_EMIT logOutPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT logOutPostSignalError(output, error_type, error_str);
        Q_EMIT logOutPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::pinChatMessagePost(const OAI_sendMessage_post_request_chat_id &chat_id, const qint32 &message_id, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<bool> &disable_notification) {
    QString fullPath = QString(_serverConfigs["pinChatMessagePost"][_serverIndices.value("pinChatMessagePost")].URL()+"/pinChatMessage");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::pinChatMessagePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::pinChatMessagePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT pinChatMessagePostSignal(output);
        Q_EMIT pinChatMessagePostSignalFull(worker, output);
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

        Q_EMIT pinChatMessagePostSignalE(output, error_type, error_str);
        Q_EMIT pinChatMessagePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT pinChatMessagePostSignalError(output, error_type, error_str);
        Q_EMIT pinChatMessagePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::postStoryPost(const QString &business_connection_id, const OAIInputStoryContent &content, const qint32 &active_period, const ::tele_rest::OptionalParam<QString> &caption, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities, const ::tele_rest::OptionalParam<QList<OAIStoryArea>> &areas, const ::tele_rest::OptionalParam<bool> &post_to_chat_page, const ::tele_rest::OptionalParam<bool> &protect_content) {
    QString fullPath = QString(_serverConfigs["postStoryPost"][_serverIndices.value("postStoryPost")].URL()+"/postStory");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::postStoryPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::postStoryPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_postStory_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT postStoryPostSignal(output);
        Q_EMIT postStoryPostSignalFull(worker, output);
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

        Q_EMIT postStoryPostSignalE(output, error_type, error_str);
        Q_EMIT postStoryPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT postStoryPostSignalError(output, error_type, error_str);
        Q_EMIT postStoryPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::promoteChatMemberPost(const OAI_sendMessage_post_request_chat_id &chat_id, const qint32 &user_id, const ::tele_rest::OptionalParam<bool> &is_anonymous, const ::tele_rest::OptionalParam<bool> &can_manage_chat, const ::tele_rest::OptionalParam<bool> &can_delete_messages, const ::tele_rest::OptionalParam<bool> &can_manage_video_chats, const ::tele_rest::OptionalParam<bool> &can_restrict_members, const ::tele_rest::OptionalParam<bool> &can_promote_members, const ::tele_rest::OptionalParam<bool> &can_change_info, const ::tele_rest::OptionalParam<bool> &can_invite_users, const ::tele_rest::OptionalParam<bool> &can_post_stories, const ::tele_rest::OptionalParam<bool> &can_edit_stories, const ::tele_rest::OptionalParam<bool> &can_delete_stories, const ::tele_rest::OptionalParam<bool> &can_post_messages, const ::tele_rest::OptionalParam<bool> &can_edit_messages, const ::tele_rest::OptionalParam<bool> &can_pin_messages, const ::tele_rest::OptionalParam<bool> &can_manage_topics) {
    QString fullPath = QString(_serverConfigs["promoteChatMemberPost"][_serverIndices.value("promoteChatMemberPost")].URL()+"/promoteChatMember");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::promoteChatMemberPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::promoteChatMemberPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT promoteChatMemberPostSignal(output);
        Q_EMIT promoteChatMemberPostSignalFull(worker, output);
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

        Q_EMIT promoteChatMemberPostSignalE(output, error_type, error_str);
        Q_EMIT promoteChatMemberPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT promoteChatMemberPostSignalError(output, error_type, error_str);
        Q_EMIT promoteChatMemberPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::readBusinessMessagePost(const QString &business_connection_id, const qint32 &chat_id, const qint32 &message_id) {
    QString fullPath = QString(_serverConfigs["readBusinessMessagePost"][_serverIndices.value("readBusinessMessagePost")].URL()+"/readBusinessMessage");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::readBusinessMessagePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::readBusinessMessagePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT readBusinessMessagePostSignal(output);
        Q_EMIT readBusinessMessagePostSignalFull(worker, output);
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

        Q_EMIT readBusinessMessagePostSignalE(output, error_type, error_str);
        Q_EMIT readBusinessMessagePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT readBusinessMessagePostSignalError(output, error_type, error_str);
        Q_EMIT readBusinessMessagePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::refundStarPaymentPost(const qint32 &user_id, const QString &telegram_payment_charge_id) {
    QString fullPath = QString(_serverConfigs["refundStarPaymentPost"][_serverIndices.value("refundStarPaymentPost")].URL()+"/refundStarPayment");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::refundStarPaymentPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::refundStarPaymentPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT refundStarPaymentPostSignal(output);
        Q_EMIT refundStarPaymentPostSignalFull(worker, output);
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

        Q_EMIT refundStarPaymentPostSignalE(output, error_type, error_str);
        Q_EMIT refundStarPaymentPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT refundStarPaymentPostSignalError(output, error_type, error_str);
        Q_EMIT refundStarPaymentPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::removeBusinessAccountProfilePhotoPost(const QString &business_connection_id, const ::tele_rest::OptionalParam<bool> &is_public) {
    QString fullPath = QString(_serverConfigs["removeBusinessAccountProfilePhotoPost"][_serverIndices.value("removeBusinessAccountProfilePhotoPost")].URL()+"/removeBusinessAccountProfilePhoto");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::removeBusinessAccountProfilePhotoPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::removeBusinessAccountProfilePhotoPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT removeBusinessAccountProfilePhotoPostSignal(output);
        Q_EMIT removeBusinessAccountProfilePhotoPostSignalFull(worker, output);
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

        Q_EMIT removeBusinessAccountProfilePhotoPostSignalE(output, error_type, error_str);
        Q_EMIT removeBusinessAccountProfilePhotoPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT removeBusinessAccountProfilePhotoPostSignalError(output, error_type, error_str);
        Q_EMIT removeBusinessAccountProfilePhotoPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::removeChatVerificationPost(const OAI_sendMessage_post_request_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["removeChatVerificationPost"][_serverIndices.value("removeChatVerificationPost")].URL()+"/removeChatVerification");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::removeChatVerificationPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::removeChatVerificationPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT removeChatVerificationPostSignal(output);
        Q_EMIT removeChatVerificationPostSignalFull(worker, output);
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

        Q_EMIT removeChatVerificationPostSignalE(output, error_type, error_str);
        Q_EMIT removeChatVerificationPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT removeChatVerificationPostSignalError(output, error_type, error_str);
        Q_EMIT removeChatVerificationPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::removeUserVerificationPost(const qint32 &user_id) {
    QString fullPath = QString(_serverConfigs["removeUserVerificationPost"][_serverIndices.value("removeUserVerificationPost")].URL()+"/removeUserVerification");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::removeUserVerificationPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::removeUserVerificationPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT removeUserVerificationPostSignal(output);
        Q_EMIT removeUserVerificationPostSignalFull(worker, output);
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

        Q_EMIT removeUserVerificationPostSignalE(output, error_type, error_str);
        Q_EMIT removeUserVerificationPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT removeUserVerificationPostSignalError(output, error_type, error_str);
        Q_EMIT removeUserVerificationPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::reopenForumTopicPost(const OAI_restrictChatMember_post_request_chat_id &chat_id, const qint32 &message_thread_id) {
    QString fullPath = QString(_serverConfigs["reopenForumTopicPost"][_serverIndices.value("reopenForumTopicPost")].URL()+"/reopenForumTopic");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::reopenForumTopicPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::reopenForumTopicPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT reopenForumTopicPostSignal(output);
        Q_EMIT reopenForumTopicPostSignalFull(worker, output);
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

        Q_EMIT reopenForumTopicPostSignalE(output, error_type, error_str);
        Q_EMIT reopenForumTopicPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT reopenForumTopicPostSignalError(output, error_type, error_str);
        Q_EMIT reopenForumTopicPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::reopenGeneralForumTopicPost(const OAI_restrictChatMember_post_request_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["reopenGeneralForumTopicPost"][_serverIndices.value("reopenGeneralForumTopicPost")].URL()+"/reopenGeneralForumTopic");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::reopenGeneralForumTopicPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::reopenGeneralForumTopicPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT reopenGeneralForumTopicPostSignal(output);
        Q_EMIT reopenGeneralForumTopicPostSignalFull(worker, output);
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

        Q_EMIT reopenGeneralForumTopicPostSignalE(output, error_type, error_str);
        Q_EMIT reopenGeneralForumTopicPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT reopenGeneralForumTopicPostSignalError(output, error_type, error_str);
        Q_EMIT reopenGeneralForumTopicPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::replaceStickerInSetPost(const qint32 &user_id, const QString &name, const QString &old_sticker, const OAIInputSticker &sticker) {
    QString fullPath = QString(_serverConfigs["replaceStickerInSetPost"][_serverIndices.value("replaceStickerInSetPost")].URL()+"/replaceStickerInSet");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::replaceStickerInSetPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::replaceStickerInSetPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT replaceStickerInSetPostSignal(output);
        Q_EMIT replaceStickerInSetPostSignalFull(worker, output);
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

        Q_EMIT replaceStickerInSetPostSignalE(output, error_type, error_str);
        Q_EMIT replaceStickerInSetPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT replaceStickerInSetPostSignalError(output, error_type, error_str);
        Q_EMIT replaceStickerInSetPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::restrictChatMemberPost(const OAI_restrictChatMember_post_request_chat_id &chat_id, const qint32 &user_id, const OAIChatPermissions &permissions, const ::tele_rest::OptionalParam<bool> &use_independent_chat_permissions, const ::tele_rest::OptionalParam<qint32> &until_date) {
    QString fullPath = QString(_serverConfigs["restrictChatMemberPost"][_serverIndices.value("restrictChatMemberPost")].URL()+"/restrictChatMember");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::restrictChatMemberPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::restrictChatMemberPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT restrictChatMemberPostSignal(output);
        Q_EMIT restrictChatMemberPostSignalFull(worker, output);
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

        Q_EMIT restrictChatMemberPostSignalE(output, error_type, error_str);
        Q_EMIT restrictChatMemberPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT restrictChatMemberPostSignalError(output, error_type, error_str);
        Q_EMIT restrictChatMemberPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::revokeChatInviteLinkPost(const OAI_revokeChatInviteLink_post_request_chat_id &chat_id, const QString &invite_link) {
    QString fullPath = QString(_serverConfigs["revokeChatInviteLinkPost"][_serverIndices.value("revokeChatInviteLinkPost")].URL()+"/revokeChatInviteLink");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::revokeChatInviteLinkPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::revokeChatInviteLinkPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_createChatInviteLink_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT revokeChatInviteLinkPostSignal(output);
        Q_EMIT revokeChatInviteLinkPostSignalFull(worker, output);
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

        Q_EMIT revokeChatInviteLinkPostSignalE(output, error_type, error_str);
        Q_EMIT revokeChatInviteLinkPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT revokeChatInviteLinkPostSignalError(output, error_type, error_str);
        Q_EMIT revokeChatInviteLinkPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::savePreparedInlineMessagePost(const qint32 &user_id, const OAIInlineQueryResult &result, const ::tele_rest::OptionalParam<bool> &allow_user_chats, const ::tele_rest::OptionalParam<bool> &allow_bot_chats, const ::tele_rest::OptionalParam<bool> &allow_group_chats, const ::tele_rest::OptionalParam<bool> &allow_channel_chats) {
    QString fullPath = QString(_serverConfigs["savePreparedInlineMessagePost"][_serverIndices.value("savePreparedInlineMessagePost")].URL()+"/savePreparedInlineMessage");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::savePreparedInlineMessagePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::savePreparedInlineMessagePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_savePreparedInlineMessage_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT savePreparedInlineMessagePostSignal(output);
        Q_EMIT savePreparedInlineMessagePostSignalFull(worker, output);
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

        Q_EMIT savePreparedInlineMessagePostSignalE(output, error_type, error_str);
        Q_EMIT savePreparedInlineMessagePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT savePreparedInlineMessagePostSignalError(output, error_type, error_str);
        Q_EMIT savePreparedInlineMessagePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::sendAnimationPost(const OAI_sendMessage_post_request_chat_id &chat_id, const OAI_sendAnimation_post_request_animation &animation, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<qint32> &duration, const ::tele_rest::OptionalParam<qint32> &width, const ::tele_rest::OptionalParam<qint32> &height, const ::tele_rest::OptionalParam<OAI_sendAudio_post_request_thumbnail> &thumbnail, const ::tele_rest::OptionalParam<QString> &caption, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities, const ::tele_rest::OptionalParam<bool> &show_caption_above_media, const ::tele_rest::OptionalParam<bool> &has_spoiler, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["sendAnimationPost"][_serverIndices.value("sendAnimationPost")].URL()+"/sendAnimation");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::sendAnimationPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::sendAnimationPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_sendMessage_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT sendAnimationPostSignal(output);
        Q_EMIT sendAnimationPostSignalFull(worker, output);
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

        Q_EMIT sendAnimationPostSignalE(output, error_type, error_str);
        Q_EMIT sendAnimationPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT sendAnimationPostSignalError(output, error_type, error_str);
        Q_EMIT sendAnimationPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::sendAudioPost(const OAI_sendMessage_post_request_chat_id &chat_id, const OAI_sendAudio_post_request_audio &audio, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<QString> &caption, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities, const ::tele_rest::OptionalParam<qint32> &duration, const ::tele_rest::OptionalParam<QString> &performer, const ::tele_rest::OptionalParam<QString> &title, const ::tele_rest::OptionalParam<OAI_sendAudio_post_request_thumbnail> &thumbnail, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["sendAudioPost"][_serverIndices.value("sendAudioPost")].URL()+"/sendAudio");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::sendAudioPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::sendAudioPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_sendMessage_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT sendAudioPostSignal(output);
        Q_EMIT sendAudioPostSignalFull(worker, output);
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

        Q_EMIT sendAudioPostSignalE(output, error_type, error_str);
        Q_EMIT sendAudioPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT sendAudioPostSignalError(output, error_type, error_str);
        Q_EMIT sendAudioPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::sendChatActionPost(const OAI_sendMessage_post_request_chat_id &chat_id, const QString &action, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id) {
    QString fullPath = QString(_serverConfigs["sendChatActionPost"][_serverIndices.value("sendChatActionPost")].URL()+"/sendChatAction");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::sendChatActionPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::sendChatActionPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT sendChatActionPostSignal(output);
        Q_EMIT sendChatActionPostSignalFull(worker, output);
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

        Q_EMIT sendChatActionPostSignalE(output, error_type, error_str);
        Q_EMIT sendChatActionPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT sendChatActionPostSignalError(output, error_type, error_str);
        Q_EMIT sendChatActionPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::sendContactPost(const OAI_sendMessage_post_request_chat_id &chat_id, const QString &phone_number, const QString &first_name, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<QString> &last_name, const ::tele_rest::OptionalParam<QString> &vcard, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["sendContactPost"][_serverIndices.value("sendContactPost")].URL()+"/sendContact");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::sendContactPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::sendContactPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_sendMessage_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT sendContactPostSignal(output);
        Q_EMIT sendContactPostSignalFull(worker, output);
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

        Q_EMIT sendContactPostSignalE(output, error_type, error_str);
        Q_EMIT sendContactPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT sendContactPostSignalError(output, error_type, error_str);
        Q_EMIT sendContactPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::sendDicePost(const OAI_sendMessage_post_request_chat_id &chat_id, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<QString> &emoji, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["sendDicePost"][_serverIndices.value("sendDicePost")].URL()+"/sendDice");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::sendDicePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::sendDicePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_sendMessage_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT sendDicePostSignal(output);
        Q_EMIT sendDicePostSignalFull(worker, output);
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

        Q_EMIT sendDicePostSignalE(output, error_type, error_str);
        Q_EMIT sendDicePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT sendDicePostSignalError(output, error_type, error_str);
        Q_EMIT sendDicePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::sendDocumentPost(const OAI_sendMessage_post_request_chat_id &chat_id, const OAI_sendDocument_post_request_document &document, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<OAI_sendAudio_post_request_thumbnail> &thumbnail, const ::tele_rest::OptionalParam<QString> &caption, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities, const ::tele_rest::OptionalParam<bool> &disable_content_type_detection, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["sendDocumentPost"][_serverIndices.value("sendDocumentPost")].URL()+"/sendDocument");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::sendDocumentPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::sendDocumentPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_sendMessage_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT sendDocumentPostSignal(output);
        Q_EMIT sendDocumentPostSignalFull(worker, output);
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

        Q_EMIT sendDocumentPostSignalE(output, error_type, error_str);
        Q_EMIT sendDocumentPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT sendDocumentPostSignalError(output, error_type, error_str);
        Q_EMIT sendDocumentPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::sendGamePost(const qint32 &chat_id, const QString &game_short_name, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["sendGamePost"][_serverIndices.value("sendGamePost")].URL()+"/sendGame");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::sendGamePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::sendGamePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_sendMessage_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT sendGamePostSignal(output);
        Q_EMIT sendGamePostSignalFull(worker, output);
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

        Q_EMIT sendGamePostSignalE(output, error_type, error_str);
        Q_EMIT sendGamePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT sendGamePostSignalError(output, error_type, error_str);
        Q_EMIT sendGamePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::sendGiftPost(const QString &gift_id, const ::tele_rest::OptionalParam<qint32> &user_id, const ::tele_rest::OptionalParam<OAI_sendGift_post_request_chat_id> &chat_id, const ::tele_rest::OptionalParam<bool> &pay_for_upgrade, const ::tele_rest::OptionalParam<QString> &text, const ::tele_rest::OptionalParam<QString> &text_parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &text_entities) {
    QString fullPath = QString(_serverConfigs["sendGiftPost"][_serverIndices.value("sendGiftPost")].URL()+"/sendGift");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::sendGiftPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::sendGiftPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT sendGiftPostSignal(output);
        Q_EMIT sendGiftPostSignalFull(worker, output);
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

        Q_EMIT sendGiftPostSignalE(output, error_type, error_str);
        Q_EMIT sendGiftPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT sendGiftPostSignalError(output, error_type, error_str);
        Q_EMIT sendGiftPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::sendInvoicePost(const OAI_sendMessage_post_request_chat_id &chat_id, const QString &title, const QString &description, const QString &payload, const QString &currency, const QList<OAILabeledPrice> &prices, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<QString> &provider_token, const ::tele_rest::OptionalParam<qint32> &max_tip_amount, const ::tele_rest::OptionalParam<QList<qint32>> &suggested_tip_amounts, const ::tele_rest::OptionalParam<QString> &start_parameter, const ::tele_rest::OptionalParam<QString> &provider_data, const ::tele_rest::OptionalParam<QString> &photo_url, const ::tele_rest::OptionalParam<qint32> &photo_size, const ::tele_rest::OptionalParam<qint32> &photo_width, const ::tele_rest::OptionalParam<qint32> &photo_height, const ::tele_rest::OptionalParam<bool> &need_name, const ::tele_rest::OptionalParam<bool> &need_phone_number, const ::tele_rest::OptionalParam<bool> &need_email, const ::tele_rest::OptionalParam<bool> &need_shipping_address, const ::tele_rest::OptionalParam<bool> &send_phone_number_to_provider, const ::tele_rest::OptionalParam<bool> &send_email_to_provider, const ::tele_rest::OptionalParam<bool> &is_flexible, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["sendInvoicePost"][_serverIndices.value("sendInvoicePost")].URL()+"/sendInvoice");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::sendInvoicePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::sendInvoicePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_sendMessage_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT sendInvoicePostSignal(output);
        Q_EMIT sendInvoicePostSignalFull(worker, output);
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

        Q_EMIT sendInvoicePostSignalE(output, error_type, error_str);
        Q_EMIT sendInvoicePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT sendInvoicePostSignalError(output, error_type, error_str);
        Q_EMIT sendInvoicePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::sendLocationPost(const OAI_sendMessage_post_request_chat_id &chat_id, const double &latitude, const double &longitude, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<double> &horizontal_accuracy, const ::tele_rest::OptionalParam<qint32> &live_period, const ::tele_rest::OptionalParam<qint32> &heading, const ::tele_rest::OptionalParam<qint32> &proximity_alert_radius, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["sendLocationPost"][_serverIndices.value("sendLocationPost")].URL()+"/sendLocation");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::sendLocationPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::sendLocationPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_sendMessage_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT sendLocationPostSignal(output);
        Q_EMIT sendLocationPostSignalFull(worker, output);
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

        Q_EMIT sendLocationPostSignalE(output, error_type, error_str);
        Q_EMIT sendLocationPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT sendLocationPostSignalError(output, error_type, error_str);
        Q_EMIT sendLocationPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::sendMediaGroupPost(const OAI_sendMessage_post_request_chat_id &chat_id, const QList<OAI_sendMediaGroup_post_request_media_inner> &media, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters) {
    QString fullPath = QString(_serverConfigs["sendMediaGroupPost"][_serverIndices.value("sendMediaGroupPost")].URL()+"/sendMediaGroup");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::sendMediaGroupPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::sendMediaGroupPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_sendMediaGroup_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT sendMediaGroupPostSignal(output);
        Q_EMIT sendMediaGroupPostSignalFull(worker, output);
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

        Q_EMIT sendMediaGroupPostSignalE(output, error_type, error_str);
        Q_EMIT sendMediaGroupPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT sendMediaGroupPostSignalError(output, error_type, error_str);
        Q_EMIT sendMediaGroupPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::sendMessagePost(const OAI_sendMessage_post_request_chat_id &chat_id, const QString &text, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &entities, const ::tele_rest::OptionalParam<OAILinkPreviewOptions> &link_preview_options, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["sendMessagePost"][_serverIndices.value("sendMessagePost")].URL()+"/sendMessage");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::sendMessagePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::sendMessagePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_sendMessage_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT sendMessagePostSignal(output);
        Q_EMIT sendMessagePostSignalFull(worker, output);
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

        Q_EMIT sendMessagePostSignalE(output, error_type, error_str);
        Q_EMIT sendMessagePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT sendMessagePostSignalError(output, error_type, error_str);
        Q_EMIT sendMessagePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::sendPaidMediaPost(const OAI_sendPaidMedia_post_request_chat_id &chat_id, const qint32 &star_count, const QList<OAIInputPaidMedia> &media, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<QString> &payload, const ::tele_rest::OptionalParam<QString> &caption, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities, const ::tele_rest::OptionalParam<bool> &show_caption_above_media, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["sendPaidMediaPost"][_serverIndices.value("sendPaidMediaPost")].URL()+"/sendPaidMedia");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::sendPaidMediaPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::sendPaidMediaPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_sendMessage_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT sendPaidMediaPostSignal(output);
        Q_EMIT sendPaidMediaPostSignalFull(worker, output);
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

        Q_EMIT sendPaidMediaPostSignalE(output, error_type, error_str);
        Q_EMIT sendPaidMediaPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT sendPaidMediaPostSignalError(output, error_type, error_str);
        Q_EMIT sendPaidMediaPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::sendPhotoPost(const OAI_sendMessage_post_request_chat_id &chat_id, const OAI_sendPhoto_post_request_photo &photo, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<QString> &caption, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities, const ::tele_rest::OptionalParam<bool> &show_caption_above_media, const ::tele_rest::OptionalParam<bool> &has_spoiler, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["sendPhotoPost"][_serverIndices.value("sendPhotoPost")].URL()+"/sendPhoto");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::sendPhotoPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::sendPhotoPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_sendMessage_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT sendPhotoPostSignal(output);
        Q_EMIT sendPhotoPostSignalFull(worker, output);
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

        Q_EMIT sendPhotoPostSignalE(output, error_type, error_str);
        Q_EMIT sendPhotoPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT sendPhotoPostSignalError(output, error_type, error_str);
        Q_EMIT sendPhotoPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::sendPollPost(const OAI_sendMessage_post_request_chat_id &chat_id, const QString &question, const QList<OAIInputPollOption> &options, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<QString> &question_parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &question_entities, const ::tele_rest::OptionalParam<bool> &is_anonymous, const ::tele_rest::OptionalParam<QString> &type, const ::tele_rest::OptionalParam<bool> &allows_multiple_answers, const ::tele_rest::OptionalParam<qint32> &correct_option_id, const ::tele_rest::OptionalParam<QString> &explanation, const ::tele_rest::OptionalParam<QString> &explanation_parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &explanation_entities, const ::tele_rest::OptionalParam<qint32> &open_period, const ::tele_rest::OptionalParam<qint32> &close_date, const ::tele_rest::OptionalParam<bool> &is_closed, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["sendPollPost"][_serverIndices.value("sendPollPost")].URL()+"/sendPoll");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::sendPollPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::sendPollPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_sendMessage_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT sendPollPostSignal(output);
        Q_EMIT sendPollPostSignalFull(worker, output);
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

        Q_EMIT sendPollPostSignalE(output, error_type, error_str);
        Q_EMIT sendPollPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT sendPollPostSignalError(output, error_type, error_str);
        Q_EMIT sendPollPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::sendStickerPost(const OAI_sendMessage_post_request_chat_id &chat_id, const OAI_sendSticker_post_request_sticker &sticker, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<QString> &emoji, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["sendStickerPost"][_serverIndices.value("sendStickerPost")].URL()+"/sendSticker");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::sendStickerPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::sendStickerPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_sendMessage_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT sendStickerPostSignal(output);
        Q_EMIT sendStickerPostSignalFull(worker, output);
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

        Q_EMIT sendStickerPostSignalE(output, error_type, error_str);
        Q_EMIT sendStickerPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT sendStickerPostSignalError(output, error_type, error_str);
        Q_EMIT sendStickerPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::sendVenuePost(const OAI_sendMessage_post_request_chat_id &chat_id, const double &latitude, const double &longitude, const QString &title, const QString &address, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<QString> &foursquare_id, const ::tele_rest::OptionalParam<QString> &foursquare_type, const ::tele_rest::OptionalParam<QString> &google_place_id, const ::tele_rest::OptionalParam<QString> &google_place_type, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["sendVenuePost"][_serverIndices.value("sendVenuePost")].URL()+"/sendVenue");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::sendVenuePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::sendVenuePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_sendMessage_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT sendVenuePostSignal(output);
        Q_EMIT sendVenuePostSignalFull(worker, output);
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

        Q_EMIT sendVenuePostSignalE(output, error_type, error_str);
        Q_EMIT sendVenuePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT sendVenuePostSignalError(output, error_type, error_str);
        Q_EMIT sendVenuePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::sendVideoNotePost(const OAI_sendMessage_post_request_chat_id &chat_id, const OAI_sendVideoNote_post_request_video_note &video_note, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<qint32> &duration, const ::tele_rest::OptionalParam<qint32> &length, const ::tele_rest::OptionalParam<OAI_sendAudio_post_request_thumbnail> &thumbnail, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["sendVideoNotePost"][_serverIndices.value("sendVideoNotePost")].URL()+"/sendVideoNote");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::sendVideoNotePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::sendVideoNotePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_sendMessage_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT sendVideoNotePostSignal(output);
        Q_EMIT sendVideoNotePostSignalFull(worker, output);
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

        Q_EMIT sendVideoNotePostSignalE(output, error_type, error_str);
        Q_EMIT sendVideoNotePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT sendVideoNotePostSignalError(output, error_type, error_str);
        Q_EMIT sendVideoNotePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::sendVideoPost(const OAI_sendMessage_post_request_chat_id &chat_id, const OAI_sendVideo_post_request_video &video, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<qint32> &duration, const ::tele_rest::OptionalParam<qint32> &width, const ::tele_rest::OptionalParam<qint32> &height, const ::tele_rest::OptionalParam<OAI_sendAudio_post_request_thumbnail> &thumbnail, const ::tele_rest::OptionalParam<OAI_sendVideo_post_request_cover> &cover, const ::tele_rest::OptionalParam<qint32> &start_timestamp, const ::tele_rest::OptionalParam<QString> &caption, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities, const ::tele_rest::OptionalParam<bool> &show_caption_above_media, const ::tele_rest::OptionalParam<bool> &has_spoiler, const ::tele_rest::OptionalParam<bool> &supports_streaming, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["sendVideoPost"][_serverIndices.value("sendVideoPost")].URL()+"/sendVideo");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::sendVideoPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::sendVideoPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_sendMessage_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT sendVideoPostSignal(output);
        Q_EMIT sendVideoPostSignalFull(worker, output);
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

        Q_EMIT sendVideoPostSignalE(output, error_type, error_str);
        Q_EMIT sendVideoPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT sendVideoPostSignalError(output, error_type, error_str);
        Q_EMIT sendVideoPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::sendVoicePost(const OAI_sendMessage_post_request_chat_id &chat_id, const OAI_sendVoice_post_request_voice &voice, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id, const ::tele_rest::OptionalParam<QString> &caption, const ::tele_rest::OptionalParam<QString> &parse_mode, const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities, const ::tele_rest::OptionalParam<qint32> &duration, const ::tele_rest::OptionalParam<bool> &disable_notification, const ::tele_rest::OptionalParam<bool> &protect_content, const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast, const ::tele_rest::OptionalParam<QString> &message_effect_id, const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters, const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["sendVoicePost"][_serverIndices.value("sendVoicePost")].URL()+"/sendVoice");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::sendVoicePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::sendVoicePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_sendMessage_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT sendVoicePostSignal(output);
        Q_EMIT sendVoicePostSignalFull(worker, output);
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

        Q_EMIT sendVoicePostSignalE(output, error_type, error_str);
        Q_EMIT sendVoicePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT sendVoicePostSignalError(output, error_type, error_str);
        Q_EMIT sendVoicePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setBusinessAccountBioPost(const QString &business_connection_id, const ::tele_rest::OptionalParam<QString> &bio) {
    QString fullPath = QString(_serverConfigs["setBusinessAccountBioPost"][_serverIndices.value("setBusinessAccountBioPost")].URL()+"/setBusinessAccountBio");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setBusinessAccountBioPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setBusinessAccountBioPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setBusinessAccountBioPostSignal(output);
        Q_EMIT setBusinessAccountBioPostSignalFull(worker, output);
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

        Q_EMIT setBusinessAccountBioPostSignalE(output, error_type, error_str);
        Q_EMIT setBusinessAccountBioPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setBusinessAccountBioPostSignalError(output, error_type, error_str);
        Q_EMIT setBusinessAccountBioPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setBusinessAccountGiftSettingsPost(const QString &business_connection_id, const bool &show_gift_button, const OAIAcceptedGiftTypes &accepted_gift_types) {
    QString fullPath = QString(_serverConfigs["setBusinessAccountGiftSettingsPost"][_serverIndices.value("setBusinessAccountGiftSettingsPost")].URL()+"/setBusinessAccountGiftSettings");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setBusinessAccountGiftSettingsPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setBusinessAccountGiftSettingsPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setBusinessAccountGiftSettingsPostSignal(output);
        Q_EMIT setBusinessAccountGiftSettingsPostSignalFull(worker, output);
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

        Q_EMIT setBusinessAccountGiftSettingsPostSignalE(output, error_type, error_str);
        Q_EMIT setBusinessAccountGiftSettingsPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setBusinessAccountGiftSettingsPostSignalError(output, error_type, error_str);
        Q_EMIT setBusinessAccountGiftSettingsPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setBusinessAccountNamePost(const QString &business_connection_id, const QString &first_name, const ::tele_rest::OptionalParam<QString> &last_name) {
    QString fullPath = QString(_serverConfigs["setBusinessAccountNamePost"][_serverIndices.value("setBusinessAccountNamePost")].URL()+"/setBusinessAccountName");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setBusinessAccountNamePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setBusinessAccountNamePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setBusinessAccountNamePostSignal(output);
        Q_EMIT setBusinessAccountNamePostSignalFull(worker, output);
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

        Q_EMIT setBusinessAccountNamePostSignalE(output, error_type, error_str);
        Q_EMIT setBusinessAccountNamePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setBusinessAccountNamePostSignalError(output, error_type, error_str);
        Q_EMIT setBusinessAccountNamePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setBusinessAccountProfilePhotoPost(const QString &business_connection_id, const OAIInputProfilePhoto &photo, const ::tele_rest::OptionalParam<bool> &is_public) {
    QString fullPath = QString(_serverConfigs["setBusinessAccountProfilePhotoPost"][_serverIndices.value("setBusinessAccountProfilePhotoPost")].URL()+"/setBusinessAccountProfilePhoto");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setBusinessAccountProfilePhotoPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setBusinessAccountProfilePhotoPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setBusinessAccountProfilePhotoPostSignal(output);
        Q_EMIT setBusinessAccountProfilePhotoPostSignalFull(worker, output);
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

        Q_EMIT setBusinessAccountProfilePhotoPostSignalE(output, error_type, error_str);
        Q_EMIT setBusinessAccountProfilePhotoPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setBusinessAccountProfilePhotoPostSignalError(output, error_type, error_str);
        Q_EMIT setBusinessAccountProfilePhotoPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setBusinessAccountUsernamePost(const QString &business_connection_id, const ::tele_rest::OptionalParam<QString> &username) {
    QString fullPath = QString(_serverConfigs["setBusinessAccountUsernamePost"][_serverIndices.value("setBusinessAccountUsernamePost")].URL()+"/setBusinessAccountUsername");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setBusinessAccountUsernamePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setBusinessAccountUsernamePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setBusinessAccountUsernamePostSignal(output);
        Q_EMIT setBusinessAccountUsernamePostSignalFull(worker, output);
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

        Q_EMIT setBusinessAccountUsernamePostSignalE(output, error_type, error_str);
        Q_EMIT setBusinessAccountUsernamePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setBusinessAccountUsernamePostSignalError(output, error_type, error_str);
        Q_EMIT setBusinessAccountUsernamePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setChatAdministratorCustomTitlePost(const OAI_restrictChatMember_post_request_chat_id &chat_id, const qint32 &user_id, const QString &custom_title) {
    QString fullPath = QString(_serverConfigs["setChatAdministratorCustomTitlePost"][_serverIndices.value("setChatAdministratorCustomTitlePost")].URL()+"/setChatAdministratorCustomTitle");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setChatAdministratorCustomTitlePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setChatAdministratorCustomTitlePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setChatAdministratorCustomTitlePostSignal(output);
        Q_EMIT setChatAdministratorCustomTitlePostSignalFull(worker, output);
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

        Q_EMIT setChatAdministratorCustomTitlePostSignalE(output, error_type, error_str);
        Q_EMIT setChatAdministratorCustomTitlePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setChatAdministratorCustomTitlePostSignalError(output, error_type, error_str);
        Q_EMIT setChatAdministratorCustomTitlePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setChatDescriptionPost(const OAI_sendMessage_post_request_chat_id &chat_id, const ::tele_rest::OptionalParam<QString> &description) {
    QString fullPath = QString(_serverConfigs["setChatDescriptionPost"][_serverIndices.value("setChatDescriptionPost")].URL()+"/setChatDescription");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setChatDescriptionPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setChatDescriptionPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setChatDescriptionPostSignal(output);
        Q_EMIT setChatDescriptionPostSignalFull(worker, output);
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

        Q_EMIT setChatDescriptionPostSignalE(output, error_type, error_str);
        Q_EMIT setChatDescriptionPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setChatDescriptionPostSignalError(output, error_type, error_str);
        Q_EMIT setChatDescriptionPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setChatMenuButtonPost(const ::tele_rest::OptionalParam<qint32> &chat_id, const ::tele_rest::OptionalParam<OAIMenuButton> &menu_button) {
    QString fullPath = QString(_serverConfigs["setChatMenuButtonPost"][_serverIndices.value("setChatMenuButtonPost")].URL()+"/setChatMenuButton");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setChatMenuButtonPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setChatMenuButtonPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setChatMenuButtonPostSignal(output);
        Q_EMIT setChatMenuButtonPostSignalFull(worker, output);
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

        Q_EMIT setChatMenuButtonPostSignalE(output, error_type, error_str);
        Q_EMIT setChatMenuButtonPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setChatMenuButtonPostSignalError(output, error_type, error_str);
        Q_EMIT setChatMenuButtonPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setChatPermissionsPost(const OAI_restrictChatMember_post_request_chat_id &chat_id, const OAIChatPermissions &permissions, const ::tele_rest::OptionalParam<bool> &use_independent_chat_permissions) {
    QString fullPath = QString(_serverConfigs["setChatPermissionsPost"][_serverIndices.value("setChatPermissionsPost")].URL()+"/setChatPermissions");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setChatPermissionsPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setChatPermissionsPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setChatPermissionsPostSignal(output);
        Q_EMIT setChatPermissionsPostSignalFull(worker, output);
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

        Q_EMIT setChatPermissionsPostSignalE(output, error_type, error_str);
        Q_EMIT setChatPermissionsPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setChatPermissionsPostSignalError(output, error_type, error_str);
        Q_EMIT setChatPermissionsPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setChatPhotoPost(const OAI_sendMessage_post_request_chat_id &chat_id, const QJsonValue &photo) {
    QString fullPath = QString(_serverConfigs["setChatPhotoPost"][_serverIndices.value("setChatPhotoPost")].URL()+"/setChatPhoto");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setChatPhotoPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setChatPhotoPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setChatPhotoPostSignal(output);
        Q_EMIT setChatPhotoPostSignalFull(worker, output);
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

        Q_EMIT setChatPhotoPostSignalE(output, error_type, error_str);
        Q_EMIT setChatPhotoPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setChatPhotoPostSignalError(output, error_type, error_str);
        Q_EMIT setChatPhotoPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setChatStickerSetPost(const OAI_restrictChatMember_post_request_chat_id &chat_id, const QString &sticker_set_name) {
    QString fullPath = QString(_serverConfigs["setChatStickerSetPost"][_serverIndices.value("setChatStickerSetPost")].URL()+"/setChatStickerSet");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setChatStickerSetPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setChatStickerSetPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setChatStickerSetPostSignal(output);
        Q_EMIT setChatStickerSetPostSignalFull(worker, output);
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

        Q_EMIT setChatStickerSetPostSignalE(output, error_type, error_str);
        Q_EMIT setChatStickerSetPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setChatStickerSetPostSignalError(output, error_type, error_str);
        Q_EMIT setChatStickerSetPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setChatTitlePost(const OAI_sendMessage_post_request_chat_id &chat_id, const QString &title) {
    QString fullPath = QString(_serverConfigs["setChatTitlePost"][_serverIndices.value("setChatTitlePost")].URL()+"/setChatTitle");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setChatTitlePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setChatTitlePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setChatTitlePostSignal(output);
        Q_EMIT setChatTitlePostSignalFull(worker, output);
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

        Q_EMIT setChatTitlePostSignalE(output, error_type, error_str);
        Q_EMIT setChatTitlePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setChatTitlePostSignalError(output, error_type, error_str);
        Q_EMIT setChatTitlePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setCustomEmojiStickerSetThumbnailPost(const QString &name, const ::tele_rest::OptionalParam<QString> &custom_emoji_id) {
    QString fullPath = QString(_serverConfigs["setCustomEmojiStickerSetThumbnailPost"][_serverIndices.value("setCustomEmojiStickerSetThumbnailPost")].URL()+"/setCustomEmojiStickerSetThumbnail");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setCustomEmojiStickerSetThumbnailPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setCustomEmojiStickerSetThumbnailPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setCustomEmojiStickerSetThumbnailPostSignal(output);
        Q_EMIT setCustomEmojiStickerSetThumbnailPostSignalFull(worker, output);
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

        Q_EMIT setCustomEmojiStickerSetThumbnailPostSignalE(output, error_type, error_str);
        Q_EMIT setCustomEmojiStickerSetThumbnailPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setCustomEmojiStickerSetThumbnailPostSignalError(output, error_type, error_str);
        Q_EMIT setCustomEmojiStickerSetThumbnailPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setGameScorePost(const qint32 &user_id, const qint32 &score, const ::tele_rest::OptionalParam<bool> &force, const ::tele_rest::OptionalParam<bool> &disable_edit_message, const ::tele_rest::OptionalParam<qint32> &chat_id, const ::tele_rest::OptionalParam<qint32> &message_id, const ::tele_rest::OptionalParam<QString> &inline_message_id) {
    QString fullPath = QString(_serverConfigs["setGameScorePost"][_serverIndices.value("setGameScorePost")].URL()+"/setGameScore");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setGameScorePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setGameScorePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_editMessageText_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setGameScorePostSignal(output);
        Q_EMIT setGameScorePostSignalFull(worker, output);
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

        Q_EMIT setGameScorePostSignalE(output, error_type, error_str);
        Q_EMIT setGameScorePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setGameScorePostSignalError(output, error_type, error_str);
        Q_EMIT setGameScorePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setMessageReactionPost(const OAI_sendMessage_post_request_chat_id &chat_id, const qint32 &message_id, const ::tele_rest::OptionalParam<QList<OAIReactionType>> &reaction, const ::tele_rest::OptionalParam<bool> &is_big) {
    QString fullPath = QString(_serverConfigs["setMessageReactionPost"][_serverIndices.value("setMessageReactionPost")].URL()+"/setMessageReaction");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setMessageReactionPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setMessageReactionPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setMessageReactionPostSignal(output);
        Q_EMIT setMessageReactionPostSignalFull(worker, output);
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

        Q_EMIT setMessageReactionPostSignalE(output, error_type, error_str);
        Q_EMIT setMessageReactionPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setMessageReactionPostSignalError(output, error_type, error_str);
        Q_EMIT setMessageReactionPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setMyCommandsPost(const QList<OAIBotCommand> &commands, const ::tele_rest::OptionalParam<OAIBotCommandScope> &scope, const ::tele_rest::OptionalParam<QString> &language_code) {
    QString fullPath = QString(_serverConfigs["setMyCommandsPost"][_serverIndices.value("setMyCommandsPost")].URL()+"/setMyCommands");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setMyCommandsPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setMyCommandsPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setMyCommandsPostSignal(output);
        Q_EMIT setMyCommandsPostSignalFull(worker, output);
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

        Q_EMIT setMyCommandsPostSignalE(output, error_type, error_str);
        Q_EMIT setMyCommandsPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setMyCommandsPostSignalError(output, error_type, error_str);
        Q_EMIT setMyCommandsPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setMyDefaultAdministratorRightsPost(const ::tele_rest::OptionalParam<OAIChatAdministratorRights> &rights, const ::tele_rest::OptionalParam<bool> &for_channels) {
    QString fullPath = QString(_serverConfigs["setMyDefaultAdministratorRightsPost"][_serverIndices.value("setMyDefaultAdministratorRightsPost")].URL()+"/setMyDefaultAdministratorRights");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setMyDefaultAdministratorRightsPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setMyDefaultAdministratorRightsPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setMyDefaultAdministratorRightsPostSignal(output);
        Q_EMIT setMyDefaultAdministratorRightsPostSignalFull(worker, output);
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

        Q_EMIT setMyDefaultAdministratorRightsPostSignalE(output, error_type, error_str);
        Q_EMIT setMyDefaultAdministratorRightsPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setMyDefaultAdministratorRightsPostSignalError(output, error_type, error_str);
        Q_EMIT setMyDefaultAdministratorRightsPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setMyDescriptionPost(const ::tele_rest::OptionalParam<QString> &description, const ::tele_rest::OptionalParam<QString> &language_code) {
    QString fullPath = QString(_serverConfigs["setMyDescriptionPost"][_serverIndices.value("setMyDescriptionPost")].URL()+"/setMyDescription");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setMyDescriptionPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setMyDescriptionPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setMyDescriptionPostSignal(output);
        Q_EMIT setMyDescriptionPostSignalFull(worker, output);
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

        Q_EMIT setMyDescriptionPostSignalE(output, error_type, error_str);
        Q_EMIT setMyDescriptionPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setMyDescriptionPostSignalError(output, error_type, error_str);
        Q_EMIT setMyDescriptionPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setMyNamePost(const ::tele_rest::OptionalParam<QString> &name, const ::tele_rest::OptionalParam<QString> &language_code) {
    QString fullPath = QString(_serverConfigs["setMyNamePost"][_serverIndices.value("setMyNamePost")].URL()+"/setMyName");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setMyNamePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setMyNamePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setMyNamePostSignal(output);
        Q_EMIT setMyNamePostSignalFull(worker, output);
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

        Q_EMIT setMyNamePostSignalE(output, error_type, error_str);
        Q_EMIT setMyNamePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setMyNamePostSignalError(output, error_type, error_str);
        Q_EMIT setMyNamePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setMyShortDescriptionPost(const ::tele_rest::OptionalParam<QString> &short_description, const ::tele_rest::OptionalParam<QString> &language_code) {
    QString fullPath = QString(_serverConfigs["setMyShortDescriptionPost"][_serverIndices.value("setMyShortDescriptionPost")].URL()+"/setMyShortDescription");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setMyShortDescriptionPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setMyShortDescriptionPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setMyShortDescriptionPostSignal(output);
        Q_EMIT setMyShortDescriptionPostSignalFull(worker, output);
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

        Q_EMIT setMyShortDescriptionPostSignalE(output, error_type, error_str);
        Q_EMIT setMyShortDescriptionPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setMyShortDescriptionPostSignalError(output, error_type, error_str);
        Q_EMIT setMyShortDescriptionPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setPassportDataErrorsPost(const qint32 &user_id, const QList<OAIPassportElementError> &errors) {
    QString fullPath = QString(_serverConfigs["setPassportDataErrorsPost"][_serverIndices.value("setPassportDataErrorsPost")].URL()+"/setPassportDataErrors");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setPassportDataErrorsPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setPassportDataErrorsPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setPassportDataErrorsPostSignal(output);
        Q_EMIT setPassportDataErrorsPostSignalFull(worker, output);
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

        Q_EMIT setPassportDataErrorsPostSignalE(output, error_type, error_str);
        Q_EMIT setPassportDataErrorsPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setPassportDataErrorsPostSignalError(output, error_type, error_str);
        Q_EMIT setPassportDataErrorsPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setStickerEmojiListPost(const QString &sticker, const QList<QString> &emoji_list) {
    QString fullPath = QString(_serverConfigs["setStickerEmojiListPost"][_serverIndices.value("setStickerEmojiListPost")].URL()+"/setStickerEmojiList");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setStickerEmojiListPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setStickerEmojiListPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setStickerEmojiListPostSignal(output);
        Q_EMIT setStickerEmojiListPostSignalFull(worker, output);
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

        Q_EMIT setStickerEmojiListPostSignalE(output, error_type, error_str);
        Q_EMIT setStickerEmojiListPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setStickerEmojiListPostSignalError(output, error_type, error_str);
        Q_EMIT setStickerEmojiListPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setStickerKeywordsPost(const QString &sticker, const ::tele_rest::OptionalParam<QList<QString>> &keywords) {
    QString fullPath = QString(_serverConfigs["setStickerKeywordsPost"][_serverIndices.value("setStickerKeywordsPost")].URL()+"/setStickerKeywords");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setStickerKeywordsPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setStickerKeywordsPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setStickerKeywordsPostSignal(output);
        Q_EMIT setStickerKeywordsPostSignalFull(worker, output);
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

        Q_EMIT setStickerKeywordsPostSignalE(output, error_type, error_str);
        Q_EMIT setStickerKeywordsPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setStickerKeywordsPostSignalError(output, error_type, error_str);
        Q_EMIT setStickerKeywordsPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setStickerMaskPositionPost(const QString &sticker, const ::tele_rest::OptionalParam<OAIMaskPosition> &mask_position) {
    QString fullPath = QString(_serverConfigs["setStickerMaskPositionPost"][_serverIndices.value("setStickerMaskPositionPost")].URL()+"/setStickerMaskPosition");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setStickerMaskPositionPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setStickerMaskPositionPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setStickerMaskPositionPostSignal(output);
        Q_EMIT setStickerMaskPositionPostSignalFull(worker, output);
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

        Q_EMIT setStickerMaskPositionPostSignalE(output, error_type, error_str);
        Q_EMIT setStickerMaskPositionPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setStickerMaskPositionPostSignalError(output, error_type, error_str);
        Q_EMIT setStickerMaskPositionPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setStickerPositionInSetPost(const QString &sticker, const qint32 &position) {
    QString fullPath = QString(_serverConfigs["setStickerPositionInSetPost"][_serverIndices.value("setStickerPositionInSetPost")].URL()+"/setStickerPositionInSet");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setStickerPositionInSetPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setStickerPositionInSetPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setStickerPositionInSetPostSignal(output);
        Q_EMIT setStickerPositionInSetPostSignalFull(worker, output);
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

        Q_EMIT setStickerPositionInSetPostSignalE(output, error_type, error_str);
        Q_EMIT setStickerPositionInSetPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setStickerPositionInSetPostSignalError(output, error_type, error_str);
        Q_EMIT setStickerPositionInSetPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setStickerSetThumbnailPost(const QString &name, const qint32 &user_id, const QString &format, const ::tele_rest::OptionalParam<OAI_setStickerSetThumbnail_post_request_thumbnail> &thumbnail) {
    QString fullPath = QString(_serverConfigs["setStickerSetThumbnailPost"][_serverIndices.value("setStickerSetThumbnailPost")].URL()+"/setStickerSetThumbnail");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setStickerSetThumbnailPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setStickerSetThumbnailPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setStickerSetThumbnailPostSignal(output);
        Q_EMIT setStickerSetThumbnailPostSignalFull(worker, output);
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

        Q_EMIT setStickerSetThumbnailPostSignalE(output, error_type, error_str);
        Q_EMIT setStickerSetThumbnailPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setStickerSetThumbnailPostSignalError(output, error_type, error_str);
        Q_EMIT setStickerSetThumbnailPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setStickerSetTitlePost(const QString &name, const QString &title) {
    QString fullPath = QString(_serverConfigs["setStickerSetTitlePost"][_serverIndices.value("setStickerSetTitlePost")].URL()+"/setStickerSetTitle");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setStickerSetTitlePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setStickerSetTitlePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setStickerSetTitlePostSignal(output);
        Q_EMIT setStickerSetTitlePostSignalFull(worker, output);
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

        Q_EMIT setStickerSetTitlePostSignalE(output, error_type, error_str);
        Q_EMIT setStickerSetTitlePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setStickerSetTitlePostSignalError(output, error_type, error_str);
        Q_EMIT setStickerSetTitlePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setUserEmojiStatusPost(const qint32 &user_id, const ::tele_rest::OptionalParam<QString> &emoji_status_custom_emoji_id, const ::tele_rest::OptionalParam<qint32> &emoji_status_expiration_date) {
    QString fullPath = QString(_serverConfigs["setUserEmojiStatusPost"][_serverIndices.value("setUserEmojiStatusPost")].URL()+"/setUserEmojiStatus");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setUserEmojiStatusPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setUserEmojiStatusPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setUserEmojiStatusPostSignal(output);
        Q_EMIT setUserEmojiStatusPostSignalFull(worker, output);
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

        Q_EMIT setUserEmojiStatusPostSignalE(output, error_type, error_str);
        Q_EMIT setUserEmojiStatusPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setUserEmojiStatusPostSignalError(output, error_type, error_str);
        Q_EMIT setUserEmojiStatusPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::setWebhookPost(const QString &url, const ::tele_rest::OptionalParam<QJsonValue> &certificate, const ::tele_rest::OptionalParam<QString> &ip_address, const ::tele_rest::OptionalParam<qint32> &max_connections, const ::tele_rest::OptionalParam<QList<QString>> &allowed_updates, const ::tele_rest::OptionalParam<bool> &drop_pending_updates, const ::tele_rest::OptionalParam<QString> &secret_token) {
    QString fullPath = QString(_serverConfigs["setWebhookPost"][_serverIndices.value("setWebhookPost")].URL()+"/setWebhook");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::setWebhookPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::setWebhookPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT setWebhookPostSignal(output);
        Q_EMIT setWebhookPostSignalFull(worker, output);
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

        Q_EMIT setWebhookPostSignalE(output, error_type, error_str);
        Q_EMIT setWebhookPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT setWebhookPostSignalError(output, error_type, error_str);
        Q_EMIT setWebhookPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::stopMessageLiveLocationPost(const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<OAI_editMessageText_post_request_chat_id> &chat_id, const ::tele_rest::OptionalParam<qint32> &message_id, const ::tele_rest::OptionalParam<QString> &inline_message_id, const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["stopMessageLiveLocationPost"][_serverIndices.value("stopMessageLiveLocationPost")].URL()+"/stopMessageLiveLocation");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::stopMessageLiveLocationPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::stopMessageLiveLocationPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_editMessageText_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT stopMessageLiveLocationPostSignal(output);
        Q_EMIT stopMessageLiveLocationPostSignalFull(worker, output);
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

        Q_EMIT stopMessageLiveLocationPostSignalE(output, error_type, error_str);
        Q_EMIT stopMessageLiveLocationPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT stopMessageLiveLocationPostSignalError(output, error_type, error_str);
        Q_EMIT stopMessageLiveLocationPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::stopPollPost(const OAI_sendMessage_post_request_chat_id &chat_id, const qint32 &message_id, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup) {
    QString fullPath = QString(_serverConfigs["stopPollPost"][_serverIndices.value("stopPollPost")].URL()+"/stopPoll");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::stopPollPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::stopPollPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_stopPoll_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT stopPollPostSignal(output);
        Q_EMIT stopPollPostSignalFull(worker, output);
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

        Q_EMIT stopPollPostSignalE(output, error_type, error_str);
        Q_EMIT stopPollPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT stopPollPostSignalError(output, error_type, error_str);
        Q_EMIT stopPollPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::transferBusinessAccountStarsPost(const QString &business_connection_id, const qint32 &star_count) {
    QString fullPath = QString(_serverConfigs["transferBusinessAccountStarsPost"][_serverIndices.value("transferBusinessAccountStarsPost")].URL()+"/transferBusinessAccountStars");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::transferBusinessAccountStarsPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::transferBusinessAccountStarsPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT transferBusinessAccountStarsPostSignal(output);
        Q_EMIT transferBusinessAccountStarsPostSignalFull(worker, output);
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

        Q_EMIT transferBusinessAccountStarsPostSignalE(output, error_type, error_str);
        Q_EMIT transferBusinessAccountStarsPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT transferBusinessAccountStarsPostSignalError(output, error_type, error_str);
        Q_EMIT transferBusinessAccountStarsPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::transferGiftPost(const QString &business_connection_id, const QString &owned_gift_id, const qint32 &new_owner_chat_id, const ::tele_rest::OptionalParam<qint32> &star_count) {
    QString fullPath = QString(_serverConfigs["transferGiftPost"][_serverIndices.value("transferGiftPost")].URL()+"/transferGift");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::transferGiftPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::transferGiftPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT transferGiftPostSignal(output);
        Q_EMIT transferGiftPostSignalFull(worker, output);
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

        Q_EMIT transferGiftPostSignalE(output, error_type, error_str);
        Q_EMIT transferGiftPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT transferGiftPostSignalError(output, error_type, error_str);
        Q_EMIT transferGiftPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::unbanChatMemberPost(const OAI_banChatMember_post_request_chat_id &chat_id, const qint32 &user_id, const ::tele_rest::OptionalParam<bool> &only_if_banned) {
    QString fullPath = QString(_serverConfigs["unbanChatMemberPost"][_serverIndices.value("unbanChatMemberPost")].URL()+"/unbanChatMember");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::unbanChatMemberPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::unbanChatMemberPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT unbanChatMemberPostSignal(output);
        Q_EMIT unbanChatMemberPostSignalFull(worker, output);
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

        Q_EMIT unbanChatMemberPostSignalE(output, error_type, error_str);
        Q_EMIT unbanChatMemberPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT unbanChatMemberPostSignalError(output, error_type, error_str);
        Q_EMIT unbanChatMemberPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::unbanChatSenderChatPost(const OAI_sendMessage_post_request_chat_id &chat_id, const qint32 &sender_chat_id) {
    QString fullPath = QString(_serverConfigs["unbanChatSenderChatPost"][_serverIndices.value("unbanChatSenderChatPost")].URL()+"/unbanChatSenderChat");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::unbanChatSenderChatPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::unbanChatSenderChatPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT unbanChatSenderChatPostSignal(output);
        Q_EMIT unbanChatSenderChatPostSignalFull(worker, output);
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

        Q_EMIT unbanChatSenderChatPostSignalE(output, error_type, error_str);
        Q_EMIT unbanChatSenderChatPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT unbanChatSenderChatPostSignalError(output, error_type, error_str);
        Q_EMIT unbanChatSenderChatPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::unhideGeneralForumTopicPost(const OAI_restrictChatMember_post_request_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["unhideGeneralForumTopicPost"][_serverIndices.value("unhideGeneralForumTopicPost")].URL()+"/unhideGeneralForumTopic");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::unhideGeneralForumTopicPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::unhideGeneralForumTopicPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT unhideGeneralForumTopicPostSignal(output);
        Q_EMIT unhideGeneralForumTopicPostSignalFull(worker, output);
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

        Q_EMIT unhideGeneralForumTopicPostSignalE(output, error_type, error_str);
        Q_EMIT unhideGeneralForumTopicPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT unhideGeneralForumTopicPostSignalError(output, error_type, error_str);
        Q_EMIT unhideGeneralForumTopicPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::unpinAllChatMessagesPost(const OAI_sendMessage_post_request_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["unpinAllChatMessagesPost"][_serverIndices.value("unpinAllChatMessagesPost")].URL()+"/unpinAllChatMessages");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::unpinAllChatMessagesPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::unpinAllChatMessagesPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT unpinAllChatMessagesPostSignal(output);
        Q_EMIT unpinAllChatMessagesPostSignalFull(worker, output);
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

        Q_EMIT unpinAllChatMessagesPostSignalE(output, error_type, error_str);
        Q_EMIT unpinAllChatMessagesPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT unpinAllChatMessagesPostSignalError(output, error_type, error_str);
        Q_EMIT unpinAllChatMessagesPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::unpinAllForumTopicMessagesPost(const OAI_restrictChatMember_post_request_chat_id &chat_id, const qint32 &message_thread_id) {
    QString fullPath = QString(_serverConfigs["unpinAllForumTopicMessagesPost"][_serverIndices.value("unpinAllForumTopicMessagesPost")].URL()+"/unpinAllForumTopicMessages");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::unpinAllForumTopicMessagesPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::unpinAllForumTopicMessagesPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT unpinAllForumTopicMessagesPostSignal(output);
        Q_EMIT unpinAllForumTopicMessagesPostSignalFull(worker, output);
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

        Q_EMIT unpinAllForumTopicMessagesPostSignalE(output, error_type, error_str);
        Q_EMIT unpinAllForumTopicMessagesPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT unpinAllForumTopicMessagesPostSignalError(output, error_type, error_str);
        Q_EMIT unpinAllForumTopicMessagesPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::unpinAllGeneralForumTopicMessagesPost(const OAI_restrictChatMember_post_request_chat_id &chat_id) {
    QString fullPath = QString(_serverConfigs["unpinAllGeneralForumTopicMessagesPost"][_serverIndices.value("unpinAllGeneralForumTopicMessagesPost")].URL()+"/unpinAllGeneralForumTopicMessages");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::unpinAllGeneralForumTopicMessagesPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::unpinAllGeneralForumTopicMessagesPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT unpinAllGeneralForumTopicMessagesPostSignal(output);
        Q_EMIT unpinAllGeneralForumTopicMessagesPostSignalFull(worker, output);
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

        Q_EMIT unpinAllGeneralForumTopicMessagesPostSignalE(output, error_type, error_str);
        Q_EMIT unpinAllGeneralForumTopicMessagesPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT unpinAllGeneralForumTopicMessagesPostSignalError(output, error_type, error_str);
        Q_EMIT unpinAllGeneralForumTopicMessagesPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::unpinChatMessagePost(const OAI_sendMessage_post_request_chat_id &chat_id, const ::tele_rest::OptionalParam<QString> &business_connection_id, const ::tele_rest::OptionalParam<qint32> &message_id) {
    QString fullPath = QString(_serverConfigs["unpinChatMessagePost"][_serverIndices.value("unpinChatMessagePost")].URL()+"/unpinChatMessage");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::unpinChatMessagePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::unpinChatMessagePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT unpinChatMessagePostSignal(output);
        Q_EMIT unpinChatMessagePostSignalFull(worker, output);
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

        Q_EMIT unpinChatMessagePostSignalE(output, error_type, error_str);
        Q_EMIT unpinChatMessagePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT unpinChatMessagePostSignalError(output, error_type, error_str);
        Q_EMIT unpinChatMessagePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::upgradeGiftPost(const QString &business_connection_id, const QString &owned_gift_id, const ::tele_rest::OptionalParam<bool> &keep_original_details, const ::tele_rest::OptionalParam<qint32> &star_count) {
    QString fullPath = QString(_serverConfigs["upgradeGiftPost"][_serverIndices.value("upgradeGiftPost")].URL()+"/upgradeGift");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::upgradeGiftPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::upgradeGiftPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT upgradeGiftPostSignal(output);
        Q_EMIT upgradeGiftPostSignalFull(worker, output);
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

        Q_EMIT upgradeGiftPostSignalE(output, error_type, error_str);
        Q_EMIT upgradeGiftPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT upgradeGiftPostSignalError(output, error_type, error_str);
        Q_EMIT upgradeGiftPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::uploadStickerFilePost(const qint32 &user_id, const QJsonValue &sticker, const QString &sticker_format) {
    QString fullPath = QString(_serverConfigs["uploadStickerFilePost"][_serverIndices.value("uploadStickerFilePost")].URL()+"/uploadStickerFile");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::uploadStickerFilePostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::uploadStickerFilePostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_getFile_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT uploadStickerFilePostSignal(output);
        Q_EMIT uploadStickerFilePostSignalFull(worker, output);
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

        Q_EMIT uploadStickerFilePostSignalE(output, error_type, error_str);
        Q_EMIT uploadStickerFilePostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT uploadStickerFilePostSignalError(output, error_type, error_str);
        Q_EMIT uploadStickerFilePostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::verifyChatPost(const OAI_sendMessage_post_request_chat_id &chat_id, const ::tele_rest::OptionalParam<QString> &custom_description) {
    QString fullPath = QString(_serverConfigs["verifyChatPost"][_serverIndices.value("verifyChatPost")].URL()+"/verifyChat");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::verifyChatPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::verifyChatPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT verifyChatPostSignal(output);
        Q_EMIT verifyChatPostSignalFull(worker, output);
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

        Q_EMIT verifyChatPostSignalE(output, error_type, error_str);
        Q_EMIT verifyChatPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT verifyChatPostSignalError(output, error_type, error_str);
        Q_EMIT verifyChatPostSignalErrorFull(worker, error_type, error_str);
    }
}

void OAIDefaultApi::verifyUserPost(const qint32 &user_id, const ::tele_rest::OptionalParam<QString> &custom_description) {
    QString fullPath = QString(_serverConfigs["verifyUserPost"][_serverIndices.value("verifyUserPost")].URL()+"/verifyUser");
    
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


    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIDefaultApi::verifyUserPostCallback);
    connect(this, &OAIDefaultApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIDefaultApi::verifyUserPostCallback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAI_setWebhook_post_200_response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT verifyUserPostSignal(output);
        Q_EMIT verifyUserPostSignalFull(worker, output);
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

        Q_EMIT verifyUserPostSignalE(output, error_type, error_str);
        Q_EMIT verifyUserPostSignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT verifyUserPostSignalError(output, error_type, error_str);
        Q_EMIT verifyUserPostSignalErrorFull(worker, error_type, error_str);
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
