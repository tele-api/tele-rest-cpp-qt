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
 * OAIChatJoinRequest.h
 *
 * Represents a join request sent to a chat.
 */

#ifndef OAIChatJoinRequest_H
#define OAIChatJoinRequest_H

#include <QJsonObject>

#include "OAIChat.h"
#include "OAIChatInviteLink.h"
#include "OAIUser.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIChat;
class OAIUser;
class OAIChatInviteLink;

class OAIChatJoinRequest : public OAIObject {
public:
    OAIChatJoinRequest();
    OAIChatJoinRequest(QString json);
    ~OAIChatJoinRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIChat getChat() const;
    void setChat(const OAIChat &chat);
    bool is_chat_Set() const;
    bool is_chat_Valid() const;

    OAIUser getFrom() const;
    void setFrom(const OAIUser &from);
    bool is_from_Set() const;
    bool is_from_Valid() const;

    qint32 getUserChatId() const;
    void setUserChatId(const qint32 &user_chat_id);
    bool is_user_chat_id_Set() const;
    bool is_user_chat_id_Valid() const;

    qint32 getDate() const;
    void setDate(const qint32 &date);
    bool is_date_Set() const;
    bool is_date_Valid() const;

    QString getBio() const;
    void setBio(const QString &bio);
    bool is_bio_Set() const;
    bool is_bio_Valid() const;

    OAIChatInviteLink getInviteLink() const;
    void setInviteLink(const OAIChatInviteLink &invite_link);
    bool is_invite_link_Set() const;
    bool is_invite_link_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIChat m_chat;
    bool m_chat_isSet;
    bool m_chat_isValid;

    OAIUser m_from;
    bool m_from_isSet;
    bool m_from_isValid;

    qint32 m_user_chat_id;
    bool m_user_chat_id_isSet;
    bool m_user_chat_id_isValid;

    qint32 m_date;
    bool m_date_isSet;
    bool m_date_isValid;

    QString m_bio;
    bool m_bio_isSet;
    bool m_bio_isValid;

    OAIChatInviteLink m_invite_link;
    bool m_invite_link_isSet;
    bool m_invite_link_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIChatJoinRequest)

#endif // OAIChatJoinRequest_H
