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

/*
 * OAIPost_forwardMessage_request.h
 *
 * 
 */

#ifndef OAIPost_forwardMessage_request_H
#define OAIPost_forwardMessage_request_H

#include <QJsonObject>

#include "OAIPost_forwardMessage_request_from_chat_id.h"
#include "OAIPost_sendMessage_request_chat_id.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {

class OAIPost_forwardMessage_request : public OAIObject {
public:
    OAIPost_forwardMessage_request();
    OAIPost_forwardMessage_request(QString json);
    ~OAIPost_forwardMessage_request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIPost_sendMessage_request_chat_id getChatId() const;
    void setChatId(const OAIPost_sendMessage_request_chat_id &chat_id);
    bool is_chat_id_Set() const;
    bool is_chat_id_Valid() const;

    OAIPost_forwardMessage_request_from_chat_id getFromChatId() const;
    void setFromChatId(const OAIPost_forwardMessage_request_from_chat_id &from_chat_id);
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

    bool isDisableNotification() const;
    void setDisableNotification(const bool &disable_notification);
    bool is_disable_notification_Set() const;
    bool is_disable_notification_Valid() const;

    bool isProtectContent() const;
    void setProtectContent(const bool &protect_content);
    bool is_protect_content_Set() const;
    bool is_protect_content_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIPost_sendMessage_request_chat_id m_chat_id;
    bool m_chat_id_isSet;
    bool m_chat_id_isValid;

    OAIPost_forwardMessage_request_from_chat_id m_from_chat_id;
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

    bool m_disable_notification;
    bool m_disable_notification_isSet;
    bool m_disable_notification_isValid;

    bool m_protect_content;
    bool m_protect_content_isSet;
    bool m_protect_content_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIPost_forwardMessage_request)

#endif // OAIPost_forwardMessage_request_H
