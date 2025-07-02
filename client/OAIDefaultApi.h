/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T07:03:12.172160579Z[Etc/UTC]
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

#ifndef OAI_OAIDefaultApi_H
#define OAI_OAIDefaultApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIAcceptedGiftTypes.h"
#include "OAIBotCommand.h"
#include "OAIBotCommandScope.h"
#include "OAIChatAdministratorRights.h"
#include "OAIChatPermissions.h"
#include "OAIError.h"
#include "OAIInlineKeyboardMarkup.h"
#include "OAIInlineQueryResult.h"
#include "OAIInlineQueryResultsButton.h"
#include "OAIInputMedia.h"
#include "OAIInputPaidMedia.h"
#include "OAIInputPollOption.h"
#include "OAIInputProfilePhoto.h"
#include "OAIInputSticker.h"
#include "OAIInputStoryContent.h"
#include "OAILabeledPrice.h"
#include "OAILinkPreviewOptions.h"
#include "OAIMaskPosition.h"
#include "OAIMenuButton.h"
#include "OAIMessageEntity.h"
#include "OAIPassportElementError.h"
#include "OAIPost_answerWebAppQuery_200_response.h"
#include "OAIPost_banChatMember_request_chat_id.h"
#include "OAIPost_copyMessage_200_response.h"
#include "OAIPost_createChatInviteLink_200_response.h"
#include "OAIPost_createChatSubscriptionInviteLink_request_chat_id.h"
#include "OAIPost_createForumTopic_200_response.h"
#include "OAIPost_editMessageText_200_response.h"
#include "OAIPost_editMessageText_request_chat_id.h"
#include "OAIPost_exportChatInviteLink_200_response.h"
#include "OAIPost_forwardMessage_request_from_chat_id.h"
#include "OAIPost_forwardMessages_200_response.h"
#include "OAIPost_forwardMessages_request_from_chat_id.h"
#include "OAIPost_getAvailableGifts_200_response.h"
#include "OAIPost_getBusinessAccountGifts_200_response.h"
#include "OAIPost_getBusinessAccountStarBalance_200_response.h"
#include "OAIPost_getBusinessConnection_200_response.h"
#include "OAIPost_getChatAdministrators_200_response.h"
#include "OAIPost_getChatMemberCount_200_response.h"
#include "OAIPost_getChatMember_200_response.h"
#include "OAIPost_getChatMenuButton_200_response.h"
#include "OAIPost_getChat_200_response.h"
#include "OAIPost_getFile_200_response.h"
#include "OAIPost_getForumTopicIconStickers_200_response.h"
#include "OAIPost_getGameHighScores_200_response.h"
#include "OAIPost_getMe_200_response.h"
#include "OAIPost_getMyCommands_200_response.h"
#include "OAIPost_getMyDefaultAdministratorRights_200_response.h"
#include "OAIPost_getMyDescription_200_response.h"
#include "OAIPost_getMyName_200_response.h"
#include "OAIPost_getMyShortDescription_200_response.h"
#include "OAIPost_getStarTransactions_200_response.h"
#include "OAIPost_getStickerSet_200_response.h"
#include "OAIPost_getUpdates_200_response.h"
#include "OAIPost_getUserChatBoosts_200_response.h"
#include "OAIPost_getUserChatBoosts_request_chat_id.h"
#include "OAIPost_getUserProfilePhotos_200_response.h"
#include "OAIPost_getWebhookInfo_200_response.h"
#include "OAIPost_leaveChat_request_chat_id.h"
#include "OAIPost_postStory_200_response.h"
#include "OAIPost_restrictChatMember_request_chat_id.h"
#include "OAIPost_revokeChatInviteLink_request_chat_id.h"
#include "OAIPost_savePreparedInlineMessage_200_response.h"
#include "OAIPost_sendAnimation_request_animation.h"
#include "OAIPost_sendAudio_request_audio.h"
#include "OAIPost_sendAudio_request_thumbnail.h"
#include "OAIPost_sendDocument_request_document.h"
#include "OAIPost_sendGift_request_chat_id.h"
#include "OAIPost_sendMediaGroup_200_response.h"
#include "OAIPost_sendMediaGroup_request_media_inner.h"
#include "OAIPost_sendMessage_200_response.h"
#include "OAIPost_sendMessage_request_chat_id.h"
#include "OAIPost_sendMessage_request_reply_markup.h"
#include "OAIPost_sendPaidMedia_request_chat_id.h"
#include "OAIPost_sendPhoto_request_photo.h"
#include "OAIPost_sendSticker_request_sticker.h"
#include "OAIPost_sendVideoNote_request_video_note.h"
#include "OAIPost_sendVideo_request_cover.h"
#include "OAIPost_sendVideo_request_video.h"
#include "OAIPost_sendVoice_request_voice.h"
#include "OAIPost_setStickerSetThumbnail_request_thumbnail.h"
#include "OAIPost_setWebhook_200_response.h"
#include "OAIPost_stopPoll_200_response.h"
#include "OAIReactionType.h"
#include "OAIReplyParameters.h"
#include "OAIShippingOption.h"
#include "OAIStoryArea.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace tele_rest {

class OAIDefaultApi : public QObject {
    Q_OBJECT

public:
    OAIDefaultApi(const int timeOut = 0);
    ~OAIDefaultApi();

