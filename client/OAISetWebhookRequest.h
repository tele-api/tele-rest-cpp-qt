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

/*
 * OAISetWebhookRequest.h
 *
 * Request parameters for setWebhook
 */

#ifndef OAISetWebhookRequest_H
#define OAISetWebhookRequest_H

#include <QJsonObject>

#include <QJsonValue>
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {

class OAISetWebhookRequest : public OAIObject {
public:
    OAISetWebhookRequest();
    OAISetWebhookRequest(QString json);
    ~OAISetWebhookRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getUrl() const;
    void setUrl(const QString &url);
    bool is_url_Set() const;
    bool is_url_Valid() const;

    QJsonValue getCertificate() const;
    void setCertificate(const QJsonValue &certificate);
    bool is_certificate_Set() const;
    bool is_certificate_Valid() const;

    QString getIpAddress() const;
    void setIpAddress(const QString &ip_address);
    bool is_ip_address_Set() const;
    bool is_ip_address_Valid() const;

    qint32 getMaxConnections() const;
    void setMaxConnections(const qint32 &max_connections);
    bool is_max_connections_Set() const;
    bool is_max_connections_Valid() const;

    QList<QString> getAllowedUpdates() const;
    void setAllowedUpdates(const QList<QString> &allowed_updates);
    bool is_allowed_updates_Set() const;
    bool is_allowed_updates_Valid() const;

    bool isDropPendingUpdates() const;
    void setDropPendingUpdates(const bool &drop_pending_updates);
    bool is_drop_pending_updates_Set() const;
    bool is_drop_pending_updates_Valid() const;

    QString getSecretToken() const;
    void setSecretToken(const QString &secret_token);
    bool is_secret_token_Set() const;
    bool is_secret_token_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_url;
    bool m_url_isSet;
    bool m_url_isValid;

    QJsonValue m_certificate;
    bool m_certificate_isSet;
    bool m_certificate_isValid;

    QString m_ip_address;
    bool m_ip_address_isSet;
    bool m_ip_address_isValid;

    qint32 m_max_connections;
    bool m_max_connections_isSet;
    bool m_max_connections_isValid;

    QList<QString> m_allowed_updates;
    bool m_allowed_updates_isSet;
    bool m_allowed_updates_isValid;

    bool m_drop_pending_updates;
    bool m_drop_pending_updates_isSet;
    bool m_drop_pending_updates_isValid;

    QString m_secret_token;
    bool m_secret_token_isSet;
    bool m_secret_token_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAISetWebhookRequest)

#endif // OAISetWebhookRequest_H
