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

/*
 * OAI_copyMessage_post_request.h
 *
 * 
 */

#ifndef OAI_copyMessage_post_request_H
#define OAI_copyMessage_post_request_H

#include <QJsonObject>

#include "OAIMessageEntity.h"
#include "OAIReplyParameters.h"
#include "OAI_forwardMessage_post_request_from_chat_id.h"
#include "OAI_sendMessage_post_request_chat_id.h"
#include "OAI_sendMessage_post_request_reply_markup.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIMessageEntity;
class OAIReplyParameters;
class OAI_sendMessage_post_request_reply_markup;

class OAI_copyMessage_post_request : public OAIObject {
public:
    OAI_copyMessage_post_request();
    OAI_copyMessage_post_request(QString json);
    ~OAI_copyMessage_post_request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAI_sendMessage_post_request_chat_id getChatId() const;
    void setChatId(const OAI_sendMessage_post_request_chat_id &chat_id);
    bool is_chat_id_Set() const;
    bool is_chat_id_Valid() const;

    OAI_forwardMessage_post_request_from_chat_id getFromChatId() const;
    void setFromChatId(const OAI_forwardMessage_post_request_from_chat_id &from_chat_id);
    bool is_from_chat_id_Set() const;
    bool is_from_chat_id_Valid() const;

    qint32 getMessageId() const;
    void setMessageId(const qint32 &message_id);
    bool is_message_id_Set() const;
    bool is_message_id_Valid() const;

    qint32 getMessageThreadId() const;
    void setMessageThreadId(const qint32 &message_thread_id);
    bool is_message_thread_id_Set() const;
    bool is_message_thread_id_Valid() const;

    qint32 getVideoStartTimestamp() const;
    void setVideoStartTimestamp(const qint32 &video_start_timestamp);
    bool is_video_start_timestamp_Set() const;
    bool is_video_start_timestamp_Valid() const;

    QString getCaption() const;
    void setCaption(const QString &caption);
    bool is_caption_Set() const;
    bool is_caption_Valid() const;

    QString getParseMode() const;
    void setParseMode(const QString &parse_mode);
    bool is_parse_mode_Set() const;
    bool is_parse_mode_Valid() const;

    QList<OAIMessageEntity> getCaptionEntities() const;
    void setCaptionEntities(const QList<OAIMessageEntity> &caption_entities);
    bool is_caption_entities_Set() const;
    bool is_caption_entities_Valid() const;

    bool isShowCaptionAboveMedia() const;
    void setShowCaptionAboveMedia(const bool &show_caption_above_media);
    bool is_show_caption_above_media_Set() const;
    bool is_show_caption_above_media_Valid() const;

    bool isDisableNotification() const;
    void setDisableNotification(const bool &disable_notification);
    bool is_disable_notification_Set() const;
    bool is_disable_notification_Valid() const;

    bool isProtectContent() const;
    void setProtectContent(const bool &protect_content);
    bool is_protect_content_Set() const;
    bool is_protect_content_Valid() const;

    bool isAllowPaidBroadcast() const;
    void setAllowPaidBroadcast(const bool &allow_paid_broadcast);
    bool is_allow_paid_broadcast_Set() const;
    bool is_allow_paid_broadcast_Valid() const;

    OAIReplyParameters getReplyParameters() const;
    void setReplyParameters(const OAIReplyParameters &reply_parameters);
    bool is_reply_parameters_Set() const;
    bool is_reply_parameters_Valid() const;

    OAI_sendMessage_post_request_reply_markup getReplyMarkup() const;
    void setReplyMarkup(const OAI_sendMessage_post_request_reply_markup &reply_markup);
    bool is_reply_markup_Set() const;
    bool is_reply_markup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAI_sendMessage_post_request_chat_id m_chat_id;
    bool m_chat_id_isSet;
    bool m_chat_id_isValid;

    OAI_forwardMessage_post_request_from_chat_id m_from_chat_id;
    bool m_from_chat_id_isSet;
    bool m_from_chat_id_isValid;

    qint32 m_message_id;
    bool m_message_id_isSet;
    bool m_message_id_isValid;

    qint32 m_message_thread_id;
    bool m_message_thread_id_isSet;
    bool m_message_thread_id_isValid;

    qint32 m_video_start_timestamp;
    bool m_video_start_timestamp_isSet;
    bool m_video_start_timestamp_isValid;

    QString m_caption;
    bool m_caption_isSet;
    bool m_caption_isValid;

    QString m_parse_mode;
    bool m_parse_mode_isSet;
    bool m_parse_mode_isValid;

    QList<OAIMessageEntity> m_caption_entities;
    bool m_caption_entities_isSet;
    bool m_caption_entities_isValid;

    bool m_show_caption_above_media;
    bool m_show_caption_above_media_isSet;
    bool m_show_caption_above_media_isValid;

    bool m_disable_notification;
    bool m_disable_notification_isSet;
    bool m_disable_notification_isValid;

    bool m_protect_content;
    bool m_protect_content_isSet;
    bool m_protect_content_isValid;

    bool m_allow_paid_broadcast;
    bool m_allow_paid_broadcast_isSet;
    bool m_allow_paid_broadcast_isValid;

    OAIReplyParameters m_reply_parameters;
    bool m_reply_parameters_isSet;
    bool m_reply_parameters_isValid;

    OAI_sendMessage_post_request_reply_markup m_reply_markup;
    bool m_reply_markup_isSet;
    bool m_reply_markup_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAI_copyMessage_post_request)

#endif // OAI_copyMessage_post_request_H