    void initializeServerConfigs();
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
    void setServerIndex(const QString &operation, int serverIndex);
    void setApiKey(const QString &apiKeyName, const QString &apiKey);
    void setBearerToken(const QString &token);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    int addServerConfiguration(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables = QMap<QString, OAIServerVariable>());
    void setNewServerForAllOperations(const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void setNewServer(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(const QString &style);
    QString getParamStyleSuffix(const QString &style);
    QString getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode);

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  name QString [required]
    * @param[in]  sticker OAIInputSticker [required]
    */
    virtual void postAddStickerToSet(const qint32 &user_id, const QString &name, const OAIInputSticker &sticker);

    /**
    * @param[in]  callback_query_id QString [required]
    * @param[in]  text QString [optional]
    * @param[in]  show_alert bool [optional]
    * @param[in]  url QString [optional]
    * @param[in]  cache_time qint32 [optional]
    */
    virtual void postAnswerCallbackQuery(const QString &callback_query_id, const ::tele_rest::OptionalParam<QString> &text = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<bool> &show_alert = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &url = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &cache_time = ::tele_rest::OptionalParam<qint32>());

    /**
    * @param[in]  inline_query_id QString [required]
    * @param[in]  results QList<OAIInlineQueryResult> [required]
    * @param[in]  cache_time qint32 [optional]
    * @param[in]  is_personal bool [optional]
    * @param[in]  next_offset QString [optional]
    * @param[in]  button OAIInlineQueryResultsButton [optional]
    */
    virtual void postAnswerInlineQuery(const QString &inline_query_id, const QList<OAIInlineQueryResult> &results, const ::tele_rest::OptionalParam<qint32> &cache_time = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &is_personal = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &next_offset = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIInlineQueryResultsButton> &button = ::tele_rest::OptionalParam<OAIInlineQueryResultsButton>());

    /**
    * @param[in]  pre_checkout_query_id QString [required]
    * @param[in]  ok bool [required]
    * @param[in]  error_message QString [optional]
    */
    virtual void postAnswerPreCheckoutQuery(const QString &pre_checkout_query_id, const bool &ok, const ::tele_rest::OptionalParam<QString> &error_message = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  shipping_query_id QString [required]
    * @param[in]  ok bool [required]
    * @param[in]  shipping_options QList<OAIShippingOption> [optional]
    * @param[in]  error_message QString [optional]
    */
    virtual void postAnswerShippingQuery(const QString &shipping_query_id, const bool &ok, const ::tele_rest::OptionalParam<QList<OAIShippingOption>> &shipping_options = ::tele_rest::OptionalParam<QList<OAIShippingOption>>(), const ::tele_rest::OptionalParam<QString> &error_message = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  web_app_query_id QString [required]
    * @param[in]  result OAIInlineQueryResult [required]
    */
    virtual void postAnswerWebAppQuery(const QString &web_app_query_id, const OAIInlineQueryResult &result);

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  user_id qint32 [required]
    */
    virtual void postApproveChatJoinRequest(const OAIPost_sendMessage_request_chat_id &chat_id, const qint32 &user_id);

    /**
    * @param[in]  chat_id OAIPost_banChatMember_request_chat_id [required]
    * @param[in]  user_id qint32 [required]
    * @param[in]  until_date qint32 [optional]
    * @param[in]  revoke_messages bool [optional]
    */
    virtual void postBanChatMember(const OAIPost_banChatMember_request_chat_id &chat_id, const qint32 &user_id, const ::tele_rest::OptionalParam<qint32> &until_date = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &revoke_messages = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  sender_chat_id qint32 [required]
    */
    virtual void postBanChatSenderChat(const OAIPost_sendMessage_request_chat_id &chat_id, const qint32 &sender_chat_id);


    virtual void postClose();

    /**
    * @param[in]  chat_id OAIPost_restrictChatMember_request_chat_id [required]
    * @param[in]  message_thread_id qint32 [required]
    */
    virtual void postCloseForumTopic(const OAIPost_restrictChatMember_request_chat_id &chat_id, const qint32 &message_thread_id);

    /**
    * @param[in]  chat_id OAIPost_restrictChatMember_request_chat_id [required]
    */
    virtual void postCloseGeneralForumTopic(const OAIPost_restrictChatMember_request_chat_id &chat_id);

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  owned_gift_id QString [required]
    */
    virtual void postConvertGiftToStars(const QString &business_connection_id, const QString &owned_gift_id);

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  from_chat_id OAIPost_forwardMessage_request_from_chat_id [required]
    * @param[in]  message_id qint32 [required]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  video_start_timestamp qint32 [optional]
    * @param[in]  caption QString [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  caption_entities QList<OAIMessageEntity> [optional]
    * @param[in]  show_caption_above_media bool [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAIPost_sendMessage_request_reply_markup [optional]
    */
    virtual void postCopyMessage(const OAIPost_sendMessage_request_chat_id &chat_id, const OAIPost_forwardMessage_request_from_chat_id &from_chat_id, const qint32 &message_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &video_start_timestamp = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &caption = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<bool> &show_caption_above_media = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  from_chat_id OAIPost_forwardMessages_request_from_chat_id [required]
    * @param[in]  message_ids QList<qint32> [required]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  remove_caption bool [optional]
    */
    virtual void postCopyMessages(const OAIPost_sendMessage_request_chat_id &chat_id, const OAIPost_forwardMessages_request_from_chat_id &from_chat_id, const QList<qint32> &message_ids, const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &remove_caption = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  name QString [optional]
    * @param[in]  expire_date qint32 [optional]
    * @param[in]  member_limit qint32 [optional]
    * @param[in]  creates_join_request bool [optional]
    */
    virtual void postCreateChatInviteLink(const OAIPost_sendMessage_request_chat_id &chat_id, const ::tele_rest::OptionalParam<QString> &name = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &expire_date = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &member_limit = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &creates_join_request = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  chat_id OAIPost_createChatSubscriptionInviteLink_request_chat_id [required]
    * @param[in]  subscription_period qint32 [required]
    * @param[in]  subscription_price qint32 [required]
    * @param[in]  name QString [optional]
    */
    virtual void postCreateChatSubscriptionInviteLink(const OAIPost_createChatSubscriptionInviteLink_request_chat_id &chat_id, const qint32 &subscription_period, const qint32 &subscription_price, const ::tele_rest::OptionalParam<QString> &name = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  chat_id OAIPost_restrictChatMember_request_chat_id [required]
    * @param[in]  name QString [required]
    * @param[in]  icon_color qint32 [optional]
    * @param[in]  icon_custom_emoji_id QString [optional]
    */
    virtual void postCreateForumTopic(const OAIPost_restrictChatMember_request_chat_id &chat_id, const QString &name, const ::tele_rest::OptionalParam<qint32> &icon_color = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &icon_custom_emoji_id = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  title QString [required]
    * @param[in]  description QString [required]
    * @param[in]  payload QString [required]
    * @param[in]  currency QString [required]
    * @param[in]  prices QList<OAILabeledPrice> [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  provider_token QString [optional]
    * @param[in]  subscription_period qint32 [optional]
    * @param[in]  max_tip_amount qint32 [optional]
    * @param[in]  suggested_tip_amounts QList<qint32> [optional]
    * @param[in]  provider_data QString [optional]
    * @param[in]  photo_url QString [optional]
    * @param[in]  photo_size qint32 [optional]
    * @param[in]  photo_width qint32 [optional]
    * @param[in]  photo_height qint32 [optional]
    * @param[in]  need_name bool [optional]
    * @param[in]  need_phone_number bool [optional]
    * @param[in]  need_email bool [optional]
    * @param[in]  need_shipping_address bool [optional]
    * @param[in]  send_phone_number_to_provider bool [optional]
    * @param[in]  send_email_to_provider bool [optional]
    * @param[in]  is_flexible bool [optional]
    */
    virtual void postCreateInvoiceLink(const QString &title, const QString &description, const QString &payload, const QString &currency, const QList<OAILabeledPrice> &prices, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &provider_token = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &subscription_period = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &max_tip_amount = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QList<qint32>> &suggested_tip_amounts = ::tele_rest::OptionalParam<QList<qint32>>(), const ::tele_rest::OptionalParam<QString> &provider_data = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &photo_url = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &photo_size = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &photo_width = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &photo_height = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &need_name = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &need_phone_number = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &need_email = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &need_shipping_address = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &send_phone_number_to_provider = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &send_email_to_provider = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &is_flexible = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  name QString [required]
    * @param[in]  title QString [required]
    * @param[in]  stickers QList<OAIInputSticker> [required]
    * @param[in]  sticker_type QString [optional]
    * @param[in]  needs_repainting bool [optional]
    */
    virtual void postCreateNewStickerSet(const qint32 &user_id, const QString &name, const QString &title, const QList<OAIInputSticker> &stickers, const ::tele_rest::OptionalParam<QString> &sticker_type = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<bool> &needs_repainting = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  user_id qint32 [required]
    */
    virtual void postDeclineChatJoinRequest(const OAIPost_sendMessage_request_chat_id &chat_id, const qint32 &user_id);

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  message_ids QList<qint32> [required]
    */
    virtual void postDeleteBusinessMessages(const QString &business_connection_id, const QList<qint32> &message_ids);

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    */
    virtual void postDeleteChatPhoto(const OAIPost_sendMessage_request_chat_id &chat_id);

    /**
    * @param[in]  chat_id OAIPost_restrictChatMember_request_chat_id [required]
    */
    virtual void postDeleteChatStickerSet(const OAIPost_restrictChatMember_request_chat_id &chat_id);

    /**
    * @param[in]  chat_id OAIPost_restrictChatMember_request_chat_id [required]
    * @param[in]  message_thread_id qint32 [required]
    */
    virtual void postDeleteForumTopic(const OAIPost_restrictChatMember_request_chat_id &chat_id, const qint32 &message_thread_id);

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  message_id qint32 [required]
    */
    virtual void postDeleteMessage(const OAIPost_sendMessage_request_chat_id &chat_id, const qint32 &message_id);

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  message_ids QList<qint32> [required]
    */
    virtual void postDeleteMessages(const OAIPost_sendMessage_request_chat_id &chat_id, const QList<qint32> &message_ids);

    /**
    * @param[in]  scope OAIBotCommandScope [optional]
    * @param[in]  language_code QString [optional]
    */
    virtual void postDeleteMyCommands(const ::tele_rest::OptionalParam<OAIBotCommandScope> &scope = ::tele_rest::OptionalParam<OAIBotCommandScope>(), const ::tele_rest::OptionalParam<QString> &language_code = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  sticker QString [required]
    */
    virtual void postDeleteStickerFromSet(const QString &sticker);

    /**
    * @param[in]  name QString [required]
    */
    virtual void postDeleteStickerSet(const QString &name);

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  story_id qint32 [required]
    */
    virtual void postDeleteStory(const QString &business_connection_id, const qint32 &story_id);

    /**
    * @param[in]  drop_pending_updates bool [optional]
    */
    virtual void postDeleteWebhook(const ::tele_rest::OptionalParam<bool> &drop_pending_updates = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  invite_link QString [required]
    * @param[in]  name QString [optional]
    * @param[in]  expire_date qint32 [optional]
    * @param[in]  member_limit qint32 [optional]
    * @param[in]  creates_join_request bool [optional]
    */
    virtual void postEditChatInviteLink(const OAIPost_sendMessage_request_chat_id &chat_id, const QString &invite_link, const ::tele_rest::OptionalParam<QString> &name = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &expire_date = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &member_limit = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &creates_join_request = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  invite_link QString [required]
    * @param[in]  name QString [optional]
    */
    virtual void postEditChatSubscriptionInviteLink(const OAIPost_sendMessage_request_chat_id &chat_id, const QString &invite_link, const ::tele_rest::OptionalParam<QString> &name = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  chat_id OAIPost_restrictChatMember_request_chat_id [required]
    * @param[in]  message_thread_id qint32 [required]
    * @param[in]  name QString [optional]
    * @param[in]  icon_custom_emoji_id QString [optional]
    */
    virtual void postEditForumTopic(const OAIPost_restrictChatMember_request_chat_id &chat_id, const qint32 &message_thread_id, const ::tele_rest::OptionalParam<QString> &name = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &icon_custom_emoji_id = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  chat_id OAIPost_restrictChatMember_request_chat_id [required]
    * @param[in]  name QString [required]
    */
    virtual void postEditGeneralForumTopic(const OAIPost_restrictChatMember_request_chat_id &chat_id, const QString &name);

    /**
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  chat_id OAIPost_editMessageText_request_chat_id [optional]
    * @param[in]  message_id qint32 [optional]
    * @param[in]  inline_message_id QString [optional]
    * @param[in]  caption QString [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  caption_entities QList<OAIMessageEntity> [optional]
    * @param[in]  show_caption_above_media bool [optional]
    * @param[in]  reply_markup OAIInlineKeyboardMarkup [optional]
    */
    virtual void postEditMessageCaption(const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIPost_editMessageText_request_chat_id> &chat_id = ::tele_rest::OptionalParam<OAIPost_editMessageText_request_chat_id>(), const ::tele_rest::OptionalParam<qint32> &message_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &inline_message_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &caption = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<bool> &show_caption_above_media = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup = ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup>());

    /**
    * @param[in]  latitude double [required]
    * @param[in]  longitude double [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  chat_id OAIPost_editMessageText_request_chat_id [optional]
    * @param[in]  message_id qint32 [optional]
    * @param[in]  inline_message_id QString [optional]
    * @param[in]  live_period qint32 [optional]
    * @param[in]  horizontal_accuracy double [optional]
    * @param[in]  heading qint32 [optional]
    * @param[in]  proximity_alert_radius qint32 [optional]
    * @param[in]  reply_markup OAIInlineKeyboardMarkup [optional]
    */
    virtual void postEditMessageLiveLocation(const double &latitude, const double &longitude, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIPost_editMessageText_request_chat_id> &chat_id = ::tele_rest::OptionalParam<OAIPost_editMessageText_request_chat_id>(), const ::tele_rest::OptionalParam<qint32> &message_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &inline_message_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &live_period = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<double> &horizontal_accuracy = ::tele_rest::OptionalParam<double>(), const ::tele_rest::OptionalParam<qint32> &heading = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &proximity_alert_radius = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup = ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup>());

    /**
    * @param[in]  media OAIInputMedia [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  chat_id OAIPost_editMessageText_request_chat_id [optional]
    * @param[in]  message_id qint32 [optional]
    * @param[in]  inline_message_id QString [optional]
    * @param[in]  reply_markup OAIInlineKeyboardMarkup [optional]
    */
    virtual void postEditMessageMedia(const OAIInputMedia &media, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIPost_editMessageText_request_chat_id> &chat_id = ::tele_rest::OptionalParam<OAIPost_editMessageText_request_chat_id>(), const ::tele_rest::OptionalParam<qint32> &message_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &inline_message_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup = ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup>());

    /**
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  chat_id OAIPost_editMessageText_request_chat_id [optional]
    * @param[in]  message_id qint32 [optional]
    * @param[in]  inline_message_id QString [optional]
    * @param[in]  reply_markup OAIInlineKeyboardMarkup [optional]
    */
    virtual void postEditMessageReplyMarkup(const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIPost_editMessageText_request_chat_id> &chat_id = ::tele_rest::OptionalParam<OAIPost_editMessageText_request_chat_id>(), const ::tele_rest::OptionalParam<qint32> &message_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &inline_message_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup = ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup>());

    /**
    * @param[in]  text QString [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  chat_id OAIPost_editMessageText_request_chat_id [optional]
    * @param[in]  message_id qint32 [optional]
    * @param[in]  inline_message_id QString [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  entities QList<OAIMessageEntity> [optional]
    * @param[in]  link_preview_options OAILinkPreviewOptions [optional]
    * @param[in]  reply_markup OAIInlineKeyboardMarkup [optional]
    */
    virtual void postEditMessageText(const QString &text, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIPost_editMessageText_request_chat_id> &chat_id = ::tele_rest::OptionalParam<OAIPost_editMessageText_request_chat_id>(), const ::tele_rest::OptionalParam<qint32> &message_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &inline_message_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<OAILinkPreviewOptions> &link_preview_options = ::tele_rest::OptionalParam<OAILinkPreviewOptions>(), const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup = ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup>());

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  story_id qint32 [required]
    * @param[in]  content OAIInputStoryContent [required]
    * @param[in]  caption QString [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  caption_entities QList<OAIMessageEntity> [optional]
    * @param[in]  areas QList<OAIStoryArea> [optional]
    */
    virtual void postEditStory(const QString &business_connection_id, const qint32 &story_id, const OAIInputStoryContent &content, const ::tele_rest::OptionalParam<QString> &caption = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<QList<OAIStoryArea>> &areas = ::tele_rest::OptionalParam<QList<OAIStoryArea>>());

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  telegram_payment_charge_id QString [required]
    * @param[in]  is_canceled bool [required]
    */
    virtual void postEditUserStarSubscription(const qint32 &user_id, const QString &telegram_payment_charge_id, const bool &is_canceled);

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    */
    virtual void postExportChatInviteLink(const OAIPost_sendMessage_request_chat_id &chat_id);

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  from_chat_id OAIPost_forwardMessage_request_from_chat_id [required]
    * @param[in]  message_id qint32 [required]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  video_start_timestamp qint32 [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    */
    virtual void postForwardMessage(const OAIPost_sendMessage_request_chat_id &chat_id, const OAIPost_forwardMessage_request_from_chat_id &from_chat_id, const qint32 &message_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &video_start_timestamp = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  from_chat_id OAIPost_forwardMessages_request_from_chat_id [required]
    * @param[in]  message_ids QList<qint32> [required]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    */
    virtual void postForwardMessages(const OAIPost_sendMessage_request_chat_id &chat_id, const OAIPost_forwardMessages_request_from_chat_id &from_chat_id, const QList<qint32> &message_ids, const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>());


    virtual void postGetAvailableGifts();

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  exclude_unsaved bool [optional]
    * @param[in]  exclude_saved bool [optional]
    * @param[in]  exclude_unlimited bool [optional]
    * @param[in]  exclude_limited bool [optional]
    * @param[in]  exclude_unique bool [optional]
    * @param[in]  sort_by_price bool [optional]
    * @param[in]  offset QString [optional]
    * @param[in]  limit qint32 [optional]
    */
    virtual void postGetBusinessAccountGifts(const QString &business_connection_id, const ::tele_rest::OptionalParam<bool> &exclude_unsaved = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &exclude_saved = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &exclude_unlimited = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &exclude_limited = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &exclude_unique = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &sort_by_price = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &offset = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &limit = ::tele_rest::OptionalParam<qint32>());

    /**
    * @param[in]  business_connection_id QString [required]
    */
    virtual void postGetBusinessAccountStarBalance(const QString &business_connection_id);

    /**
    * @param[in]  business_connection_id QString [required]
    */
    virtual void postGetBusinessConnection(const QString &business_connection_id);

    /**
    * @param[in]  chat_id OAIPost_leaveChat_request_chat_id [required]
    */
    virtual void postGetChat(const OAIPost_leaveChat_request_chat_id &chat_id);

    /**
    * @param[in]  chat_id OAIPost_leaveChat_request_chat_id [required]
    */
    virtual void postGetChatAdministrators(const OAIPost_leaveChat_request_chat_id &chat_id);

    /**
    * @param[in]  chat_id OAIPost_leaveChat_request_chat_id [required]
    * @param[in]  user_id qint32 [required]
    */
    virtual void postGetChatMember(const OAIPost_leaveChat_request_chat_id &chat_id, const qint32 &user_id);

    /**
    * @param[in]  chat_id OAIPost_leaveChat_request_chat_id [required]
    */
    virtual void postGetChatMemberCount(const OAIPost_leaveChat_request_chat_id &chat_id);

    /**
    * @param[in]  chat_id qint32 [optional]
    */
    virtual void postGetChatMenuButton(const ::tele_rest::OptionalParam<qint32> &chat_id = ::tele_rest::OptionalParam<qint32>());

    /**
    * @param[in]  custom_emoji_ids QList<QString> [required]
    */
    virtual void postGetCustomEmojiStickers(const QList<QString> &custom_emoji_ids);

    /**
    * @param[in]  file_id QString [required]
    */
    virtual void postGetFile(const QString &file_id);


    virtual void postGetForumTopicIconStickers();

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  chat_id qint32 [optional]
    * @param[in]  message_id qint32 [optional]
    * @param[in]  inline_message_id QString [optional]
    */
    virtual void postGetGameHighScores(const qint32 &user_id, const ::tele_rest::OptionalParam<qint32> &chat_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &message_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &inline_message_id = ::tele_rest::OptionalParam<QString>());


    virtual void postGetMe();

    /**
    * @param[in]  scope OAIBotCommandScope [optional]
    * @param[in]  language_code QString [optional]
    */
    virtual void postGetMyCommands(const ::tele_rest::OptionalParam<OAIBotCommandScope> &scope = ::tele_rest::OptionalParam<OAIBotCommandScope>(), const ::tele_rest::OptionalParam<QString> &language_code = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  for_channels bool [optional]
    */
    virtual void postGetMyDefaultAdministratorRights(const ::tele_rest::OptionalParam<bool> &for_channels = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  language_code QString [optional]
    */
    virtual void postGetMyDescription(const ::tele_rest::OptionalParam<QString> &language_code = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  language_code QString [optional]
    */
    virtual void postGetMyName(const ::tele_rest::OptionalParam<QString> &language_code = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  language_code QString [optional]
    */
    virtual void postGetMyShortDescription(const ::tele_rest::OptionalParam<QString> &language_code = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  offset qint32 [optional]
    * @param[in]  limit qint32 [optional]
    */
    virtual void postGetStarTransactions(const ::tele_rest::OptionalParam<qint32> &offset = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &limit = ::tele_rest::OptionalParam<qint32>());

    /**
    * @param[in]  name QString [required]
    */
    virtual void postGetStickerSet(const QString &name);

    /**
    * @param[in]  offset qint32 [optional]
    * @param[in]  limit qint32 [optional]
    * @param[in]  timeout qint32 [optional]
    * @param[in]  allowed_updates QList<QString> [optional]
    */
    virtual void postGetUpdates(const ::tele_rest::OptionalParam<qint32> &offset = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &limit = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &timeout = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QList<QString>> &allowed_updates = ::tele_rest::OptionalParam<QList<QString>>());

    /**
    * @param[in]  chat_id OAIPost_getUserChatBoosts_request_chat_id [required]
    * @param[in]  user_id qint32 [required]
    */
    virtual void postGetUserChatBoosts(const OAIPost_getUserChatBoosts_request_chat_id &chat_id, const qint32 &user_id);

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  offset qint32 [optional]
    * @param[in]  limit qint32 [optional]
    */
    virtual void postGetUserProfilePhotos(const qint32 &user_id, const ::tele_rest::OptionalParam<qint32> &offset = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &limit = ::tele_rest::OptionalParam<qint32>());


    virtual void postGetWebhookInfo();

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  month_count qint32 [required]
    * @param[in]  star_count qint32 [required]
    * @param[in]  text QString [optional]
    * @param[in]  text_parse_mode QString [optional]
    * @param[in]  text_entities QList<OAIMessageEntity> [optional]
    */
    virtual void postGiftPremiumSubscription(const qint32 &user_id, const qint32 &month_count, const qint32 &star_count, const ::tele_rest::OptionalParam<QString> &text = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &text_parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &text_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>());

    /**
    * @param[in]  chat_id OAIPost_restrictChatMember_request_chat_id [required]
    */
    virtual void postHideGeneralForumTopic(const OAIPost_restrictChatMember_request_chat_id &chat_id);

    /**
    * @param[in]  chat_id OAIPost_leaveChat_request_chat_id [required]
    */
    virtual void postLeaveChat(const OAIPost_leaveChat_request_chat_id &chat_id);


    virtual void postLogOut();

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  message_id qint32 [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  disable_notification bool [optional]
    */
    virtual void postPinChatMessage(const OAIPost_sendMessage_request_chat_id &chat_id, const qint32 &message_id, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  content OAIInputStoryContent [required]
    * @param[in]  active_period qint32 [required]
    * @param[in]  caption QString [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  caption_entities QList<OAIMessageEntity> [optional]
    * @param[in]  areas QList<OAIStoryArea> [optional]
    * @param[in]  post_to_chat_page bool [optional]
    * @param[in]  protect_content bool [optional]
    */
    virtual void postPostStory(const QString &business_connection_id, const OAIInputStoryContent &content, const qint32 &active_period, const ::tele_rest::OptionalParam<QString> &caption = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<QList<OAIStoryArea>> &areas = ::tele_rest::OptionalParam<QList<OAIStoryArea>>(), const ::tele_rest::OptionalParam<bool> &post_to_chat_page = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  user_id qint32 [required]
    * @param[in]  is_anonymous bool [optional]
    * @param[in]  can_manage_chat bool [optional]
    * @param[in]  can_delete_messages bool [optional]
    * @param[in]  can_manage_video_chats bool [optional]
    * @param[in]  can_restrict_members bool [optional]
    * @param[in]  can_promote_members bool [optional]
    * @param[in]  can_change_info bool [optional]
    * @param[in]  can_invite_users bool [optional]
    * @param[in]  can_post_stories bool [optional]
    * @param[in]  can_edit_stories bool [optional]
    * @param[in]  can_delete_stories bool [optional]
    * @param[in]  can_post_messages bool [optional]
    * @param[in]  can_edit_messages bool [optional]
    * @param[in]  can_pin_messages bool [optional]
    * @param[in]  can_manage_topics bool [optional]
    */
    virtual void postPromoteChatMember(const OAIPost_sendMessage_request_chat_id &chat_id, const qint32 &user_id, const ::tele_rest::OptionalParam<bool> &is_anonymous = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_manage_chat = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_delete_messages = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_manage_video_chats = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_restrict_members = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_promote_members = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_change_info = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_invite_users = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_post_stories = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_edit_stories = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_delete_stories = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_post_messages = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_edit_messages = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_pin_messages = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_manage_topics = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  chat_id qint32 [required]
    * @param[in]  message_id qint32 [required]
    */
    virtual void postReadBusinessMessage(const QString &business_connection_id, const qint32 &chat_id, const qint32 &message_id);

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  telegram_payment_charge_id QString [required]
    */
    virtual void postRefundStarPayment(const qint32 &user_id, const QString &telegram_payment_charge_id);

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  is_public bool [optional]
    */
    virtual void postRemoveBusinessAccountProfilePhoto(const QString &business_connection_id, const ::tele_rest::OptionalParam<bool> &is_public = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    */
    virtual void postRemoveChatVerification(const OAIPost_sendMessage_request_chat_id &chat_id);

    /**
    * @param[in]  user_id qint32 [required]
    */
    virtual void postRemoveUserVerification(const qint32 &user_id);

    /**
    * @param[in]  chat_id OAIPost_restrictChatMember_request_chat_id [required]
    * @param[in]  message_thread_id qint32 [required]
    */
    virtual void postReopenForumTopic(const OAIPost_restrictChatMember_request_chat_id &chat_id, const qint32 &message_thread_id);

    /**
    * @param[in]  chat_id OAIPost_restrictChatMember_request_chat_id [required]
    */
    virtual void postReopenGeneralForumTopic(const OAIPost_restrictChatMember_request_chat_id &chat_id);

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  name QString [required]
    * @param[in]  old_sticker QString [required]
    * @param[in]  sticker OAIInputSticker [required]
    */
    virtual void postReplaceStickerInSet(const qint32 &user_id, const QString &name, const QString &old_sticker, const OAIInputSticker &sticker);

    /**
    * @param[in]  chat_id OAIPost_restrictChatMember_request_chat_id [required]
    * @param[in]  user_id qint32 [required]
    * @param[in]  permissions OAIChatPermissions [required]
    * @param[in]  use_independent_chat_permissions bool [optional]
    * @param[in]  until_date qint32 [optional]
    */
    virtual void postRestrictChatMember(const OAIPost_restrictChatMember_request_chat_id &chat_id, const qint32 &user_id, const OAIChatPermissions &permissions, const ::tele_rest::OptionalParam<bool> &use_independent_chat_permissions = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<qint32> &until_date = ::tele_rest::OptionalParam<qint32>());

    /**
    * @param[in]  chat_id OAIPost_revokeChatInviteLink_request_chat_id [required]
    * @param[in]  invite_link QString [required]
    */
    virtual void postRevokeChatInviteLink(const OAIPost_revokeChatInviteLink_request_chat_id &chat_id, const QString &invite_link);

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  result OAIInlineQueryResult [required]
    * @param[in]  allow_user_chats bool [optional]
    * @param[in]  allow_bot_chats bool [optional]
    * @param[in]  allow_group_chats bool [optional]
    * @param[in]  allow_channel_chats bool [optional]
    */
    virtual void postSavePreparedInlineMessage(const qint32 &user_id, const OAIInlineQueryResult &result, const ::tele_rest::OptionalParam<bool> &allow_user_chats = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_bot_chats = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_group_chats = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_channel_chats = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  animation OAIPost_sendAnimation_request_animation [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  duration qint32 [optional]
    * @param[in]  width qint32 [optional]
    * @param[in]  height qint32 [optional]
    * @param[in]  thumbnail OAIPost_sendAudio_request_thumbnail [optional]
    * @param[in]  caption QString [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  caption_entities QList<OAIMessageEntity> [optional]
    * @param[in]  show_caption_above_media bool [optional]
    * @param[in]  has_spoiler bool [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAIPost_sendMessage_request_reply_markup [optional]
    */
    virtual void postSendAnimation(const OAIPost_sendMessage_request_chat_id &chat_id, const OAIPost_sendAnimation_request_animation &animation, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &duration = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &width = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &height = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<OAIPost_sendAudio_request_thumbnail> &thumbnail = ::tele_rest::OptionalParam<OAIPost_sendAudio_request_thumbnail>(), const ::tele_rest::OptionalParam<QString> &caption = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<bool> &show_caption_above_media = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &has_spoiler = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  audio OAIPost_sendAudio_request_audio [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  caption QString [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  caption_entities QList<OAIMessageEntity> [optional]
    * @param[in]  duration qint32 [optional]
    * @param[in]  performer QString [optional]
    * @param[in]  title QString [optional]
    * @param[in]  thumbnail OAIPost_sendAudio_request_thumbnail [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAIPost_sendMessage_request_reply_markup [optional]
    */
    virtual void postSendAudio(const OAIPost_sendMessage_request_chat_id &chat_id, const OAIPost_sendAudio_request_audio &audio, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &caption = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<qint32> &duration = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &performer = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &title = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIPost_sendAudio_request_thumbnail> &thumbnail = ::tele_rest::OptionalParam<OAIPost_sendAudio_request_thumbnail>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  action QString [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    */
    virtual void postSendChatAction(const OAIPost_sendMessage_request_chat_id &chat_id, const QString &action, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  phone_number QString [required]
    * @param[in]  first_name QString [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  last_name QString [optional]
    * @param[in]  vcard QString [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAIPost_sendMessage_request_reply_markup [optional]
    */
    virtual void postSendContact(const OAIPost_sendMessage_request_chat_id &chat_id, const QString &phone_number, const QString &first_name, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &last_name = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &vcard = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  emoji QString [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAIPost_sendMessage_request_reply_markup [optional]
    */
    virtual void postSendDice(const OAIPost_sendMessage_request_chat_id &chat_id, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &emoji = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  document OAIPost_sendDocument_request_document [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  thumbnail OAIPost_sendAudio_request_thumbnail [optional]
    * @param[in]  caption QString [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  caption_entities QList<OAIMessageEntity> [optional]
    * @param[in]  disable_content_type_detection bool [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAIPost_sendMessage_request_reply_markup [optional]
    */
    virtual void postSendDocument(const OAIPost_sendMessage_request_chat_id &chat_id, const OAIPost_sendDocument_request_document &document, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<OAIPost_sendAudio_request_thumbnail> &thumbnail = ::tele_rest::OptionalParam<OAIPost_sendAudio_request_thumbnail>(), const ::tele_rest::OptionalParam<QString> &caption = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<bool> &disable_content_type_detection = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup>());

    /**
    * @param[in]  chat_id qint32 [required]
    * @param[in]  game_short_name QString [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAIInlineKeyboardMarkup [optional]
    */
    virtual void postSendGame(const qint32 &chat_id, const QString &game_short_name, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup = ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup>());

    /**
    * @param[in]  gift_id QString [required]
    * @param[in]  user_id qint32 [optional]
    * @param[in]  chat_id OAIPost_sendGift_request_chat_id [optional]
    * @param[in]  pay_for_upgrade bool [optional]
    * @param[in]  text QString [optional]
    * @param[in]  text_parse_mode QString [optional]
    * @param[in]  text_entities QList<OAIMessageEntity> [optional]
    */
    virtual void postSendGift(const QString &gift_id, const ::tele_rest::OptionalParam<qint32> &user_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<OAIPost_sendGift_request_chat_id> &chat_id = ::tele_rest::OptionalParam<OAIPost_sendGift_request_chat_id>(), const ::tele_rest::OptionalParam<bool> &pay_for_upgrade = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &text = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &text_parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &text_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  title QString [required]
    * @param[in]  description QString [required]
    * @param[in]  payload QString [required]
    * @param[in]  currency QString [required]
    * @param[in]  prices QList<OAILabeledPrice> [required]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  provider_token QString [optional]
    * @param[in]  max_tip_amount qint32 [optional]
    * @param[in]  suggested_tip_amounts QList<qint32> [optional]
    * @param[in]  start_parameter QString [optional]
    * @param[in]  provider_data QString [optional]
    * @param[in]  photo_url QString [optional]
    * @param[in]  photo_size qint32 [optional]
    * @param[in]  photo_width qint32 [optional]
    * @param[in]  photo_height qint32 [optional]
    * @param[in]  need_name bool [optional]
    * @param[in]  need_phone_number bool [optional]
    * @param[in]  need_email bool [optional]
    * @param[in]  need_shipping_address bool [optional]
    * @param[in]  send_phone_number_to_provider bool [optional]
    * @param[in]  send_email_to_provider bool [optional]
    * @param[in]  is_flexible bool [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAIInlineKeyboardMarkup [optional]
    */
    virtual void postSendInvoice(const OAIPost_sendMessage_request_chat_id &chat_id, const QString &title, const QString &description, const QString &payload, const QString &currency, const QList<OAILabeledPrice> &prices, const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &provider_token = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &max_tip_amount = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QList<qint32>> &suggested_tip_amounts = ::tele_rest::OptionalParam<QList<qint32>>(), const ::tele_rest::OptionalParam<QString> &start_parameter = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &provider_data = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &photo_url = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &photo_size = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &photo_width = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &photo_height = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &need_name = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &need_phone_number = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &need_email = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &need_shipping_address = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &send_phone_number_to_provider = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &send_email_to_provider = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &is_flexible = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup = ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  latitude double [required]
    * @param[in]  longitude double [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  horizontal_accuracy double [optional]
    * @param[in]  live_period qint32 [optional]
    * @param[in]  heading qint32 [optional]
    * @param[in]  proximity_alert_radius qint32 [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAIPost_sendMessage_request_reply_markup [optional]
    */
    virtual void postSendLocation(const OAIPost_sendMessage_request_chat_id &chat_id, const double &latitude, const double &longitude, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<double> &horizontal_accuracy = ::tele_rest::OptionalParam<double>(), const ::tele_rest::OptionalParam<qint32> &live_period = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &heading = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &proximity_alert_radius = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  media QList<OAIPost_sendMediaGroup_request_media_inner> [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    */
    virtual void postSendMediaGroup(const OAIPost_sendMessage_request_chat_id &chat_id, const QList<OAIPost_sendMediaGroup_request_media_inner> &media, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  text QString [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  entities QList<OAIMessageEntity> [optional]
    * @param[in]  link_preview_options OAILinkPreviewOptions [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAIPost_sendMessage_request_reply_markup [optional]
    */
    virtual void postSendMessage(const OAIPost_sendMessage_request_chat_id &chat_id, const QString &text, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<OAILinkPreviewOptions> &link_preview_options = ::tele_rest::OptionalParam<OAILinkPreviewOptions>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup>());

    /**
    * @param[in]  chat_id OAIPost_sendPaidMedia_request_chat_id [required]
    * @param[in]  star_count qint32 [required]
    * @param[in]  media QList<OAIInputPaidMedia> [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  payload QString [optional]
    * @param[in]  caption QString [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  caption_entities QList<OAIMessageEntity> [optional]
    * @param[in]  show_caption_above_media bool [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAIPost_sendMessage_request_reply_markup [optional]
    */
    virtual void postSendPaidMedia(const OAIPost_sendPaidMedia_request_chat_id &chat_id, const qint32 &star_count, const QList<OAIInputPaidMedia> &media, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &payload = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &caption = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<bool> &show_caption_above_media = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  photo OAIPost_sendPhoto_request_photo [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  caption QString [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  caption_entities QList<OAIMessageEntity> [optional]
    * @param[in]  show_caption_above_media bool [optional]
    * @param[in]  has_spoiler bool [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAIPost_sendMessage_request_reply_markup [optional]
    */
    virtual void postSendPhoto(const OAIPost_sendMessage_request_chat_id &chat_id, const OAIPost_sendPhoto_request_photo &photo, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &caption = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<bool> &show_caption_above_media = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &has_spoiler = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  question QString [required]
    * @param[in]  options QList<OAIInputPollOption> [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  question_parse_mode QString [optional]
    * @param[in]  question_entities QList<OAIMessageEntity> [optional]
    * @param[in]  is_anonymous bool [optional]
    * @param[in]  type QString [optional]
    * @param[in]  allows_multiple_answers bool [optional]
    * @param[in]  correct_option_id qint32 [optional]
    * @param[in]  explanation QString [optional]
    * @param[in]  explanation_parse_mode QString [optional]
    * @param[in]  explanation_entities QList<OAIMessageEntity> [optional]
    * @param[in]  open_period qint32 [optional]
    * @param[in]  close_date qint32 [optional]
    * @param[in]  is_closed bool [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAIPost_sendMessage_request_reply_markup [optional]
    */
    virtual void postSendPoll(const OAIPost_sendMessage_request_chat_id &chat_id, const QString &question, const QList<OAIInputPollOption> &options, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &question_parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &question_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<bool> &is_anonymous = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &type = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<bool> &allows_multiple_answers = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<qint32> &correct_option_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &explanation = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &explanation_parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &explanation_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<qint32> &open_period = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &close_date = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &is_closed = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  sticker OAIPost_sendSticker_request_sticker [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  emoji QString [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAIPost_sendMessage_request_reply_markup [optional]
    */
    virtual void postSendSticker(const OAIPost_sendMessage_request_chat_id &chat_id, const OAIPost_sendSticker_request_sticker &sticker, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &emoji = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  latitude double [required]
    * @param[in]  longitude double [required]
    * @param[in]  title QString [required]
    * @param[in]  address QString [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  foursquare_id QString [optional]
    * @param[in]  foursquare_type QString [optional]
    * @param[in]  google_place_id QString [optional]
    * @param[in]  google_place_type QString [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAIPost_sendMessage_request_reply_markup [optional]
    */
    virtual void postSendVenue(const OAIPost_sendMessage_request_chat_id &chat_id, const double &latitude, const double &longitude, const QString &title, const QString &address, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &foursquare_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &foursquare_type = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &google_place_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &google_place_type = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  video OAIPost_sendVideo_request_video [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  duration qint32 [optional]
    * @param[in]  width qint32 [optional]
    * @param[in]  height qint32 [optional]
    * @param[in]  thumbnail OAIPost_sendAudio_request_thumbnail [optional]
    * @param[in]  cover OAIPost_sendVideo_request_cover [optional]
    * @param[in]  start_timestamp qint32 [optional]
    * @param[in]  caption QString [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  caption_entities QList<OAIMessageEntity> [optional]
    * @param[in]  show_caption_above_media bool [optional]
    * @param[in]  has_spoiler bool [optional]
    * @param[in]  supports_streaming bool [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAIPost_sendMessage_request_reply_markup [optional]
    */
    virtual void postSendVideo(const OAIPost_sendMessage_request_chat_id &chat_id, const OAIPost_sendVideo_request_video &video, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &duration = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &width = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &height = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<OAIPost_sendAudio_request_thumbnail> &thumbnail = ::tele_rest::OptionalParam<OAIPost_sendAudio_request_thumbnail>(), const ::tele_rest::OptionalParam<OAIPost_sendVideo_request_cover> &cover = ::tele_rest::OptionalParam<OAIPost_sendVideo_request_cover>(), const ::tele_rest::OptionalParam<qint32> &start_timestamp = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &caption = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<bool> &show_caption_above_media = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &has_spoiler = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &supports_streaming = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  video_note OAIPost_sendVideoNote_request_video_note [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  duration qint32 [optional]
    * @param[in]  length qint32 [optional]
    * @param[in]  thumbnail OAIPost_sendAudio_request_thumbnail [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAIPost_sendMessage_request_reply_markup [optional]
    */
    virtual void postSendVideoNote(const OAIPost_sendMessage_request_chat_id &chat_id, const OAIPost_sendVideoNote_request_video_note &video_note, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &duration = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &length = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<OAIPost_sendAudio_request_thumbnail> &thumbnail = ::tele_rest::OptionalParam<OAIPost_sendAudio_request_thumbnail>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  voice OAIPost_sendVoice_request_voice [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  caption QString [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  caption_entities QList<OAIMessageEntity> [optional]
    * @param[in]  duration qint32 [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAIPost_sendMessage_request_reply_markup [optional]
    */
    virtual void postSendVoice(const OAIPost_sendMessage_request_chat_id &chat_id, const OAIPost_sendVoice_request_voice &voice, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &caption = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<qint32> &duration = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAIPost_sendMessage_request_reply_markup>());

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  bio QString [optional]
    */
    virtual void postSetBusinessAccountBio(const QString &business_connection_id, const ::tele_rest::OptionalParam<QString> &bio = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  show_gift_button bool [required]
    * @param[in]  accepted_gift_types OAIAcceptedGiftTypes [required]
    */
    virtual void postSetBusinessAccountGiftSettings(const QString &business_connection_id, const bool &show_gift_button, const OAIAcceptedGiftTypes &accepted_gift_types);

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  first_name QString [required]
    * @param[in]  last_name QString [optional]
    */
    virtual void postSetBusinessAccountName(const QString &business_connection_id, const QString &first_name, const ::tele_rest::OptionalParam<QString> &last_name = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  photo OAIInputProfilePhoto [required]
    * @param[in]  is_public bool [optional]
    */
    virtual void postSetBusinessAccountProfilePhoto(const QString &business_connection_id, const OAIInputProfilePhoto &photo, const ::tele_rest::OptionalParam<bool> &is_public = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  username QString [optional]
    */
    virtual void postSetBusinessAccountUsername(const QString &business_connection_id, const ::tele_rest::OptionalParam<QString> &username = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  chat_id OAIPost_restrictChatMember_request_chat_id [required]
    * @param[in]  user_id qint32 [required]
    * @param[in]  custom_title QString [required]
    */
    virtual void postSetChatAdministratorCustomTitle(const OAIPost_restrictChatMember_request_chat_id &chat_id, const qint32 &user_id, const QString &custom_title);

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  description QString [optional]
    */
    virtual void postSetChatDescription(const OAIPost_sendMessage_request_chat_id &chat_id, const ::tele_rest::OptionalParam<QString> &description = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  chat_id qint32 [optional]
    * @param[in]  menu_button OAIMenuButton [optional]
    */
    virtual void postSetChatMenuButton(const ::tele_rest::OptionalParam<qint32> &chat_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<OAIMenuButton> &menu_button = ::tele_rest::OptionalParam<OAIMenuButton>());

    /**
    * @param[in]  chat_id OAIPost_restrictChatMember_request_chat_id [required]
    * @param[in]  permissions OAIChatPermissions [required]
    * @param[in]  use_independent_chat_permissions bool [optional]
    */
    virtual void postSetChatPermissions(const OAIPost_restrictChatMember_request_chat_id &chat_id, const OAIChatPermissions &permissions, const ::tele_rest::OptionalParam<bool> &use_independent_chat_permissions = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  photo QJsonValue [required]
    */
    virtual void postSetChatPhoto(const OAIPost_sendMessage_request_chat_id &chat_id, const QJsonValue &photo);

    /**
    * @param[in]  chat_id OAIPost_restrictChatMember_request_chat_id [required]
    * @param[in]  sticker_set_name QString [required]
    */
    virtual void postSetChatStickerSet(const OAIPost_restrictChatMember_request_chat_id &chat_id, const QString &sticker_set_name);

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  title QString [required]
    */
    virtual void postSetChatTitle(const OAIPost_sendMessage_request_chat_id &chat_id, const QString &title);

    /**
    * @param[in]  name QString [required]
    * @param[in]  custom_emoji_id QString [optional]
    */
    virtual void postSetCustomEmojiStickerSetThumbnail(const QString &name, const ::tele_rest::OptionalParam<QString> &custom_emoji_id = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  score qint32 [required]
    * @param[in]  force bool [optional]
    * @param[in]  disable_edit_message bool [optional]
    * @param[in]  chat_id qint32 [optional]
    * @param[in]  message_id qint32 [optional]
    * @param[in]  inline_message_id QString [optional]
    */
    virtual void postSetGameScore(const qint32 &user_id, const qint32 &score, const ::tele_rest::OptionalParam<bool> &force = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &disable_edit_message = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<qint32> &chat_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &message_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &inline_message_id = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  message_id qint32 [required]
    * @param[in]  reaction QList<OAIReactionType> [optional]
    * @param[in]  is_big bool [optional]
    */
    virtual void postSetMessageReaction(const OAIPost_sendMessage_request_chat_id &chat_id, const qint32 &message_id, const ::tele_rest::OptionalParam<QList<OAIReactionType>> &reaction = ::tele_rest::OptionalParam<QList<OAIReactionType>>(), const ::tele_rest::OptionalParam<bool> &is_big = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  commands QList<OAIBotCommand> [required]
    * @param[in]  scope OAIBotCommandScope [optional]
    * @param[in]  language_code QString [optional]
    */
    virtual void postSetMyCommands(const QList<OAIBotCommand> &commands, const ::tele_rest::OptionalParam<OAIBotCommandScope> &scope = ::tele_rest::OptionalParam<OAIBotCommandScope>(), const ::tele_rest::OptionalParam<QString> &language_code = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  rights OAIChatAdministratorRights [optional]
    * @param[in]  for_channels bool [optional]
    */
    virtual void postSetMyDefaultAdministratorRights(const ::tele_rest::OptionalParam<OAIChatAdministratorRights> &rights = ::tele_rest::OptionalParam<OAIChatAdministratorRights>(), const ::tele_rest::OptionalParam<bool> &for_channels = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  description QString [optional]
    * @param[in]  language_code QString [optional]
    */
    virtual void postSetMyDescription(const ::tele_rest::OptionalParam<QString> &description = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &language_code = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  name QString [optional]
    * @param[in]  language_code QString [optional]
    */
    virtual void postSetMyName(const ::tele_rest::OptionalParam<QString> &name = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &language_code = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  short_description QString [optional]
    * @param[in]  language_code QString [optional]
    */
    virtual void postSetMyShortDescription(const ::tele_rest::OptionalParam<QString> &short_description = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &language_code = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  errors QList<OAIPassportElementError> [required]
    */
    virtual void postSetPassportDataErrors(const qint32 &user_id, const QList<OAIPassportElementError> &errors);

    /**
    * @param[in]  sticker QString [required]
    * @param[in]  emoji_list QList<QString> [required]
    */
    virtual void postSetStickerEmojiList(const QString &sticker, const QList<QString> &emoji_list);

    /**
    * @param[in]  sticker QString [required]
    * @param[in]  keywords QList<QString> [optional]
    */
    virtual void postSetStickerKeywords(const QString &sticker, const ::tele_rest::OptionalParam<QList<QString>> &keywords = ::tele_rest::OptionalParam<QList<QString>>());

    /**
    * @param[in]  sticker QString [required]
    * @param[in]  mask_position OAIMaskPosition [optional]
    */
    virtual void postSetStickerMaskPosition(const QString &sticker, const ::tele_rest::OptionalParam<OAIMaskPosition> &mask_position = ::tele_rest::OptionalParam<OAIMaskPosition>());

    /**
    * @param[in]  sticker QString [required]
    * @param[in]  position qint32 [required]
    */
    virtual void postSetStickerPositionInSet(const QString &sticker, const qint32 &position);

    /**
    * @param[in]  name QString [required]
    * @param[in]  user_id qint32 [required]
    * @param[in]  format QString [required]
    * @param[in]  thumbnail OAIPost_setStickerSetThumbnail_request_thumbnail [optional]
    */
    virtual void postSetStickerSetThumbnail(const QString &name, const qint32 &user_id, const QString &format, const ::tele_rest::OptionalParam<OAIPost_setStickerSetThumbnail_request_thumbnail> &thumbnail = ::tele_rest::OptionalParam<OAIPost_setStickerSetThumbnail_request_thumbnail>());

    /**
    * @param[in]  name QString [required]
    * @param[in]  title QString [required]
    */
    virtual void postSetStickerSetTitle(const QString &name, const QString &title);

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  emoji_status_custom_emoji_id QString [optional]
    * @param[in]  emoji_status_expiration_date qint32 [optional]
    */
    virtual void postSetUserEmojiStatus(const qint32 &user_id, const ::tele_rest::OptionalParam<QString> &emoji_status_custom_emoji_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &emoji_status_expiration_date = ::tele_rest::OptionalParam<qint32>());

    /**
    * @param[in]  url QString [required]
    * @param[in]  certificate QJsonValue [optional]
    * @param[in]  ip_address QString [optional]
    * @param[in]  max_connections qint32 [optional]
    * @param[in]  allowed_updates QList<QString> [optional]
    * @param[in]  drop_pending_updates bool [optional]
    * @param[in]  secret_token QString [optional]
    */
    virtual void postSetWebhook(const QString &url, const ::tele_rest::OptionalParam<QJsonValue> &certificate = ::tele_rest::OptionalParam<QJsonValue>(), const ::tele_rest::OptionalParam<QString> &ip_address = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &max_connections = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QList<QString>> &allowed_updates = ::tele_rest::OptionalParam<QList<QString>>(), const ::tele_rest::OptionalParam<bool> &drop_pending_updates = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &secret_token = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  chat_id OAIPost_editMessageText_request_chat_id [optional]
    * @param[in]  message_id qint32 [optional]
    * @param[in]  inline_message_id QString [optional]
    * @param[in]  reply_markup OAIInlineKeyboardMarkup [optional]
    */
    virtual void postStopMessageLiveLocation(const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIPost_editMessageText_request_chat_id> &chat_id = ::tele_rest::OptionalParam<OAIPost_editMessageText_request_chat_id>(), const ::tele_rest::OptionalParam<qint32> &message_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &inline_message_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup = ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  message_id qint32 [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  reply_markup OAIInlineKeyboardMarkup [optional]
    */
    virtual void postStopPoll(const OAIPost_sendMessage_request_chat_id &chat_id, const qint32 &message_id, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup = ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup>());

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  star_count qint32 [required]
    */
    virtual void postTransferBusinessAccountStars(const QString &business_connection_id, const qint32 &star_count);

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  owned_gift_id QString [required]
    * @param[in]  new_owner_chat_id qint32 [required]
    * @param[in]  star_count qint32 [optional]
    */
    virtual void postTransferGift(const QString &business_connection_id, const QString &owned_gift_id, const qint32 &new_owner_chat_id, const ::tele_rest::OptionalParam<qint32> &star_count = ::tele_rest::OptionalParam<qint32>());

    /**
    * @param[in]  chat_id OAIPost_banChatMember_request_chat_id [required]
    * @param[in]  user_id qint32 [required]
    * @param[in]  only_if_banned bool [optional]
    */
    virtual void postUnbanChatMember(const OAIPost_banChatMember_request_chat_id &chat_id, const qint32 &user_id, const ::tele_rest::OptionalParam<bool> &only_if_banned = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  sender_chat_id qint32 [required]
    */
    virtual void postUnbanChatSenderChat(const OAIPost_sendMessage_request_chat_id &chat_id, const qint32 &sender_chat_id);

    /**
    * @param[in]  chat_id OAIPost_restrictChatMember_request_chat_id [required]
    */
    virtual void postUnhideGeneralForumTopic(const OAIPost_restrictChatMember_request_chat_id &chat_id);

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    */
    virtual void postUnpinAllChatMessages(const OAIPost_sendMessage_request_chat_id &chat_id);

    /**
    * @param[in]  chat_id OAIPost_restrictChatMember_request_chat_id [required]
    * @param[in]  message_thread_id qint32 [required]
    */
    virtual void postUnpinAllForumTopicMessages(const OAIPost_restrictChatMember_request_chat_id &chat_id, const qint32 &message_thread_id);

    /**
    * @param[in]  chat_id OAIPost_restrictChatMember_request_chat_id [required]
    */
    virtual void postUnpinAllGeneralForumTopicMessages(const OAIPost_restrictChatMember_request_chat_id &chat_id);

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_id qint32 [optional]
    */
    virtual void postUnpinChatMessage(const OAIPost_sendMessage_request_chat_id &chat_id, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_id = ::tele_rest::OptionalParam<qint32>());

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  owned_gift_id QString [required]
    * @param[in]  keep_original_details bool [optional]
    * @param[in]  star_count qint32 [optional]
    */
    virtual void postUpgradeGift(const QString &business_connection_id, const QString &owned_gift_id, const ::tele_rest::OptionalParam<bool> &keep_original_details = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<qint32> &star_count = ::tele_rest::OptionalParam<qint32>());

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  sticker QJsonValue [required]
    * @param[in]  sticker_format QString [required]
    */
    virtual void postUploadStickerFile(const qint32 &user_id, const QJsonValue &sticker, const QString &sticker_format);

    /**
    * @param[in]  chat_id OAIPost_sendMessage_request_chat_id [required]
    * @param[in]  custom_description QString [optional]
    */
    virtual void postVerifyChat(const OAIPost_sendMessage_request_chat_id &chat_id, const ::tele_rest::OptionalParam<QString> &custom_description = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  custom_description QString [optional]
    */
    virtual void postVerifyUser(const qint32 &user_id, const ::tele_rest::OptionalParam<QString> &custom_description = ::tele_rest::OptionalParam<QString>());


private:
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<OAIServerConfiguration>> _serverConfigs;
    QMap<QString, QString> _apiKeys;
    QString _bearerToken;
    QString _username;
    QString _password;
    int _timeOut;
    QString _workingDirectory;
    QNetworkAccessManager* _manager;
    QMap<QString, QString> _defaultHeaders;
    bool _isResponseCompressionEnabled;
    bool _isRequestCompressionEnabled;
    OAIHttpRequestInput _latestInput;
    OAIHttpRequestWorker *_latestWorker;
    QStringList _latestScope;
    OauthCode _authFlow;
    OauthImplicit _implicitFlow;
    OauthCredentials _credentialFlow;
    OauthPassword _passwordFlow;
    int _OauthMethod = 0;

    void postAddStickerToSetCallback(OAIHttpRequestWorker *worker);
    void postAnswerCallbackQueryCallback(OAIHttpRequestWorker *worker);
    void postAnswerInlineQueryCallback(OAIHttpRequestWorker *worker);
    void postAnswerPreCheckoutQueryCallback(OAIHttpRequestWorker *worker);
    void postAnswerShippingQueryCallback(OAIHttpRequestWorker *worker);
    void postAnswerWebAppQueryCallback(OAIHttpRequestWorker *worker);
    void postApproveChatJoinRequestCallback(OAIHttpRequestWorker *worker);
    void postBanChatMemberCallback(OAIHttpRequestWorker *worker);
    void postBanChatSenderChatCallback(OAIHttpRequestWorker *worker);
    void postCloseCallback(OAIHttpRequestWorker *worker);
    void postCloseForumTopicCallback(OAIHttpRequestWorker *worker);
    void postCloseGeneralForumTopicCallback(OAIHttpRequestWorker *worker);
    void postConvertGiftToStarsCallback(OAIHttpRequestWorker *worker);
    void postCopyMessageCallback(OAIHttpRequestWorker *worker);
    void postCopyMessagesCallback(OAIHttpRequestWorker *worker);
    void postCreateChatInviteLinkCallback(OAIHttpRequestWorker *worker);
    void postCreateChatSubscriptionInviteLinkCallback(OAIHttpRequestWorker *worker);
    void postCreateForumTopicCallback(OAIHttpRequestWorker *worker);
    void postCreateInvoiceLinkCallback(OAIHttpRequestWorker *worker);
    void postCreateNewStickerSetCallback(OAIHttpRequestWorker *worker);
    void postDeclineChatJoinRequestCallback(OAIHttpRequestWorker *worker);
    void postDeleteBusinessMessagesCallback(OAIHttpRequestWorker *worker);
    void postDeleteChatPhotoCallback(OAIHttpRequestWorker *worker);
    void postDeleteChatStickerSetCallback(OAIHttpRequestWorker *worker);
    void postDeleteForumTopicCallback(OAIHttpRequestWorker *worker);
    void postDeleteMessageCallback(OAIHttpRequestWorker *worker);
    void postDeleteMessagesCallback(OAIHttpRequestWorker *worker);
    void postDeleteMyCommandsCallback(OAIHttpRequestWorker *worker);
    void postDeleteStickerFromSetCallback(OAIHttpRequestWorker *worker);
    void postDeleteStickerSetCallback(OAIHttpRequestWorker *worker);
    void postDeleteStoryCallback(OAIHttpRequestWorker *worker);
    void postDeleteWebhookCallback(OAIHttpRequestWorker *worker);
    void postEditChatInviteLinkCallback(OAIHttpRequestWorker *worker);
    void postEditChatSubscriptionInviteLinkCallback(OAIHttpRequestWorker *worker);
    void postEditForumTopicCallback(OAIHttpRequestWorker *worker);
    void postEditGeneralForumTopicCallback(OAIHttpRequestWorker *worker);
    void postEditMessageCaptionCallback(OAIHttpRequestWorker *worker);
    void postEditMessageLiveLocationCallback(OAIHttpRequestWorker *worker);
    void postEditMessageMediaCallback(OAIHttpRequestWorker *worker);
    void postEditMessageReplyMarkupCallback(OAIHttpRequestWorker *worker);
    void postEditMessageTextCallback(OAIHttpRequestWorker *worker);
    void postEditStoryCallback(OAIHttpRequestWorker *worker);
    void postEditUserStarSubscriptionCallback(OAIHttpRequestWorker *worker);
    void postExportChatInviteLinkCallback(OAIHttpRequestWorker *worker);
    void postForwardMessageCallback(OAIHttpRequestWorker *worker);
    void postForwardMessagesCallback(OAIHttpRequestWorker *worker);
    void postGetAvailableGiftsCallback(OAIHttpRequestWorker *worker);
    void postGetBusinessAccountGiftsCallback(OAIHttpRequestWorker *worker);
    void postGetBusinessAccountStarBalanceCallback(OAIHttpRequestWorker *worker);
    void postGetBusinessConnectionCallback(OAIHttpRequestWorker *worker);
    void postGetChatCallback(OAIHttpRequestWorker *worker);
    void postGetChatAdministratorsCallback(OAIHttpRequestWorker *worker);
    void postGetChatMemberCallback(OAIHttpRequestWorker *worker);
    void postGetChatMemberCountCallback(OAIHttpRequestWorker *worker);
    void postGetChatMenuButtonCallback(OAIHttpRequestWorker *worker);
    void postGetCustomEmojiStickersCallback(OAIHttpRequestWorker *worker);
    void postGetFileCallback(OAIHttpRequestWorker *worker);
    void postGetForumTopicIconStickersCallback(OAIHttpRequestWorker *worker);
    void postGetGameHighScoresCallback(OAIHttpRequestWorker *worker);
    void postGetMeCallback(OAIHttpRequestWorker *worker);
    void postGetMyCommandsCallback(OAIHttpRequestWorker *worker);
    void postGetMyDefaultAdministratorRightsCallback(OAIHttpRequestWorker *worker);
    void postGetMyDescriptionCallback(OAIHttpRequestWorker *worker);
    void postGetMyNameCallback(OAIHttpRequestWorker *worker);
    void postGetMyShortDescriptionCallback(OAIHttpRequestWorker *worker);
    void postGetStarTransactionsCallback(OAIHttpRequestWorker *worker);
    void postGetStickerSetCallback(OAIHttpRequestWorker *worker);
    void postGetUpdatesCallback(OAIHttpRequestWorker *worker);
    void postGetUserChatBoostsCallback(OAIHttpRequestWorker *worker);
    void postGetUserProfilePhotosCallback(OAIHttpRequestWorker *worker);
    void postGetWebhookInfoCallback(OAIHttpRequestWorker *worker);
    void postGiftPremiumSubscriptionCallback(OAIHttpRequestWorker *worker);
    void postHideGeneralForumTopicCallback(OAIHttpRequestWorker *worker);
    void postLeaveChatCallback(OAIHttpRequestWorker *worker);
    void postLogOutCallback(OAIHttpRequestWorker *worker);
    void postPinChatMessageCallback(OAIHttpRequestWorker *worker);
    void postPostStoryCallback(OAIHttpRequestWorker *worker);
    void postPromoteChatMemberCallback(OAIHttpRequestWorker *worker);
    void postReadBusinessMessageCallback(OAIHttpRequestWorker *worker);
    void postRefundStarPaymentCallback(OAIHttpRequestWorker *worker);
    void postRemoveBusinessAccountProfilePhotoCallback(OAIHttpRequestWorker *worker);
    void postRemoveChatVerificationCallback(OAIHttpRequestWorker *worker);
    void postRemoveUserVerificationCallback(OAIHttpRequestWorker *worker);
    void postReopenForumTopicCallback(OAIHttpRequestWorker *worker);
    void postReopenGeneralForumTopicCallback(OAIHttpRequestWorker *worker);
    void postReplaceStickerInSetCallback(OAIHttpRequestWorker *worker);
    void postRestrictChatMemberCallback(OAIHttpRequestWorker *worker);
    void postRevokeChatInviteLinkCallback(OAIHttpRequestWorker *worker);
    void postSavePreparedInlineMessageCallback(OAIHttpRequestWorker *worker);
    void postSendAnimationCallback(OAIHttpRequestWorker *worker);
    void postSendAudioCallback(OAIHttpRequestWorker *worker);
    void postSendChatActionCallback(OAIHttpRequestWorker *worker);
    void postSendContactCallback(OAIHttpRequestWorker *worker);
    void postSendDiceCallback(OAIHttpRequestWorker *worker);
    void postSendDocumentCallback(OAIHttpRequestWorker *worker);
    void postSendGameCallback(OAIHttpRequestWorker *worker);
    void postSendGiftCallback(OAIHttpRequestWorker *worker);
    void postSendInvoiceCallback(OAIHttpRequestWorker *worker);
    void postSendLocationCallback(OAIHttpRequestWorker *worker);
    void postSendMediaGroupCallback(OAIHttpRequestWorker *worker);
    void postSendMessageCallback(OAIHttpRequestWorker *worker);
    void postSendPaidMediaCallback(OAIHttpRequestWorker *worker);
    void postSendPhotoCallback(OAIHttpRequestWorker *worker);
    void postSendPollCallback(OAIHttpRequestWorker *worker);
    void postSendStickerCallback(OAIHttpRequestWorker *worker);
    void postSendVenueCallback(OAIHttpRequestWorker *worker);
    void postSendVideoCallback(OAIHttpRequestWorker *worker);
    void postSendVideoNoteCallback(OAIHttpRequestWorker *worker);
    void postSendVoiceCallback(OAIHttpRequestWorker *worker);
    void postSetBusinessAccountBioCallback(OAIHttpRequestWorker *worker);
    void postSetBusinessAccountGiftSettingsCallback(OAIHttpRequestWorker *worker);
    void postSetBusinessAccountNameCallback(OAIHttpRequestWorker *worker);
    void postSetBusinessAccountProfilePhotoCallback(OAIHttpRequestWorker *worker);
    void postSetBusinessAccountUsernameCallback(OAIHttpRequestWorker *worker);
    void postSetChatAdministratorCustomTitleCallback(OAIHttpRequestWorker *worker);
    void postSetChatDescriptionCallback(OAIHttpRequestWorker *worker);
    void postSetChatMenuButtonCallback(OAIHttpRequestWorker *worker);
    void postSetChatPermissionsCallback(OAIHttpRequestWorker *worker);
    void postSetChatPhotoCallback(OAIHttpRequestWorker *worker);
    void postSetChatStickerSetCallback(OAIHttpRequestWorker *worker);
    void postSetChatTitleCallback(OAIHttpRequestWorker *worker);
    void postSetCustomEmojiStickerSetThumbnailCallback(OAIHttpRequestWorker *worker);
    void postSetGameScoreCallback(OAIHttpRequestWorker *worker);
    void postSetMessageReactionCallback(OAIHttpRequestWorker *worker);
    void postSetMyCommandsCallback(OAIHttpRequestWorker *worker);
    void postSetMyDefaultAdministratorRightsCallback(OAIHttpRequestWorker *worker);
    void postSetMyDescriptionCallback(OAIHttpRequestWorker *worker);
    void postSetMyNameCallback(OAIHttpRequestWorker *worker);
    void postSetMyShortDescriptionCallback(OAIHttpRequestWorker *worker);
    void postSetPassportDataErrorsCallback(OAIHttpRequestWorker *worker);
    void postSetStickerEmojiListCallback(OAIHttpRequestWorker *worker);
    void postSetStickerKeywordsCallback(OAIHttpRequestWorker *worker);
    void postSetStickerMaskPositionCallback(OAIHttpRequestWorker *worker);
    void postSetStickerPositionInSetCallback(OAIHttpRequestWorker *worker);
    void postSetStickerSetThumbnailCallback(OAIHttpRequestWorker *worker);
    void postSetStickerSetTitleCallback(OAIHttpRequestWorker *worker);
    void postSetUserEmojiStatusCallback(OAIHttpRequestWorker *worker);
    void postSetWebhookCallback(OAIHttpRequestWorker *worker);
    void postStopMessageLiveLocationCallback(OAIHttpRequestWorker *worker);
    void postStopPollCallback(OAIHttpRequestWorker *worker);
    void postTransferBusinessAccountStarsCallback(OAIHttpRequestWorker *worker);
    void postTransferGiftCallback(OAIHttpRequestWorker *worker);
    void postUnbanChatMemberCallback(OAIHttpRequestWorker *worker);
    void postUnbanChatSenderChatCallback(OAIHttpRequestWorker *worker);
    void postUnhideGeneralForumTopicCallback(OAIHttpRequestWorker *worker);
    void postUnpinAllChatMessagesCallback(OAIHttpRequestWorker *worker);
    void postUnpinAllForumTopicMessagesCallback(OAIHttpRequestWorker *worker);
    void postUnpinAllGeneralForumTopicMessagesCallback(OAIHttpRequestWorker *worker);
    void postUnpinChatMessageCallback(OAIHttpRequestWorker *worker);
    void postUpgradeGiftCallback(OAIHttpRequestWorker *worker);
    void postUploadStickerFileCallback(OAIHttpRequestWorker *worker);
    void postVerifyChatCallback(OAIHttpRequestWorker *worker);
    void postVerifyUserCallback(OAIHttpRequestWorker *worker);

Q_SIGNALS:

    void postAddStickerToSetSignal(OAIPost_setWebhook_200_response summary);
    void postAnswerCallbackQuerySignal(OAIPost_setWebhook_200_response summary);
    void postAnswerInlineQuerySignal(OAIPost_setWebhook_200_response summary);
    void postAnswerPreCheckoutQuerySignal(OAIPost_setWebhook_200_response summary);
    void postAnswerShippingQuerySignal(OAIPost_setWebhook_200_response summary);
    void postAnswerWebAppQuerySignal(OAIPost_answerWebAppQuery_200_response summary);
    void postApproveChatJoinRequestSignal(OAIPost_setWebhook_200_response summary);
    void postBanChatMemberSignal(OAIPost_setWebhook_200_response summary);
    void postBanChatSenderChatSignal(OAIPost_setWebhook_200_response summary);
    void postCloseSignal(OAIPost_setWebhook_200_response summary);
    void postCloseForumTopicSignal(OAIPost_setWebhook_200_response summary);
    void postCloseGeneralForumTopicSignal(OAIPost_setWebhook_200_response summary);
    void postConvertGiftToStarsSignal(OAIPost_setWebhook_200_response summary);
    void postCopyMessageSignal(OAIPost_copyMessage_200_response summary);
    void postCopyMessagesSignal(OAIPost_forwardMessages_200_response summary);
    void postCreateChatInviteLinkSignal(OAIPost_createChatInviteLink_200_response summary);
    void postCreateChatSubscriptionInviteLinkSignal(OAIPost_createChatInviteLink_200_response summary);
    void postCreateForumTopicSignal(OAIPost_createForumTopic_200_response summary);
    void postCreateInvoiceLinkSignal(OAIPost_exportChatInviteLink_200_response summary);
    void postCreateNewStickerSetSignal(OAIPost_setWebhook_200_response summary);
    void postDeclineChatJoinRequestSignal(OAIPost_setWebhook_200_response summary);
    void postDeleteBusinessMessagesSignal(OAIPost_setWebhook_200_response summary);
    void postDeleteChatPhotoSignal(OAIPost_setWebhook_200_response summary);
    void postDeleteChatStickerSetSignal(OAIPost_setWebhook_200_response summary);
    void postDeleteForumTopicSignal(OAIPost_setWebhook_200_response summary);
    void postDeleteMessageSignal(OAIPost_setWebhook_200_response summary);
    void postDeleteMessagesSignal(OAIPost_setWebhook_200_response summary);
    void postDeleteMyCommandsSignal(OAIPost_setWebhook_200_response summary);
    void postDeleteStickerFromSetSignal(OAIPost_setWebhook_200_response summary);
    void postDeleteStickerSetSignal(OAIPost_setWebhook_200_response summary);
    void postDeleteStorySignal(OAIPost_setWebhook_200_response summary);
    void postDeleteWebhookSignal(OAIPost_setWebhook_200_response summary);
    void postEditChatInviteLinkSignal(OAIPost_createChatInviteLink_200_response summary);
    void postEditChatSubscriptionInviteLinkSignal(OAIPost_createChatInviteLink_200_response summary);
    void postEditForumTopicSignal(OAIPost_setWebhook_200_response summary);
    void postEditGeneralForumTopicSignal(OAIPost_setWebhook_200_response summary);
    void postEditMessageCaptionSignal(OAIPost_editMessageText_200_response summary);
    void postEditMessageLiveLocationSignal(OAIPost_editMessageText_200_response summary);
    void postEditMessageMediaSignal(OAIPost_editMessageText_200_response summary);
    void postEditMessageReplyMarkupSignal(OAIPost_editMessageText_200_response summary);
    void postEditMessageTextSignal(OAIPost_editMessageText_200_response summary);
    void postEditStorySignal(OAIPost_postStory_200_response summary);
    void postEditUserStarSubscriptionSignal(OAIPost_setWebhook_200_response summary);
    void postExportChatInviteLinkSignal(OAIPost_exportChatInviteLink_200_response summary);
    void postForwardMessageSignal(OAIPost_sendMessage_200_response summary);
    void postForwardMessagesSignal(OAIPost_forwardMessages_200_response summary);
    void postGetAvailableGiftsSignal(OAIPost_getAvailableGifts_200_response summary);
    void postGetBusinessAccountGiftsSignal(OAIPost_getBusinessAccountGifts_200_response summary);
    void postGetBusinessAccountStarBalanceSignal(OAIPost_getBusinessAccountStarBalance_200_response summary);
    void postGetBusinessConnectionSignal(OAIPost_getBusinessConnection_200_response summary);
    void postGetChatSignal(OAIPost_getChat_200_response summary);
    void postGetChatAdministratorsSignal(OAIPost_getChatAdministrators_200_response summary);
    void postGetChatMemberSignal(OAIPost_getChatMember_200_response summary);
    void postGetChatMemberCountSignal(OAIPost_getChatMemberCount_200_response summary);
    void postGetChatMenuButtonSignal(OAIPost_getChatMenuButton_200_response summary);
    void postGetCustomEmojiStickersSignal(OAIPost_getForumTopicIconStickers_200_response summary);
    void postGetFileSignal(OAIPost_getFile_200_response summary);
    void postGetForumTopicIconStickersSignal(OAIPost_getForumTopicIconStickers_200_response summary);
    void postGetGameHighScoresSignal(OAIPost_getGameHighScores_200_response summary);
    void postGetMeSignal(OAIPost_getMe_200_response summary);
    void postGetMyCommandsSignal(OAIPost_getMyCommands_200_response summary);
    void postGetMyDefaultAdministratorRightsSignal(OAIPost_getMyDefaultAdministratorRights_200_response summary);
    void postGetMyDescriptionSignal(OAIPost_getMyDescription_200_response summary);
    void postGetMyNameSignal(OAIPost_getMyName_200_response summary);
    void postGetMyShortDescriptionSignal(OAIPost_getMyShortDescription_200_response summary);
    void postGetStarTransactionsSignal(OAIPost_getStarTransactions_200_response summary);
    void postGetStickerSetSignal(OAIPost_getStickerSet_200_response summary);
    void postGetUpdatesSignal(OAIPost_getUpdates_200_response summary);
    void postGetUserChatBoostsSignal(OAIPost_getUserChatBoosts_200_response summary);
    void postGetUserProfilePhotosSignal(OAIPost_getUserProfilePhotos_200_response summary);
    void postGetWebhookInfoSignal(OAIPost_getWebhookInfo_200_response summary);
    void postGiftPremiumSubscriptionSignal(OAIPost_setWebhook_200_response summary);
    void postHideGeneralForumTopicSignal(OAIPost_setWebhook_200_response summary);
    void postLeaveChatSignal(OAIPost_setWebhook_200_response summary);
    void postLogOutSignal(OAIPost_setWebhook_200_response summary);
    void postPinChatMessageSignal(OAIPost_setWebhook_200_response summary);
    void postPostStorySignal(OAIPost_postStory_200_response summary);
    void postPromoteChatMemberSignal(OAIPost_setWebhook_200_response summary);
    void postReadBusinessMessageSignal(OAIPost_setWebhook_200_response summary);
    void postRefundStarPaymentSignal(OAIPost_setWebhook_200_response summary);
    void postRemoveBusinessAccountProfilePhotoSignal(OAIPost_setWebhook_200_response summary);
    void postRemoveChatVerificationSignal(OAIPost_setWebhook_200_response summary);
    void postRemoveUserVerificationSignal(OAIPost_setWebhook_200_response summary);
    void postReopenForumTopicSignal(OAIPost_setWebhook_200_response summary);
    void postReopenGeneralForumTopicSignal(OAIPost_setWebhook_200_response summary);
    void postReplaceStickerInSetSignal(OAIPost_setWebhook_200_response summary);
    void postRestrictChatMemberSignal(OAIPost_setWebhook_200_response summary);
    void postRevokeChatInviteLinkSignal(OAIPost_createChatInviteLink_200_response summary);
    void postSavePreparedInlineMessageSignal(OAIPost_savePreparedInlineMessage_200_response summary);
    void postSendAnimationSignal(OAIPost_sendMessage_200_response summary);
    void postSendAudioSignal(OAIPost_sendMessage_200_response summary);
    void postSendChatActionSignal(OAIPost_setWebhook_200_response summary);
    void postSendContactSignal(OAIPost_sendMessage_200_response summary);
    void postSendDiceSignal(OAIPost_sendMessage_200_response summary);
    void postSendDocumentSignal(OAIPost_sendMessage_200_response summary);
    void postSendGameSignal(OAIPost_sendMessage_200_response summary);
    void postSendGiftSignal(OAIPost_setWebhook_200_response summary);
    void postSendInvoiceSignal(OAIPost_sendMessage_200_response summary);
    void postSendLocationSignal(OAIPost_sendMessage_200_response summary);
    void postSendMediaGroupSignal(OAIPost_sendMediaGroup_200_response summary);
    void postSendMessageSignal(OAIPost_sendMessage_200_response summary);
    void postSendPaidMediaSignal(OAIPost_sendMessage_200_response summary);
    void postSendPhotoSignal(OAIPost_sendMessage_200_response summary);
    void postSendPollSignal(OAIPost_sendMessage_200_response summary);
    void postSendStickerSignal(OAIPost_sendMessage_200_response summary);
    void postSendVenueSignal(OAIPost_sendMessage_200_response summary);
    void postSendVideoSignal(OAIPost_sendMessage_200_response summary);
    void postSendVideoNoteSignal(OAIPost_sendMessage_200_response summary);
    void postSendVoiceSignal(OAIPost_sendMessage_200_response summary);
    void postSetBusinessAccountBioSignal(OAIPost_setWebhook_200_response summary);
    void postSetBusinessAccountGiftSettingsSignal(OAIPost_setWebhook_200_response summary);
    void postSetBusinessAccountNameSignal(OAIPost_setWebhook_200_response summary);
    void postSetBusinessAccountProfilePhotoSignal(OAIPost_setWebhook_200_response summary);
    void postSetBusinessAccountUsernameSignal(OAIPost_setWebhook_200_response summary);
    void postSetChatAdministratorCustomTitleSignal(OAIPost_setWebhook_200_response summary);
    void postSetChatDescriptionSignal(OAIPost_setWebhook_200_response summary);
    void postSetChatMenuButtonSignal(OAIPost_setWebhook_200_response summary);
    void postSetChatPermissionsSignal(OAIPost_setWebhook_200_response summary);
    void postSetChatPhotoSignal(OAIPost_setWebhook_200_response summary);
    void postSetChatStickerSetSignal(OAIPost_setWebhook_200_response summary);
    void postSetChatTitleSignal(OAIPost_setWebhook_200_response summary);
    void postSetCustomEmojiStickerSetThumbnailSignal(OAIPost_setWebhook_200_response summary);
    void postSetGameScoreSignal(OAIPost_editMessageText_200_response summary);
    void postSetMessageReactionSignal(OAIPost_setWebhook_200_response summary);
    void postSetMyCommandsSignal(OAIPost_setWebhook_200_response summary);
    void postSetMyDefaultAdministratorRightsSignal(OAIPost_setWebhook_200_response summary);
    void postSetMyDescriptionSignal(OAIPost_setWebhook_200_response summary);
    void postSetMyNameSignal(OAIPost_setWebhook_200_response summary);
    void postSetMyShortDescriptionSignal(OAIPost_setWebhook_200_response summary);
    void postSetPassportDataErrorsSignal(OAIPost_setWebhook_200_response summary);
    void postSetStickerEmojiListSignal(OAIPost_setWebhook_200_response summary);
    void postSetStickerKeywordsSignal(OAIPost_setWebhook_200_response summary);
    void postSetStickerMaskPositionSignal(OAIPost_setWebhook_200_response summary);
    void postSetStickerPositionInSetSignal(OAIPost_setWebhook_200_response summary);
    void postSetStickerSetThumbnailSignal(OAIPost_setWebhook_200_response summary);
    void postSetStickerSetTitleSignal(OAIPost_setWebhook_200_response summary);
    void postSetUserEmojiStatusSignal(OAIPost_setWebhook_200_response summary);
    void postSetWebhookSignal(OAIPost_setWebhook_200_response summary);
    void postStopMessageLiveLocationSignal(OAIPost_editMessageText_200_response summary);
    void postStopPollSignal(OAIPost_stopPoll_200_response summary);
    void postTransferBusinessAccountStarsSignal(OAIPost_setWebhook_200_response summary);
    void postTransferGiftSignal(OAIPost_setWebhook_200_response summary);
    void postUnbanChatMemberSignal(OAIPost_setWebhook_200_response summary);
    void postUnbanChatSenderChatSignal(OAIPost_setWebhook_200_response summary);
    void postUnhideGeneralForumTopicSignal(OAIPost_setWebhook_200_response summary);
    void postUnpinAllChatMessagesSignal(OAIPost_setWebhook_200_response summary);
    void postUnpinAllForumTopicMessagesSignal(OAIPost_setWebhook_200_response summary);
    void postUnpinAllGeneralForumTopicMessagesSignal(OAIPost_setWebhook_200_response summary);
    void postUnpinChatMessageSignal(OAIPost_setWebhook_200_response summary);
    void postUpgradeGiftSignal(OAIPost_setWebhook_200_response summary);
    void postUploadStickerFileSignal(OAIPost_getFile_200_response summary);
    void postVerifyChatSignal(OAIPost_setWebhook_200_response summary);
    void postVerifyUserSignal(OAIPost_setWebhook_200_response summary);


    void postAddStickerToSetSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postAnswerCallbackQuerySignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postAnswerInlineQuerySignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postAnswerPreCheckoutQuerySignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postAnswerShippingQuerySignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postAnswerWebAppQuerySignalFull(OAIHttpRequestWorker *worker, OAIPost_answerWebAppQuery_200_response summary);
    void postApproveChatJoinRequestSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postBanChatMemberSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postBanChatSenderChatSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postCloseSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postCloseForumTopicSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postCloseGeneralForumTopicSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postConvertGiftToStarsSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postCopyMessageSignalFull(OAIHttpRequestWorker *worker, OAIPost_copyMessage_200_response summary);
    void postCopyMessagesSignalFull(OAIHttpRequestWorker *worker, OAIPost_forwardMessages_200_response summary);
    void postCreateChatInviteLinkSignalFull(OAIHttpRequestWorker *worker, OAIPost_createChatInviteLink_200_response summary);
    void postCreateChatSubscriptionInviteLinkSignalFull(OAIHttpRequestWorker *worker, OAIPost_createChatInviteLink_200_response summary);
    void postCreateForumTopicSignalFull(OAIHttpRequestWorker *worker, OAIPost_createForumTopic_200_response summary);
    void postCreateInvoiceLinkSignalFull(OAIHttpRequestWorker *worker, OAIPost_exportChatInviteLink_200_response summary);
    void postCreateNewStickerSetSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postDeclineChatJoinRequestSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postDeleteBusinessMessagesSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postDeleteChatPhotoSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postDeleteChatStickerSetSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postDeleteForumTopicSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postDeleteMessageSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postDeleteMessagesSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postDeleteMyCommandsSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postDeleteStickerFromSetSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postDeleteStickerSetSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postDeleteStorySignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postDeleteWebhookSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postEditChatInviteLinkSignalFull(OAIHttpRequestWorker *worker, OAIPost_createChatInviteLink_200_response summary);
    void postEditChatSubscriptionInviteLinkSignalFull(OAIHttpRequestWorker *worker, OAIPost_createChatInviteLink_200_response summary);
    void postEditForumTopicSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postEditGeneralForumTopicSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postEditMessageCaptionSignalFull(OAIHttpRequestWorker *worker, OAIPost_editMessageText_200_response summary);
    void postEditMessageLiveLocationSignalFull(OAIHttpRequestWorker *worker, OAIPost_editMessageText_200_response summary);
    void postEditMessageMediaSignalFull(OAIHttpRequestWorker *worker, OAIPost_editMessageText_200_response summary);
    void postEditMessageReplyMarkupSignalFull(OAIHttpRequestWorker *worker, OAIPost_editMessageText_200_response summary);
    void postEditMessageTextSignalFull(OAIHttpRequestWorker *worker, OAIPost_editMessageText_200_response summary);
    void postEditStorySignalFull(OAIHttpRequestWorker *worker, OAIPost_postStory_200_response summary);
    void postEditUserStarSubscriptionSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postExportChatInviteLinkSignalFull(OAIHttpRequestWorker *worker, OAIPost_exportChatInviteLink_200_response summary);
    void postForwardMessageSignalFull(OAIHttpRequestWorker *worker, OAIPost_sendMessage_200_response summary);
    void postForwardMessagesSignalFull(OAIHttpRequestWorker *worker, OAIPost_forwardMessages_200_response summary);
    void postGetAvailableGiftsSignalFull(OAIHttpRequestWorker *worker, OAIPost_getAvailableGifts_200_response summary);
    void postGetBusinessAccountGiftsSignalFull(OAIHttpRequestWorker *worker, OAIPost_getBusinessAccountGifts_200_response summary);
    void postGetBusinessAccountStarBalanceSignalFull(OAIHttpRequestWorker *worker, OAIPost_getBusinessAccountStarBalance_200_response summary);
    void postGetBusinessConnectionSignalFull(OAIHttpRequestWorker *worker, OAIPost_getBusinessConnection_200_response summary);
    void postGetChatSignalFull(OAIHttpRequestWorker *worker, OAIPost_getChat_200_response summary);
    void postGetChatAdministratorsSignalFull(OAIHttpRequestWorker *worker, OAIPost_getChatAdministrators_200_response summary);
    void postGetChatMemberSignalFull(OAIHttpRequestWorker *worker, OAIPost_getChatMember_200_response summary);
    void postGetChatMemberCountSignalFull(OAIHttpRequestWorker *worker, OAIPost_getChatMemberCount_200_response summary);
    void postGetChatMenuButtonSignalFull(OAIHttpRequestWorker *worker, OAIPost_getChatMenuButton_200_response summary);
    void postGetCustomEmojiStickersSignalFull(OAIHttpRequestWorker *worker, OAIPost_getForumTopicIconStickers_200_response summary);
    void postGetFileSignalFull(OAIHttpRequestWorker *worker, OAIPost_getFile_200_response summary);
    void postGetForumTopicIconStickersSignalFull(OAIHttpRequestWorker *worker, OAIPost_getForumTopicIconStickers_200_response summary);
    void postGetGameHighScoresSignalFull(OAIHttpRequestWorker *worker, OAIPost_getGameHighScores_200_response summary);
    void postGetMeSignalFull(OAIHttpRequestWorker *worker, OAIPost_getMe_200_response summary);
    void postGetMyCommandsSignalFull(OAIHttpRequestWorker *worker, OAIPost_getMyCommands_200_response summary);
    void postGetMyDefaultAdministratorRightsSignalFull(OAIHttpRequestWorker *worker, OAIPost_getMyDefaultAdministratorRights_200_response summary);
    void postGetMyDescriptionSignalFull(OAIHttpRequestWorker *worker, OAIPost_getMyDescription_200_response summary);
    void postGetMyNameSignalFull(OAIHttpRequestWorker *worker, OAIPost_getMyName_200_response summary);
    void postGetMyShortDescriptionSignalFull(OAIHttpRequestWorker *worker, OAIPost_getMyShortDescription_200_response summary);
    void postGetStarTransactionsSignalFull(OAIHttpRequestWorker *worker, OAIPost_getStarTransactions_200_response summary);
    void postGetStickerSetSignalFull(OAIHttpRequestWorker *worker, OAIPost_getStickerSet_200_response summary);
    void postGetUpdatesSignalFull(OAIHttpRequestWorker *worker, OAIPost_getUpdates_200_response summary);
    void postGetUserChatBoostsSignalFull(OAIHttpRequestWorker *worker, OAIPost_getUserChatBoosts_200_response summary);
    void postGetUserProfilePhotosSignalFull(OAIHttpRequestWorker *worker, OAIPost_getUserProfilePhotos_200_response summary);
    void postGetWebhookInfoSignalFull(OAIHttpRequestWorker *worker, OAIPost_getWebhookInfo_200_response summary);
    void postGiftPremiumSubscriptionSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postHideGeneralForumTopicSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postLeaveChatSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postLogOutSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postPinChatMessageSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postPostStorySignalFull(OAIHttpRequestWorker *worker, OAIPost_postStory_200_response summary);
    void postPromoteChatMemberSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postReadBusinessMessageSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postRefundStarPaymentSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postRemoveBusinessAccountProfilePhotoSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postRemoveChatVerificationSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postRemoveUserVerificationSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postReopenForumTopicSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postReopenGeneralForumTopicSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postReplaceStickerInSetSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postRestrictChatMemberSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postRevokeChatInviteLinkSignalFull(OAIHttpRequestWorker *worker, OAIPost_createChatInviteLink_200_response summary);
    void postSavePreparedInlineMessageSignalFull(OAIHttpRequestWorker *worker, OAIPost_savePreparedInlineMessage_200_response summary);
    void postSendAnimationSignalFull(OAIHttpRequestWorker *worker, OAIPost_sendMessage_200_response summary);
    void postSendAudioSignalFull(OAIHttpRequestWorker *worker, OAIPost_sendMessage_200_response summary);
    void postSendChatActionSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSendContactSignalFull(OAIHttpRequestWorker *worker, OAIPost_sendMessage_200_response summary);
    void postSendDiceSignalFull(OAIHttpRequestWorker *worker, OAIPost_sendMessage_200_response summary);
    void postSendDocumentSignalFull(OAIHttpRequestWorker *worker, OAIPost_sendMessage_200_response summary);
    void postSendGameSignalFull(OAIHttpRequestWorker *worker, OAIPost_sendMessage_200_response summary);
    void postSendGiftSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSendInvoiceSignalFull(OAIHttpRequestWorker *worker, OAIPost_sendMessage_200_response summary);
    void postSendLocationSignalFull(OAIHttpRequestWorker *worker, OAIPost_sendMessage_200_response summary);
    void postSendMediaGroupSignalFull(OAIHttpRequestWorker *worker, OAIPost_sendMediaGroup_200_response summary);
    void postSendMessageSignalFull(OAIHttpRequestWorker *worker, OAIPost_sendMessage_200_response summary);
    void postSendPaidMediaSignalFull(OAIHttpRequestWorker *worker, OAIPost_sendMessage_200_response summary);
    void postSendPhotoSignalFull(OAIHttpRequestWorker *worker, OAIPost_sendMessage_200_response summary);
    void postSendPollSignalFull(OAIHttpRequestWorker *worker, OAIPost_sendMessage_200_response summary);
    void postSendStickerSignalFull(OAIHttpRequestWorker *worker, OAIPost_sendMessage_200_response summary);
    void postSendVenueSignalFull(OAIHttpRequestWorker *worker, OAIPost_sendMessage_200_response summary);
    void postSendVideoSignalFull(OAIHttpRequestWorker *worker, OAIPost_sendMessage_200_response summary);
    void postSendVideoNoteSignalFull(OAIHttpRequestWorker *worker, OAIPost_sendMessage_200_response summary);
    void postSendVoiceSignalFull(OAIHttpRequestWorker *worker, OAIPost_sendMessage_200_response summary);
    void postSetBusinessAccountBioSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetBusinessAccountGiftSettingsSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetBusinessAccountNameSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetBusinessAccountProfilePhotoSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetBusinessAccountUsernameSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetChatAdministratorCustomTitleSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetChatDescriptionSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetChatMenuButtonSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetChatPermissionsSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetChatPhotoSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetChatStickerSetSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetChatTitleSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetCustomEmojiStickerSetThumbnailSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetGameScoreSignalFull(OAIHttpRequestWorker *worker, OAIPost_editMessageText_200_response summary);
    void postSetMessageReactionSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetMyCommandsSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetMyDefaultAdministratorRightsSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetMyDescriptionSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetMyNameSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetMyShortDescriptionSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetPassportDataErrorsSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetStickerEmojiListSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetStickerKeywordsSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetStickerMaskPositionSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetStickerPositionInSetSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetStickerSetThumbnailSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetStickerSetTitleSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetUserEmojiStatusSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postSetWebhookSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postStopMessageLiveLocationSignalFull(OAIHttpRequestWorker *worker, OAIPost_editMessageText_200_response summary);
    void postStopPollSignalFull(OAIHttpRequestWorker *worker, OAIPost_stopPoll_200_response summary);
    void postTransferBusinessAccountStarsSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postTransferGiftSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postUnbanChatMemberSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postUnbanChatSenderChatSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postUnhideGeneralForumTopicSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postUnpinAllChatMessagesSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postUnpinAllForumTopicMessagesSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postUnpinAllGeneralForumTopicMessagesSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postUnpinChatMessageSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postUpgradeGiftSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postUploadStickerFileSignalFull(OAIHttpRequestWorker *worker, OAIPost_getFile_200_response summary);
    void postVerifyChatSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);
    void postVerifyUserSignalFull(OAIHttpRequestWorker *worker, OAIPost_setWebhook_200_response summary);

    Q_DECL_DEPRECATED_X("Use postAddStickerToSetSignalError() instead")
    void postAddStickerToSetSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postAddStickerToSetSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postAnswerCallbackQuerySignalError() instead")
    void postAnswerCallbackQuerySignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postAnswerCallbackQuerySignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postAnswerInlineQuerySignalError() instead")
    void postAnswerInlineQuerySignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postAnswerInlineQuerySignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postAnswerPreCheckoutQuerySignalError() instead")
    void postAnswerPreCheckoutQuerySignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postAnswerPreCheckoutQuerySignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postAnswerShippingQuerySignalError() instead")
    void postAnswerShippingQuerySignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postAnswerShippingQuerySignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postAnswerWebAppQuerySignalError() instead")
    void postAnswerWebAppQuerySignalE(OAIPost_answerWebAppQuery_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postAnswerWebAppQuerySignalError(OAIPost_answerWebAppQuery_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postApproveChatJoinRequestSignalError() instead")
    void postApproveChatJoinRequestSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postApproveChatJoinRequestSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postBanChatMemberSignalError() instead")
    void postBanChatMemberSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postBanChatMemberSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postBanChatSenderChatSignalError() instead")
    void postBanChatSenderChatSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postBanChatSenderChatSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postCloseSignalError() instead")
    void postCloseSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postCloseSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postCloseForumTopicSignalError() instead")
    void postCloseForumTopicSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postCloseForumTopicSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postCloseGeneralForumTopicSignalError() instead")
    void postCloseGeneralForumTopicSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postCloseGeneralForumTopicSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postConvertGiftToStarsSignalError() instead")
    void postConvertGiftToStarsSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postConvertGiftToStarsSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postCopyMessageSignalError() instead")
    void postCopyMessageSignalE(OAIPost_copyMessage_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postCopyMessageSignalError(OAIPost_copyMessage_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postCopyMessagesSignalError() instead")
    void postCopyMessagesSignalE(OAIPost_forwardMessages_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postCopyMessagesSignalError(OAIPost_forwardMessages_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postCreateChatInviteLinkSignalError() instead")
    void postCreateChatInviteLinkSignalE(OAIPost_createChatInviteLink_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postCreateChatInviteLinkSignalError(OAIPost_createChatInviteLink_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postCreateChatSubscriptionInviteLinkSignalError() instead")
    void postCreateChatSubscriptionInviteLinkSignalE(OAIPost_createChatInviteLink_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postCreateChatSubscriptionInviteLinkSignalError(OAIPost_createChatInviteLink_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postCreateForumTopicSignalError() instead")
    void postCreateForumTopicSignalE(OAIPost_createForumTopic_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postCreateForumTopicSignalError(OAIPost_createForumTopic_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postCreateInvoiceLinkSignalError() instead")
    void postCreateInvoiceLinkSignalE(OAIPost_exportChatInviteLink_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postCreateInvoiceLinkSignalError(OAIPost_exportChatInviteLink_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postCreateNewStickerSetSignalError() instead")
    void postCreateNewStickerSetSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postCreateNewStickerSetSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postDeclineChatJoinRequestSignalError() instead")
    void postDeclineChatJoinRequestSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postDeclineChatJoinRequestSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postDeleteBusinessMessagesSignalError() instead")
    void postDeleteBusinessMessagesSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postDeleteBusinessMessagesSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postDeleteChatPhotoSignalError() instead")
    void postDeleteChatPhotoSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postDeleteChatPhotoSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postDeleteChatStickerSetSignalError() instead")
    void postDeleteChatStickerSetSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postDeleteChatStickerSetSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postDeleteForumTopicSignalError() instead")
    void postDeleteForumTopicSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postDeleteForumTopicSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postDeleteMessageSignalError() instead")
    void postDeleteMessageSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postDeleteMessageSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postDeleteMessagesSignalError() instead")
    void postDeleteMessagesSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postDeleteMessagesSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postDeleteMyCommandsSignalError() instead")
    void postDeleteMyCommandsSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postDeleteMyCommandsSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postDeleteStickerFromSetSignalError() instead")
    void postDeleteStickerFromSetSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postDeleteStickerFromSetSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postDeleteStickerSetSignalError() instead")
    void postDeleteStickerSetSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postDeleteStickerSetSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postDeleteStorySignalError() instead")
    void postDeleteStorySignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postDeleteStorySignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postDeleteWebhookSignalError() instead")
    void postDeleteWebhookSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postDeleteWebhookSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postEditChatInviteLinkSignalError() instead")
    void postEditChatInviteLinkSignalE(OAIPost_createChatInviteLink_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postEditChatInviteLinkSignalError(OAIPost_createChatInviteLink_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postEditChatSubscriptionInviteLinkSignalError() instead")
    void postEditChatSubscriptionInviteLinkSignalE(OAIPost_createChatInviteLink_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postEditChatSubscriptionInviteLinkSignalError(OAIPost_createChatInviteLink_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postEditForumTopicSignalError() instead")
    void postEditForumTopicSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postEditForumTopicSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postEditGeneralForumTopicSignalError() instead")
    void postEditGeneralForumTopicSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postEditGeneralForumTopicSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postEditMessageCaptionSignalError() instead")
    void postEditMessageCaptionSignalE(OAIPost_editMessageText_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postEditMessageCaptionSignalError(OAIPost_editMessageText_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postEditMessageLiveLocationSignalError() instead")
    void postEditMessageLiveLocationSignalE(OAIPost_editMessageText_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postEditMessageLiveLocationSignalError(OAIPost_editMessageText_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postEditMessageMediaSignalError() instead")
    void postEditMessageMediaSignalE(OAIPost_editMessageText_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postEditMessageMediaSignalError(OAIPost_editMessageText_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postEditMessageReplyMarkupSignalError() instead")
    void postEditMessageReplyMarkupSignalE(OAIPost_editMessageText_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postEditMessageReplyMarkupSignalError(OAIPost_editMessageText_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postEditMessageTextSignalError() instead")
    void postEditMessageTextSignalE(OAIPost_editMessageText_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postEditMessageTextSignalError(OAIPost_editMessageText_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postEditStorySignalError() instead")
    void postEditStorySignalE(OAIPost_postStory_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postEditStorySignalError(OAIPost_postStory_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postEditUserStarSubscriptionSignalError() instead")
    void postEditUserStarSubscriptionSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postEditUserStarSubscriptionSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postExportChatInviteLinkSignalError() instead")
    void postExportChatInviteLinkSignalE(OAIPost_exportChatInviteLink_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postExportChatInviteLinkSignalError(OAIPost_exportChatInviteLink_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postForwardMessageSignalError() instead")
    void postForwardMessageSignalE(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postForwardMessageSignalError(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postForwardMessagesSignalError() instead")
    void postForwardMessagesSignalE(OAIPost_forwardMessages_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postForwardMessagesSignalError(OAIPost_forwardMessages_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetAvailableGiftsSignalError() instead")
    void postGetAvailableGiftsSignalE(OAIPost_getAvailableGifts_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetAvailableGiftsSignalError(OAIPost_getAvailableGifts_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetBusinessAccountGiftsSignalError() instead")
    void postGetBusinessAccountGiftsSignalE(OAIPost_getBusinessAccountGifts_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetBusinessAccountGiftsSignalError(OAIPost_getBusinessAccountGifts_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetBusinessAccountStarBalanceSignalError() instead")
    void postGetBusinessAccountStarBalanceSignalE(OAIPost_getBusinessAccountStarBalance_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetBusinessAccountStarBalanceSignalError(OAIPost_getBusinessAccountStarBalance_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetBusinessConnectionSignalError() instead")
    void postGetBusinessConnectionSignalE(OAIPost_getBusinessConnection_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetBusinessConnectionSignalError(OAIPost_getBusinessConnection_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetChatSignalError() instead")
    void postGetChatSignalE(OAIPost_getChat_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetChatSignalError(OAIPost_getChat_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetChatAdministratorsSignalError() instead")
    void postGetChatAdministratorsSignalE(OAIPost_getChatAdministrators_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetChatAdministratorsSignalError(OAIPost_getChatAdministrators_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetChatMemberSignalError() instead")
    void postGetChatMemberSignalE(OAIPost_getChatMember_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetChatMemberSignalError(OAIPost_getChatMember_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetChatMemberCountSignalError() instead")
    void postGetChatMemberCountSignalE(OAIPost_getChatMemberCount_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetChatMemberCountSignalError(OAIPost_getChatMemberCount_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetChatMenuButtonSignalError() instead")
    void postGetChatMenuButtonSignalE(OAIPost_getChatMenuButton_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetChatMenuButtonSignalError(OAIPost_getChatMenuButton_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetCustomEmojiStickersSignalError() instead")
    void postGetCustomEmojiStickersSignalE(OAIPost_getForumTopicIconStickers_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetCustomEmojiStickersSignalError(OAIPost_getForumTopicIconStickers_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetFileSignalError() instead")
    void postGetFileSignalE(OAIPost_getFile_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetFileSignalError(OAIPost_getFile_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetForumTopicIconStickersSignalError() instead")
    void postGetForumTopicIconStickersSignalE(OAIPost_getForumTopicIconStickers_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetForumTopicIconStickersSignalError(OAIPost_getForumTopicIconStickers_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetGameHighScoresSignalError() instead")
    void postGetGameHighScoresSignalE(OAIPost_getGameHighScores_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetGameHighScoresSignalError(OAIPost_getGameHighScores_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetMeSignalError() instead")
    void postGetMeSignalE(OAIPost_getMe_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetMeSignalError(OAIPost_getMe_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetMyCommandsSignalError() instead")
    void postGetMyCommandsSignalE(OAIPost_getMyCommands_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetMyCommandsSignalError(OAIPost_getMyCommands_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetMyDefaultAdministratorRightsSignalError() instead")
    void postGetMyDefaultAdministratorRightsSignalE(OAIPost_getMyDefaultAdministratorRights_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetMyDefaultAdministratorRightsSignalError(OAIPost_getMyDefaultAdministratorRights_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetMyDescriptionSignalError() instead")
    void postGetMyDescriptionSignalE(OAIPost_getMyDescription_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetMyDescriptionSignalError(OAIPost_getMyDescription_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetMyNameSignalError() instead")
    void postGetMyNameSignalE(OAIPost_getMyName_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetMyNameSignalError(OAIPost_getMyName_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetMyShortDescriptionSignalError() instead")
    void postGetMyShortDescriptionSignalE(OAIPost_getMyShortDescription_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetMyShortDescriptionSignalError(OAIPost_getMyShortDescription_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetStarTransactionsSignalError() instead")
    void postGetStarTransactionsSignalE(OAIPost_getStarTransactions_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetStarTransactionsSignalError(OAIPost_getStarTransactions_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetStickerSetSignalError() instead")
    void postGetStickerSetSignalE(OAIPost_getStickerSet_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetStickerSetSignalError(OAIPost_getStickerSet_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetUpdatesSignalError() instead")
    void postGetUpdatesSignalE(OAIPost_getUpdates_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetUpdatesSignalError(OAIPost_getUpdates_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetUserChatBoostsSignalError() instead")
    void postGetUserChatBoostsSignalE(OAIPost_getUserChatBoosts_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetUserChatBoostsSignalError(OAIPost_getUserChatBoosts_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetUserProfilePhotosSignalError() instead")
    void postGetUserProfilePhotosSignalE(OAIPost_getUserProfilePhotos_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetUserProfilePhotosSignalError(OAIPost_getUserProfilePhotos_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetWebhookInfoSignalError() instead")
    void postGetWebhookInfoSignalE(OAIPost_getWebhookInfo_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetWebhookInfoSignalError(OAIPost_getWebhookInfo_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGiftPremiumSubscriptionSignalError() instead")
    void postGiftPremiumSubscriptionSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postGiftPremiumSubscriptionSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postHideGeneralForumTopicSignalError() instead")
    void postHideGeneralForumTopicSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postHideGeneralForumTopicSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postLeaveChatSignalError() instead")
    void postLeaveChatSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postLeaveChatSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postLogOutSignalError() instead")
    void postLogOutSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postLogOutSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postPinChatMessageSignalError() instead")
    void postPinChatMessageSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postPinChatMessageSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postPostStorySignalError() instead")
    void postPostStorySignalE(OAIPost_postStory_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postPostStorySignalError(OAIPost_postStory_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postPromoteChatMemberSignalError() instead")
    void postPromoteChatMemberSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postPromoteChatMemberSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postReadBusinessMessageSignalError() instead")
    void postReadBusinessMessageSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postReadBusinessMessageSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postRefundStarPaymentSignalError() instead")
    void postRefundStarPaymentSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postRefundStarPaymentSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postRemoveBusinessAccountProfilePhotoSignalError() instead")
    void postRemoveBusinessAccountProfilePhotoSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postRemoveBusinessAccountProfilePhotoSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postRemoveChatVerificationSignalError() instead")
    void postRemoveChatVerificationSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postRemoveChatVerificationSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postRemoveUserVerificationSignalError() instead")
    void postRemoveUserVerificationSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postRemoveUserVerificationSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postReopenForumTopicSignalError() instead")
    void postReopenForumTopicSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postReopenForumTopicSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postReopenGeneralForumTopicSignalError() instead")
    void postReopenGeneralForumTopicSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postReopenGeneralForumTopicSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postReplaceStickerInSetSignalError() instead")
    void postReplaceStickerInSetSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postReplaceStickerInSetSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postRestrictChatMemberSignalError() instead")
    void postRestrictChatMemberSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postRestrictChatMemberSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postRevokeChatInviteLinkSignalError() instead")
    void postRevokeChatInviteLinkSignalE(OAIPost_createChatInviteLink_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postRevokeChatInviteLinkSignalError(OAIPost_createChatInviteLink_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSavePreparedInlineMessageSignalError() instead")
    void postSavePreparedInlineMessageSignalE(OAIPost_savePreparedInlineMessage_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSavePreparedInlineMessageSignalError(OAIPost_savePreparedInlineMessage_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendAnimationSignalError() instead")
    void postSendAnimationSignalE(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendAnimationSignalError(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendAudioSignalError() instead")
    void postSendAudioSignalE(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendAudioSignalError(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendChatActionSignalError() instead")
    void postSendChatActionSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendChatActionSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendContactSignalError() instead")
    void postSendContactSignalE(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendContactSignalError(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendDiceSignalError() instead")
    void postSendDiceSignalE(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendDiceSignalError(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendDocumentSignalError() instead")
    void postSendDocumentSignalE(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendDocumentSignalError(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendGameSignalError() instead")
    void postSendGameSignalE(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendGameSignalError(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendGiftSignalError() instead")
    void postSendGiftSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendGiftSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendInvoiceSignalError() instead")
    void postSendInvoiceSignalE(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendInvoiceSignalError(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendLocationSignalError() instead")
    void postSendLocationSignalE(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendLocationSignalError(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendMediaGroupSignalError() instead")
    void postSendMediaGroupSignalE(OAIPost_sendMediaGroup_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendMediaGroupSignalError(OAIPost_sendMediaGroup_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendMessageSignalError() instead")
    void postSendMessageSignalE(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendMessageSignalError(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendPaidMediaSignalError() instead")
    void postSendPaidMediaSignalE(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendPaidMediaSignalError(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendPhotoSignalError() instead")
    void postSendPhotoSignalE(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendPhotoSignalError(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendPollSignalError() instead")
    void postSendPollSignalE(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendPollSignalError(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendStickerSignalError() instead")
    void postSendStickerSignalE(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendStickerSignalError(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendVenueSignalError() instead")
    void postSendVenueSignalE(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendVenueSignalError(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendVideoSignalError() instead")
    void postSendVideoSignalE(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendVideoSignalError(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendVideoNoteSignalError() instead")
    void postSendVideoNoteSignalE(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendVideoNoteSignalError(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendVoiceSignalError() instead")
    void postSendVoiceSignalE(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendVoiceSignalError(OAIPost_sendMessage_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetBusinessAccountBioSignalError() instead")
    void postSetBusinessAccountBioSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetBusinessAccountBioSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetBusinessAccountGiftSettingsSignalError() instead")
    void postSetBusinessAccountGiftSettingsSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetBusinessAccountGiftSettingsSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetBusinessAccountNameSignalError() instead")
    void postSetBusinessAccountNameSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetBusinessAccountNameSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetBusinessAccountProfilePhotoSignalError() instead")
    void postSetBusinessAccountProfilePhotoSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetBusinessAccountProfilePhotoSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetBusinessAccountUsernameSignalError() instead")
    void postSetBusinessAccountUsernameSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetBusinessAccountUsernameSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetChatAdministratorCustomTitleSignalError() instead")
    void postSetChatAdministratorCustomTitleSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetChatAdministratorCustomTitleSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetChatDescriptionSignalError() instead")
    void postSetChatDescriptionSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetChatDescriptionSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetChatMenuButtonSignalError() instead")
    void postSetChatMenuButtonSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetChatMenuButtonSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetChatPermissionsSignalError() instead")
    void postSetChatPermissionsSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetChatPermissionsSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetChatPhotoSignalError() instead")
    void postSetChatPhotoSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetChatPhotoSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetChatStickerSetSignalError() instead")
    void postSetChatStickerSetSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetChatStickerSetSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetChatTitleSignalError() instead")
    void postSetChatTitleSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetChatTitleSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetCustomEmojiStickerSetThumbnailSignalError() instead")
    void postSetCustomEmojiStickerSetThumbnailSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetCustomEmojiStickerSetThumbnailSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetGameScoreSignalError() instead")
    void postSetGameScoreSignalE(OAIPost_editMessageText_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetGameScoreSignalError(OAIPost_editMessageText_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetMessageReactionSignalError() instead")
    void postSetMessageReactionSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetMessageReactionSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetMyCommandsSignalError() instead")
    void postSetMyCommandsSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetMyCommandsSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetMyDefaultAdministratorRightsSignalError() instead")
    void postSetMyDefaultAdministratorRightsSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetMyDefaultAdministratorRightsSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetMyDescriptionSignalError() instead")
    void postSetMyDescriptionSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetMyDescriptionSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetMyNameSignalError() instead")
    void postSetMyNameSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetMyNameSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetMyShortDescriptionSignalError() instead")
    void postSetMyShortDescriptionSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetMyShortDescriptionSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetPassportDataErrorsSignalError() instead")
    void postSetPassportDataErrorsSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetPassportDataErrorsSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetStickerEmojiListSignalError() instead")
    void postSetStickerEmojiListSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetStickerEmojiListSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetStickerKeywordsSignalError() instead")
    void postSetStickerKeywordsSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetStickerKeywordsSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetStickerMaskPositionSignalError() instead")
    void postSetStickerMaskPositionSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetStickerMaskPositionSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetStickerPositionInSetSignalError() instead")
    void postSetStickerPositionInSetSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetStickerPositionInSetSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetStickerSetThumbnailSignalError() instead")
    void postSetStickerSetThumbnailSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetStickerSetThumbnailSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetStickerSetTitleSignalError() instead")
    void postSetStickerSetTitleSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetStickerSetTitleSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetUserEmojiStatusSignalError() instead")
    void postSetUserEmojiStatusSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetUserEmojiStatusSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetWebhookSignalError() instead")
    void postSetWebhookSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetWebhookSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postStopMessageLiveLocationSignalError() instead")
    void postStopMessageLiveLocationSignalE(OAIPost_editMessageText_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postStopMessageLiveLocationSignalError(OAIPost_editMessageText_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postStopPollSignalError() instead")
    void postStopPollSignalE(OAIPost_stopPoll_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postStopPollSignalError(OAIPost_stopPoll_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postTransferBusinessAccountStarsSignalError() instead")
    void postTransferBusinessAccountStarsSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postTransferBusinessAccountStarsSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postTransferGiftSignalError() instead")
    void postTransferGiftSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postTransferGiftSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postUnbanChatMemberSignalError() instead")
    void postUnbanChatMemberSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postUnbanChatMemberSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postUnbanChatSenderChatSignalError() instead")
    void postUnbanChatSenderChatSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postUnbanChatSenderChatSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postUnhideGeneralForumTopicSignalError() instead")
    void postUnhideGeneralForumTopicSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postUnhideGeneralForumTopicSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postUnpinAllChatMessagesSignalError() instead")
    void postUnpinAllChatMessagesSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postUnpinAllChatMessagesSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postUnpinAllForumTopicMessagesSignalError() instead")
    void postUnpinAllForumTopicMessagesSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postUnpinAllForumTopicMessagesSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postUnpinAllGeneralForumTopicMessagesSignalError() instead")
    void postUnpinAllGeneralForumTopicMessagesSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postUnpinAllGeneralForumTopicMessagesSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postUnpinChatMessageSignalError() instead")
    void postUnpinChatMessageSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postUnpinChatMessageSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postUpgradeGiftSignalError() instead")
    void postUpgradeGiftSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postUpgradeGiftSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postUploadStickerFileSignalError() instead")
    void postUploadStickerFileSignalE(OAIPost_getFile_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postUploadStickerFileSignalError(OAIPost_getFile_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postVerifyChatSignalError() instead")
    void postVerifyChatSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postVerifyChatSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postVerifyUserSignalError() instead")
    void postVerifyUserSignalE(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postVerifyUserSignalError(OAIPost_setWebhook_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use postAddStickerToSetSignalErrorFull() instead")
    void postAddStickerToSetSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postAddStickerToSetSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postAnswerCallbackQuerySignalErrorFull() instead")
    void postAnswerCallbackQuerySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postAnswerCallbackQuerySignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postAnswerInlineQuerySignalErrorFull() instead")
    void postAnswerInlineQuerySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postAnswerInlineQuerySignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postAnswerPreCheckoutQuerySignalErrorFull() instead")
    void postAnswerPreCheckoutQuerySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postAnswerPreCheckoutQuerySignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postAnswerShippingQuerySignalErrorFull() instead")
    void postAnswerShippingQuerySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postAnswerShippingQuerySignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postAnswerWebAppQuerySignalErrorFull() instead")
    void postAnswerWebAppQuerySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postAnswerWebAppQuerySignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postApproveChatJoinRequestSignalErrorFull() instead")
    void postApproveChatJoinRequestSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postApproveChatJoinRequestSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postBanChatMemberSignalErrorFull() instead")
    void postBanChatMemberSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postBanChatMemberSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postBanChatSenderChatSignalErrorFull() instead")
    void postBanChatSenderChatSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postBanChatSenderChatSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postCloseSignalErrorFull() instead")
    void postCloseSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postCloseSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postCloseForumTopicSignalErrorFull() instead")
    void postCloseForumTopicSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postCloseForumTopicSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postCloseGeneralForumTopicSignalErrorFull() instead")
    void postCloseGeneralForumTopicSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postCloseGeneralForumTopicSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postConvertGiftToStarsSignalErrorFull() instead")
    void postConvertGiftToStarsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postConvertGiftToStarsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postCopyMessageSignalErrorFull() instead")
    void postCopyMessageSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postCopyMessageSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postCopyMessagesSignalErrorFull() instead")
    void postCopyMessagesSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postCopyMessagesSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postCreateChatInviteLinkSignalErrorFull() instead")
    void postCreateChatInviteLinkSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postCreateChatInviteLinkSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postCreateChatSubscriptionInviteLinkSignalErrorFull() instead")
    void postCreateChatSubscriptionInviteLinkSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postCreateChatSubscriptionInviteLinkSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postCreateForumTopicSignalErrorFull() instead")
    void postCreateForumTopicSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postCreateForumTopicSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postCreateInvoiceLinkSignalErrorFull() instead")
    void postCreateInvoiceLinkSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postCreateInvoiceLinkSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postCreateNewStickerSetSignalErrorFull() instead")
    void postCreateNewStickerSetSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postCreateNewStickerSetSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postDeclineChatJoinRequestSignalErrorFull() instead")
    void postDeclineChatJoinRequestSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postDeclineChatJoinRequestSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postDeleteBusinessMessagesSignalErrorFull() instead")
    void postDeleteBusinessMessagesSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postDeleteBusinessMessagesSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postDeleteChatPhotoSignalErrorFull() instead")
    void postDeleteChatPhotoSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postDeleteChatPhotoSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postDeleteChatStickerSetSignalErrorFull() instead")
    void postDeleteChatStickerSetSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postDeleteChatStickerSetSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postDeleteForumTopicSignalErrorFull() instead")
    void postDeleteForumTopicSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postDeleteForumTopicSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postDeleteMessageSignalErrorFull() instead")
    void postDeleteMessageSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postDeleteMessageSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postDeleteMessagesSignalErrorFull() instead")
    void postDeleteMessagesSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postDeleteMessagesSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postDeleteMyCommandsSignalErrorFull() instead")
    void postDeleteMyCommandsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postDeleteMyCommandsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postDeleteStickerFromSetSignalErrorFull() instead")
    void postDeleteStickerFromSetSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postDeleteStickerFromSetSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postDeleteStickerSetSignalErrorFull() instead")
    void postDeleteStickerSetSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postDeleteStickerSetSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postDeleteStorySignalErrorFull() instead")
    void postDeleteStorySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postDeleteStorySignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postDeleteWebhookSignalErrorFull() instead")
    void postDeleteWebhookSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postDeleteWebhookSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postEditChatInviteLinkSignalErrorFull() instead")
    void postEditChatInviteLinkSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postEditChatInviteLinkSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postEditChatSubscriptionInviteLinkSignalErrorFull() instead")
    void postEditChatSubscriptionInviteLinkSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postEditChatSubscriptionInviteLinkSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postEditForumTopicSignalErrorFull() instead")
    void postEditForumTopicSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postEditForumTopicSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postEditGeneralForumTopicSignalErrorFull() instead")
    void postEditGeneralForumTopicSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postEditGeneralForumTopicSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postEditMessageCaptionSignalErrorFull() instead")
    void postEditMessageCaptionSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postEditMessageCaptionSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postEditMessageLiveLocationSignalErrorFull() instead")
    void postEditMessageLiveLocationSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postEditMessageLiveLocationSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postEditMessageMediaSignalErrorFull() instead")
    void postEditMessageMediaSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postEditMessageMediaSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postEditMessageReplyMarkupSignalErrorFull() instead")
    void postEditMessageReplyMarkupSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postEditMessageReplyMarkupSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postEditMessageTextSignalErrorFull() instead")
    void postEditMessageTextSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postEditMessageTextSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postEditStorySignalErrorFull() instead")
    void postEditStorySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postEditStorySignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postEditUserStarSubscriptionSignalErrorFull() instead")
    void postEditUserStarSubscriptionSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postEditUserStarSubscriptionSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postExportChatInviteLinkSignalErrorFull() instead")
    void postExportChatInviteLinkSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postExportChatInviteLinkSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postForwardMessageSignalErrorFull() instead")
    void postForwardMessageSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postForwardMessageSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postForwardMessagesSignalErrorFull() instead")
    void postForwardMessagesSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postForwardMessagesSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetAvailableGiftsSignalErrorFull() instead")
    void postGetAvailableGiftsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetAvailableGiftsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetBusinessAccountGiftsSignalErrorFull() instead")
    void postGetBusinessAccountGiftsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetBusinessAccountGiftsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetBusinessAccountStarBalanceSignalErrorFull() instead")
    void postGetBusinessAccountStarBalanceSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetBusinessAccountStarBalanceSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetBusinessConnectionSignalErrorFull() instead")
    void postGetBusinessConnectionSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetBusinessConnectionSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetChatSignalErrorFull() instead")
    void postGetChatSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetChatSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetChatAdministratorsSignalErrorFull() instead")
    void postGetChatAdministratorsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetChatAdministratorsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetChatMemberSignalErrorFull() instead")
    void postGetChatMemberSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetChatMemberSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetChatMemberCountSignalErrorFull() instead")
    void postGetChatMemberCountSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetChatMemberCountSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetChatMenuButtonSignalErrorFull() instead")
    void postGetChatMenuButtonSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetChatMenuButtonSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetCustomEmojiStickersSignalErrorFull() instead")
    void postGetCustomEmojiStickersSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetCustomEmojiStickersSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetFileSignalErrorFull() instead")
    void postGetFileSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetFileSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetForumTopicIconStickersSignalErrorFull() instead")
    void postGetForumTopicIconStickersSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetForumTopicIconStickersSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetGameHighScoresSignalErrorFull() instead")
    void postGetGameHighScoresSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetGameHighScoresSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetMeSignalErrorFull() instead")
    void postGetMeSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetMeSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetMyCommandsSignalErrorFull() instead")
    void postGetMyCommandsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetMyCommandsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetMyDefaultAdministratorRightsSignalErrorFull() instead")
    void postGetMyDefaultAdministratorRightsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetMyDefaultAdministratorRightsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetMyDescriptionSignalErrorFull() instead")
    void postGetMyDescriptionSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetMyDescriptionSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetMyNameSignalErrorFull() instead")
    void postGetMyNameSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetMyNameSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetMyShortDescriptionSignalErrorFull() instead")
    void postGetMyShortDescriptionSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetMyShortDescriptionSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetStarTransactionsSignalErrorFull() instead")
    void postGetStarTransactionsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetStarTransactionsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetStickerSetSignalErrorFull() instead")
    void postGetStickerSetSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetStickerSetSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetUpdatesSignalErrorFull() instead")
    void postGetUpdatesSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetUpdatesSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetUserChatBoostsSignalErrorFull() instead")
    void postGetUserChatBoostsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetUserChatBoostsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetUserProfilePhotosSignalErrorFull() instead")
    void postGetUserProfilePhotosSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetUserProfilePhotosSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGetWebhookInfoSignalErrorFull() instead")
    void postGetWebhookInfoSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGetWebhookInfoSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postGiftPremiumSubscriptionSignalErrorFull() instead")
    void postGiftPremiumSubscriptionSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postGiftPremiumSubscriptionSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postHideGeneralForumTopicSignalErrorFull() instead")
    void postHideGeneralForumTopicSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postHideGeneralForumTopicSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postLeaveChatSignalErrorFull() instead")
    void postLeaveChatSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postLeaveChatSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postLogOutSignalErrorFull() instead")
    void postLogOutSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postLogOutSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postPinChatMessageSignalErrorFull() instead")
    void postPinChatMessageSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postPinChatMessageSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postPostStorySignalErrorFull() instead")
    void postPostStorySignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postPostStorySignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postPromoteChatMemberSignalErrorFull() instead")
    void postPromoteChatMemberSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postPromoteChatMemberSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postReadBusinessMessageSignalErrorFull() instead")
    void postReadBusinessMessageSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postReadBusinessMessageSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postRefundStarPaymentSignalErrorFull() instead")
    void postRefundStarPaymentSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postRefundStarPaymentSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postRemoveBusinessAccountProfilePhotoSignalErrorFull() instead")
    void postRemoveBusinessAccountProfilePhotoSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postRemoveBusinessAccountProfilePhotoSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postRemoveChatVerificationSignalErrorFull() instead")
    void postRemoveChatVerificationSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postRemoveChatVerificationSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postRemoveUserVerificationSignalErrorFull() instead")
    void postRemoveUserVerificationSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postRemoveUserVerificationSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postReopenForumTopicSignalErrorFull() instead")
    void postReopenForumTopicSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postReopenForumTopicSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postReopenGeneralForumTopicSignalErrorFull() instead")
    void postReopenGeneralForumTopicSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postReopenGeneralForumTopicSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postReplaceStickerInSetSignalErrorFull() instead")
    void postReplaceStickerInSetSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postReplaceStickerInSetSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postRestrictChatMemberSignalErrorFull() instead")
    void postRestrictChatMemberSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postRestrictChatMemberSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postRevokeChatInviteLinkSignalErrorFull() instead")
    void postRevokeChatInviteLinkSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postRevokeChatInviteLinkSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSavePreparedInlineMessageSignalErrorFull() instead")
    void postSavePreparedInlineMessageSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSavePreparedInlineMessageSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendAnimationSignalErrorFull() instead")
    void postSendAnimationSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendAnimationSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendAudioSignalErrorFull() instead")
    void postSendAudioSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendAudioSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendChatActionSignalErrorFull() instead")
    void postSendChatActionSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendChatActionSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendContactSignalErrorFull() instead")
    void postSendContactSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendContactSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendDiceSignalErrorFull() instead")
    void postSendDiceSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendDiceSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendDocumentSignalErrorFull() instead")
    void postSendDocumentSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendDocumentSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendGameSignalErrorFull() instead")
    void postSendGameSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendGameSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendGiftSignalErrorFull() instead")
    void postSendGiftSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendGiftSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendInvoiceSignalErrorFull() instead")
    void postSendInvoiceSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendInvoiceSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendLocationSignalErrorFull() instead")
    void postSendLocationSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendLocationSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendMediaGroupSignalErrorFull() instead")
    void postSendMediaGroupSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendMediaGroupSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendMessageSignalErrorFull() instead")
    void postSendMessageSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendMessageSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendPaidMediaSignalErrorFull() instead")
    void postSendPaidMediaSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendPaidMediaSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendPhotoSignalErrorFull() instead")
    void postSendPhotoSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendPhotoSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendPollSignalErrorFull() instead")
    void postSendPollSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendPollSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendStickerSignalErrorFull() instead")
    void postSendStickerSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendStickerSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendVenueSignalErrorFull() instead")
    void postSendVenueSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendVenueSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendVideoSignalErrorFull() instead")
    void postSendVideoSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendVideoSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendVideoNoteSignalErrorFull() instead")
    void postSendVideoNoteSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendVideoNoteSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSendVoiceSignalErrorFull() instead")
    void postSendVoiceSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSendVoiceSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetBusinessAccountBioSignalErrorFull() instead")
    void postSetBusinessAccountBioSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetBusinessAccountBioSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetBusinessAccountGiftSettingsSignalErrorFull() instead")
    void postSetBusinessAccountGiftSettingsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetBusinessAccountGiftSettingsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetBusinessAccountNameSignalErrorFull() instead")
    void postSetBusinessAccountNameSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetBusinessAccountNameSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetBusinessAccountProfilePhotoSignalErrorFull() instead")
    void postSetBusinessAccountProfilePhotoSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetBusinessAccountProfilePhotoSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetBusinessAccountUsernameSignalErrorFull() instead")
    void postSetBusinessAccountUsernameSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetBusinessAccountUsernameSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetChatAdministratorCustomTitleSignalErrorFull() instead")
    void postSetChatAdministratorCustomTitleSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetChatAdministratorCustomTitleSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetChatDescriptionSignalErrorFull() instead")
    void postSetChatDescriptionSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetChatDescriptionSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetChatMenuButtonSignalErrorFull() instead")
    void postSetChatMenuButtonSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetChatMenuButtonSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetChatPermissionsSignalErrorFull() instead")
    void postSetChatPermissionsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetChatPermissionsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetChatPhotoSignalErrorFull() instead")
    void postSetChatPhotoSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetChatPhotoSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetChatStickerSetSignalErrorFull() instead")
    void postSetChatStickerSetSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetChatStickerSetSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetChatTitleSignalErrorFull() instead")
    void postSetChatTitleSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetChatTitleSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetCustomEmojiStickerSetThumbnailSignalErrorFull() instead")
    void postSetCustomEmojiStickerSetThumbnailSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetCustomEmojiStickerSetThumbnailSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetGameScoreSignalErrorFull() instead")
    void postSetGameScoreSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetGameScoreSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetMessageReactionSignalErrorFull() instead")
    void postSetMessageReactionSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetMessageReactionSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetMyCommandsSignalErrorFull() instead")
    void postSetMyCommandsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetMyCommandsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetMyDefaultAdministratorRightsSignalErrorFull() instead")
    void postSetMyDefaultAdministratorRightsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetMyDefaultAdministratorRightsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetMyDescriptionSignalErrorFull() instead")
    void postSetMyDescriptionSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetMyDescriptionSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetMyNameSignalErrorFull() instead")
    void postSetMyNameSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetMyNameSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetMyShortDescriptionSignalErrorFull() instead")
    void postSetMyShortDescriptionSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetMyShortDescriptionSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetPassportDataErrorsSignalErrorFull() instead")
    void postSetPassportDataErrorsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetPassportDataErrorsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetStickerEmojiListSignalErrorFull() instead")
    void postSetStickerEmojiListSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetStickerEmojiListSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetStickerKeywordsSignalErrorFull() instead")
    void postSetStickerKeywordsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetStickerKeywordsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetStickerMaskPositionSignalErrorFull() instead")
    void postSetStickerMaskPositionSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetStickerMaskPositionSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetStickerPositionInSetSignalErrorFull() instead")
    void postSetStickerPositionInSetSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetStickerPositionInSetSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetStickerSetThumbnailSignalErrorFull() instead")
    void postSetStickerSetThumbnailSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetStickerSetThumbnailSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetStickerSetTitleSignalErrorFull() instead")
    void postSetStickerSetTitleSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetStickerSetTitleSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetUserEmojiStatusSignalErrorFull() instead")
    void postSetUserEmojiStatusSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetUserEmojiStatusSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postSetWebhookSignalErrorFull() instead")
    void postSetWebhookSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postSetWebhookSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postStopMessageLiveLocationSignalErrorFull() instead")
    void postStopMessageLiveLocationSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postStopMessageLiveLocationSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postStopPollSignalErrorFull() instead")
    void postStopPollSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postStopPollSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postTransferBusinessAccountStarsSignalErrorFull() instead")
    void postTransferBusinessAccountStarsSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postTransferBusinessAccountStarsSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postTransferGiftSignalErrorFull() instead")
    void postTransferGiftSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postTransferGiftSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postUnbanChatMemberSignalErrorFull() instead")
    void postUnbanChatMemberSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postUnbanChatMemberSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postUnbanChatSenderChatSignalErrorFull() instead")
    void postUnbanChatSenderChatSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postUnbanChatSenderChatSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postUnhideGeneralForumTopicSignalErrorFull() instead")
    void postUnhideGeneralForumTopicSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postUnhideGeneralForumTopicSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postUnpinAllChatMessagesSignalErrorFull() instead")
    void postUnpinAllChatMessagesSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postUnpinAllChatMessagesSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postUnpinAllForumTopicMessagesSignalErrorFull() instead")
    void postUnpinAllForumTopicMessagesSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postUnpinAllForumTopicMessagesSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postUnpinAllGeneralForumTopicMessagesSignalErrorFull() instead")
    void postUnpinAllGeneralForumTopicMessagesSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postUnpinAllGeneralForumTopicMessagesSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postUnpinChatMessageSignalErrorFull() instead")
    void postUnpinChatMessageSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postUnpinChatMessageSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postUpgradeGiftSignalErrorFull() instead")
    void postUpgradeGiftSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postUpgradeGiftSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postUploadStickerFileSignalErrorFull() instead")
    void postUploadStickerFileSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postUploadStickerFileSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postVerifyChatSignalErrorFull() instead")
    void postVerifyChatSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postVerifyChatSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postVerifyUserSignalErrorFull() instead")
    void postVerifyUserSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postVerifyUserSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace tele_rest
#endif
